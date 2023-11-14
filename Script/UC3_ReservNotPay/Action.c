Action()
{
	int randNumber;
	lr_start_transaction("UC3_ReservNotPay");

	lr_start_transaction("StartWebTours");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua-mobile", 
		"?0");
	
	startWebTours();

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	lr_end_transaction("StartWebTours",LR_AUTO);

	
	
	lr_start_transaction("LogIn");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	lr_think_time(5);

	logIn(lr_eval_string("{userSession}"),lr_eval_string("{login}"),lr_eval_string("{password}"));

	lr_end_transaction("LogIn",LR_AUTO);

	
	
	lr_start_transaction("ToFlightsPage");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");
	
	lr_think_time(5);

	web_reg_save_param("departcity",
	                   "lb=\">",
	                   "rb=</option>",
	                   "ord=all",
	                   "search=body",
	                   LAST);
	
	web_reg_save_param("seatPref",
	                   "lb=name=\"seatPref\" value=\"",
	                   "rb=\"",
	                   "ord=all",
	                   LAST);
	web_reg_save_param("seatType",
	                   "lb=name=\"seatType\" value=\"",
	                   "rb=\"",
	                   "ord=all",
	                   LAST);
	
	web_reg_find("Text=Find Flight",LAST);
	web_url("Search Flights Button",
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("ToFlightsPage",LR_AUTO);

	
	
	lr_start_transaction("ReservTicket");

	lr_save_string(lr_paramarr_random("departcity"),"depart_City");
	lr_save_string(lr_paramarr_random("departcity"),"arrive_City");
	lr_save_string(lr_paramarr_random("seatPref"),"seat_Pref");
	lr_save_string(lr_paramarr_random("seatType"),"seat_Type");
	
	//проверка, что города отправления и прибытия разные
	while(strcmp(lr_eval_string("{depart_City}"),lr_eval_string("{arrive_City}"))==0)
	{		
		lr_save_string(lr_paramarr_random("departcity"),"arrive_City");
	}

	web_add_auto_header("Origin",
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_think_time(5);

	web_reg_save_param("outboundflighting",
	                   "lb=name=\"outboundFlight\" value=\"",
	                   "rb=\"",
	                   "ord=all",
	                   //"search=body",
	                   LAST);	
	web_reg_save_param("departTime",
	                   "lb=<td align=\"center\">",
	                   "rb=<td align=\"center\">$",
	                   "ord=all",
	                   LAST);
	web_reg_save_param("numberAir",
	                   "lb=Blue Sky Air ",
	                   "rb=<",
	                   "ord=all",
	                   LAST);
	
	randNumber = rand()%5 + 1;  //Generate Random Number between 1 to 5
	lr_output_message("Random Number is %d", randNumber); 	
	lr_save_int(randNumber,"numPassengerRand");
	
	web_reg_find("Text=Find Flight",LAST);
	web_reg_find("Text=Flight departing from <B>{depart_City}</B> to <B>{arrive_City}</B> on <B>{departDate}</B>",LAST);
	
	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={depart_City}", ENDITEM, 
		"Name=departDate", "Value={departDate}", ENDITEM, 
		"Name=arrive", "Value={arrive_City}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value={numPassengerRand}", ENDITEM, 
		"Name=seatPref", "Value={seat_Pref}", ENDITEM, 
		"Name=seatType", "Value={seat_Type}", ENDITEM, 
		"Name=findFlights.x", "Value=77", ENDITEM, 
		"Name=findFlights.y", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);


	lr_save_string(lr_paramarr_random("outboundflighting"),"outboundFlight");
	
		//проверка открытия нужной страницы
	web_reg_find("Text=Payment Details",LAST);
	
	web_submit_data("reservations.pl_2",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl",
		"Snapshot=t6.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value={numPassengerRand}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value={seat_Type}", ENDITEM,
		"Name=seatPref", "Value={seat_Pref}", ENDITEM,
		"Name=reserveFlights.x", "Value=50", ENDITEM,
		"Name=reserveFlights.y", "Value=11", ENDITEM,
		LAST);
	lr_end_transaction("ReservTicket",LR_AUTO);
		
	
	
	lr_think_time(5);

	lr_start_transaction("ViewAllTicket");

	//проверка открытия нужной страницы
	web_reg_find("Text=Itinerary",LAST);

	//проверка, что не был зарезервирован билет
	web_reg_find("Text={departDate} : {departTime_1} : Flight {numberAir_1} leaves {depart_City} for {arrive_City}.","fail=found",LAST);
	web_reg_find("Text={departDate} : {departTime_2} : Flight {numberAir_2} leaves {depart_City} for {arrive_City}.","fail=found",LAST);
	web_reg_find("Text={departDate} : {departTime_3} : Flight {numberAir_3} leaves {depart_City} for {arrive_City}.","fail=found",LAST);
	web_reg_find("Text={departDate} : {departTime_4} : Flight {numberAir_4} leaves {depart_City} for {arrive_City}.","fail=found",LAST);
	
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("ViewAllTicket",LR_AUTO);
	

	
	
	lr_start_transaction("LogOut");
	
	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	logOut();

	lr_end_transaction("LogOut",LR_AUTO);
	
	
	lr_end_transaction("UC3_ReservNotPay", LR_AUTO);

	return 0;
}

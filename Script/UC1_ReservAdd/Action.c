Action()
{
int randNumber;
	lr_start_transaction("UC1_ReservAdd");

	
	
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

	randNumber = rand()%4 + 1;  	
	lr_save_int(randNumber,"numPassengerRand");
	
	lr_think_time(5);

	web_reg_save_param("outboundflighting",
	                   "lb=name=\"outboundFlight\" value=\"",
	                   "rb=\"",
	                   "ord=all",
	                   //"search=body",
	                   LAST);	

		
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

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_think_time(5);


	//получаем формулировку данных о рейсе
	web_reg_save_param("fligting",
		"LB={departDate} : ",
		"RB=\.",
		LAST);


	//проверка открытия нужной страницы
	web_reg_find("Text=<B>Thank you for booking through Web Tours.</B>",LAST);
	//проверка корректного использования карты клиента
	web_reg_find("Text=Total Charged to Credit Card # {creditCard}",LAST);
	//проверка верно указанных городов
	web_reg_find("Text=leaves {depart_City}  for {arrive_City}",LAST);
	
	if(randNumber==1)
	{
		//web_reg_find("Text=A {seat_Type} Class ticket\nfrom {depart_City} to {arrive_City}.",LAST);
		web_submit_data("reservations.pl_3",
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={lastName}", ENDITEM, 
		"Name=address1", "Value={streetUser}", ENDITEM, 
		"Name=address2", "Value={cityUser}", ENDITEM, 
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM, 
		"Name=creditCard", "Value={creditCard}", ENDITEM, 
		"Name=expDate", "Value={expCreditCard}", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value={numPassengerRand}", ENDITEM, 
		"Name=seatType", "Value={seat_Type}", ENDITEM, 
		"Name=seatPref", "Value={seat_Pref}", ENDITEM, 
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=64", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);
	}
	else if(randNumber==2)
	{
		web_reg_find("Text=<b><u>{numPassengerRand} {seat_Type} Class tickets from {depart_City} to {arrive_City}.</u></b>",LAST);
		web_submit_data("reservations.pl_4",
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={lastName}", ENDITEM, 
		"Name=address1", "Value={streetUser}", ENDITEM, 
		"Name=address2", "Value={cityUser}", ENDITEM, 
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM, 
		"Name=pass2", "Value={randFirstName} {randLastName}", ENDITEM,
		"Name=creditCard", "Value={creditCard}", ENDITEM, 
		"Name=expDate", "Value={expCreditCard}", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value={numPassengerRand}", ENDITEM, 
		"Name=seatType", "Value={seat_Type}", ENDITEM, 
		"Name=seatPref", "Value={seat_Pref}", ENDITEM, 
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=64", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);	
	}
	else if(randNumber==3)
	{
		web_reg_find("Text=<b><u>{numPassengerRand} {seat_Type} Class tickets from {depart_City} to {arrive_City}.</u></b>",LAST);
		web_submit_data("reservations.pl_5",
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={lastName}", ENDITEM, 
		"Name=address1", "Value={streetUser}", ENDITEM, 
		"Name=address2", "Value={cityUser}", ENDITEM, 
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM, 
		"Name=pass2", "Value={randFirstName} {randLastName}", ENDITEM,
		"Name=pass3", "Value={randFirstName} {randLastName}", ENDITEM,
		"Name=creditCard", "Value={creditCard}", ENDITEM, 
		"Name=expDate", "Value={expCreditCard}", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value={numPassengerRand}", ENDITEM, 
		"Name=seatType", "Value={seat_Type}", ENDITEM, 
		"Name=seatPref", "Value={seat_Pref}", ENDITEM, 
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=64", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);	
	}
		else if(randNumber==4)
	{
		web_reg_find("Text=<b><u>{numPassengerRand} {seat_Type} Class tickets from {depart_City} to {arrive_City}.</u></b>",LAST);
		web_submit_data("reservations.pl_5",
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={lastName}", ENDITEM, 
		"Name=address1", "Value={streetUser}", ENDITEM, 
		"Name=address2", "Value={cityUser}", ENDITEM, 
		"Name=pass1", "Value={firstName} {lastName}", ENDITEM, 
		"Name=pass2", "Value={randFirstName} {randLastName}", ENDITEM,
		"Name=pass3", "Value={randFirstName} {randLastName}", ENDITEM,
		"Name=pass4", "Value={randFirstName} {randLastName}", ENDITEM,
		"Name=creditCard", "Value={creditCard}", ENDITEM, 
		"Name=expDate", "Value={expCreditCard}", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value={numPassengerRand}", ENDITEM, 
		"Name=seatType", "Value={seat_Type}", ENDITEM, 
		"Name=seatPref", "Value={seat_Pref}", ENDITEM, 
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=64", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);	
	}

	lr_end_transaction("ReservTicket",LR_AUTO);

	
	
	lr_start_transaction("LogOut");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_think_time(5);
	
	logOut();

	lr_end_transaction("LogOut",LR_AUTO);
	
	
	lr_end_transaction("UC1_ReservAdd", LR_AUTO);

	return 0;
}
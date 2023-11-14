Action()
{
	lr_start_transaction("UC4_ReservDelete");

	
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

	lr_think_time(5);

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

	
	
	
	lr_start_transaction("ViewAllTicket");

	lr_think_time(5);

	web_reg_save_param("Flight",
	                   "lb=name=\"flightID\" value=\"",
	                   "rb=\"",
	                   "ord=all",
	                   LAST);
	
	web_reg_find("Text=Itinerary",LAST);
	
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("ViewAllTicket",LR_AUTO);
			
	
	

	lr_start_transaction("DeleteTicket");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_think_time(5);

	lr_save_int(atoi(lr_eval_string("{Flight_count}")),"countFlight");

	if(atoi(lr_eval_string("{countFlight}"))>0&&atoi(lr_eval_string("{countFlight}"))<=3)
	{

		web_reg_find("Text=name=\"flightID\" value=\"{Flight_1}\"","fail=found",LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t5.inf",
		ITEMDATA,
		"Name=1", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=60", ENDITEM,
		"Name=removeFlights.y", "Value=11", ENDITEM,
		LAST);
	}
	else if(atoi(lr_eval_string("{countFlight}"))<=5)
	{
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_1}\"","fail=found",LAST);
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_2}\"","fail=found",LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t6.inf",
		ITEMDATA,
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=60", ENDITEM,
		"Name=removeFlights.y", "Value=11", ENDITEM,
		LAST);
	}
	else if(atoi(lr_eval_string("{countFlight}"))>=6)
	{
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_1}\"","fail=found",LAST);
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_2}\"","fail=found",LAST);
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_3}\"","fail=found",LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t7.inf",
		ITEMDATA,
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=3", "Value=on", ENDITEM,
		"Name=removeFlights.x", "Value=60", ENDITEM,
		"Name=removeFlights.y", "Value=11", ENDITEM,
		LAST);		
	}
		
	lr_end_transaction("DeleteTicket",LR_AUTO);

	
	lr_think_time(5);

	
	lr_start_transaction("LogOut");

	web_add_header("Sec-Fetch-User",
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	logOut();

	lr_end_transaction("LogOut",LR_AUTO);
	
	
	lr_end_transaction("UC4_ReservDelete",LR_AUTO);

	return 0;
}

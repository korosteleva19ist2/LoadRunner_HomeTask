Action()
{
	lr_start_transaction("UC5_ReservView");

	
	lr_start_transaction("StartWebTours");

	web_add_auto_header("Sec-Fetch-Site",
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_revert_auto_header("Sec-Fetch-Mode");

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
	
	lr_end_transaction("StartWebTours", LR_AUTO);

	
	
	
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

	web_reg_find("Text=Itinerary",LAST);
	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("ViewAllTicket",LR_AUTO);


	
	
	lr_start_transaction("LogOut");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(5);

	logOut();

	lr_end_transaction("LogOut",LR_AUTO);
	

	
	lr_end_transaction("UC5_ReservView", LR_AUTO);

	return 0;
}

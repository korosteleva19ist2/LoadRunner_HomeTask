Action()
{
	char login[10]={0};
	char password[10]={0};
	int i;
	int randNumber;
	
	lr_start_transaction("UC2_Registration");
	
	for(i = 0; i < 9; i++)
		{
			login[i] = rand()%26+'a';
			password[i] =rand()%5+'1';
		}
	
	lr_save_string(login,"login");
	lr_save_string(password,"password");
	
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

	lr_end_transaction("StartWebTours",LR_AUTO);

	
	
	
	lr_start_transaction("ToRegistrationPage");

	web_add_auto_header("Sec-Fetch-Mode",
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
	
	lr_think_time(5);
	web_reg_find("Text=<B>First time registering? Please complete the form below.</B>",LAST);
	web_url("open_registration_page", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("ToRegistrationPage",LR_AUTO);

	
	
	
	lr_start_transaction("Registration");

	web_add_header("Origin", 
		"http://localhost:1080");
	
	lr_think_time(5);
	
	web_reg_find("Text=Thank you, <b>{login}</b>, for registering and welcome to the Web Tours family.",LAST);
	web_submit_data("registration", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=passwordConfirm", "Value={password}", ENDITEM, 
		"Name=firstName", "Value={newFirstName}", ENDITEM, 
		"Name=lastName", "Value={newLastName}", ENDITEM, 
		"Name=address1", "Value={newStreetUser}", ENDITEM, 
		"Name=address2", "Value={newCityUser}", ENDITEM, 
		"Name=register.x", "Value=44", ENDITEM, 
		"Name=register.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("Registration",LR_AUTO);




	lr_start_transaction("LogIn");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_think_time(5);
	
	web_reg_find("Text=Welcome, <b>{login}</b>, to the Web Tours reservation pages.",LAST);
	web_url("open_home_page", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("LogIn", LR_AUTO);


	
	lr_start_transaction("LogOut");

	web_add_header("Sec-Fetch-User",
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_think_time(5);

	logOut();

	lr_end_transaction("LogOut",LR_AUTO);
	
	
	lr_end_transaction("UC2_Registration", LR_AUTO);

	return 0;
}
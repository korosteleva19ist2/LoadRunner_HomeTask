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

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");
	
	startWebTours();

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,oimompecagnajdejgnnjijobebaeigek,neifaoindggfcjicffkgpmnlppeffabd,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hnimpnehoodheedghdeeijklkeaacbdc,obedbbhbpmojnkanicioggnmelmoomoc,giekcmmlnklenlaomppkphknjmnnpneh,kiabhabjdbkjdpjbpigfodbdjmbglcoo,llkgjffcdpffmhiakmfcdcblohccpfmo,lmelglejhemejginpboagddgdfbepgmp,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,hfnkpimlhhgieaddgfemjhofmfblmnib,jamhcnnkihinmdlkakkaopbjbbcngflc,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,ojhpjlocmbogdgmfpkhlaaeamibhnphh,khaoiebndkojlmppeemjhbpbandiljpe,efniojlnjndmcbiieegkicadnoecjjef,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.118");

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:tW8zrdCzsgc-vNokyHAxot9rstj8yG0oPuLjg5AgFL4&cup2hreq=ca3a23cc11fd551c695c2a1b8c00ee663ddc12275945c36756d916518ae1e0c1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{f8f382d3-1726-4648-9d5e-1db1b49cc948}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"1.3.36.141"
		"\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{c6c801b5-2966-4c63-8926-9708abe0a543}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5817,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{e75c9a34-f282-4c1a-ae20-64b80b77f133}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{5bdc3970-54b6-48e4-8e98-27e5c923a4eb}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\""
		"{97266b2f-b0ef-4fa8-bd9e-d35b6a76227c}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{8d98713b-0391-43a9-b635-3427aaf94438}\",\"rd\""
		":6150},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{aa34d359-9b5c-402e-b104-f4b9ae6c6c1d}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{1729fe5b-1858-4af8-af2e-d50acbbef21c}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{538a139b-c754-46ad-a6bd-c015eb75459f}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.70038c5037d100135595e4ab2ff64caeb8844cdd03e6408289563fc67f952066\"}]},\"ping\":{\"ping_freshness\":\"{b390d1b2-7e98-4aa3-a3f3-7f98029b214b}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"419\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{57953205-392f-4fc9-9627-8312596f285d}\",\"rd\":6150},\"updatecheck\":{},\"version\":\""
		"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{3f38899f-7864-4006-8944-0d5488832226}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.e02aeb7034fefaea35a0be29445a820068710a13880e66c1ba482cac43e8d16a\"}]},\"ping\":{\"ping_freshness\":\"{ee456e1e-3160-48b3-9d24-85db267e25d6}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"3001\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0924394cfd2b5feb79a81f49972a0926fee66a20831401e0b7a4a84a80c799fd\"}]},\"ping\":{\"ping_freshness\":\"{2d1aff12-a686-4e7b-81bf-b7e27bf6bd0f}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"8338\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{bf721053-b07a-4f6a-8c75-fa6c73aab1ba}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{915de7c2-4ba9-47e0-9ebd-899dd180d924}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":"
		"{\"ping_freshness\":\"{92a73bed-d375-4cbc-8574-2bb2915331ff}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{8ecb0801-12e7-449e-947d-2e73b238d2cf}\",\"rd\":6150},\"tag\":\"default\",\""
		"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.87623110cd546130368ec1581c27856b3c11acd9b8986bea3d7c5c09c71fbad2\"}]},\"ping\":{\"ping_freshness\":\"{1151cdd9-93fd-4245-b9f2-644547594d5c}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"755\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh"
		"\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{2e17fb47-aba5-4f86-acdd-69144fa795d2}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:21wr@0.025\",\"cohorthint\":\"General "
		"release\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{6b3ad65a-1ec2-4fca-a431-d2b3127f75e2}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.10.12.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"ru\",\"packages"
		"\":{\"package\":[{\"fp\":\"1.b207f670ca3a12250b58363022f90e987303e0de5e6df2e8af3fb87f8cb6b73b\"}]},\"ping\":{\"ping_freshness\":\"{6c0da702-af05-40c3-bac2-754056ad2b4f}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.11.2.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\""
		"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.118\",\"protocol\":\"3.1\",\"requestid\":\"{747379da-2213-4200-b36d-4d2b4275383f}\",\"sessionid\":\"{652505df-f25e-49c2-944d-1911e4d7c217}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\"updaterversion\":\"118.0.5993.118\"}}", 
		LAST);
	
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

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");
	
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
	
	//ïðîâåðêà, ÷òî ãîðîäà îòïðàâëåíèÿ è ïðèáûòèÿ ðàçíûå
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
	
		//ïðîâåðêà îòêðûòèÿ íóæíîé ñòðàíèöû
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


	//ïîëó÷àåì ôîðìóëèðîâêó äàííûõ î ðåéñå
	web_reg_save_param("fligting",
		"LB={departDate} : ",
		"RB=\.",
		LAST);


	//ïðîâåðêà îòêðûòèÿ íóæíîé ñòðàíèöû
	web_reg_find("Text=Thank you for booking through Web Tours",LAST);
	//ïðîâåðêà êîððåêòíîãî èñïîëüçîâàíèÿ êàðòû êëèåíòà
	web_reg_find("Text=Total Charged to Credit Card # {creditCard}",LAST);
	//ïðîâåðêà âåðíî óêàçàííûõ ãîðîäîâ
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

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

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");
	
	startWebTours();
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("X-Goog-Update-AppId", 
		"khaoiebndkojlmppeemjhbpbandiljpe,lmelglejhemejginpboagddgdfbepgmp,llkgjffcdpffmhiakmfcdcblohccpfmo,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,efniojlnjndmcbiieegkicadnoecjjef,oimompecagnajdejgnnjijobebaeigek,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflookgnkcckhobaglndicnbbgbonegd,ihnlcenocehgdaegdmhbidjhnhdchfmm,hnimpnehoodheedghdeeijklkeaacbdc,kiabhabjdbkjdpjbpigfodbdjmbglcoo,obedbbhbpmojnkanicioggnmelmoomoc,"
		"giekcmmlnklenlaomppkphknjmnnpneh,hfnkpimlhhgieaddgfemjhofmfblmnib,neifaoindggfcjicffkgpmnlppeffabd,gcmjkmgdlgnkkcocmoeiminaijmmjnii,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.120");

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:WSvi7ZS8efNE3pn_iKNafCE32e2vOCgdJhxrFkLtzI4&cup2hreq=598e4934d8a202cdf2ead57bd455c2be24e6618c8e72167807e6c07ca04e472a", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{ef6686b6-dda2-4ebb-89cb-fea89b3aca6f}\",\"rd\":6154},\"tag\":\"default\",\"updatecheck\":{},"
		"\"version\":\"62\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:2263@0.025\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.70038c5037d100135595e4ab2ff64caeb8844cdd03e6408289563fc67f952066\"}]},\"ping\":{\"ping_freshness\":\"{33d89b7b-90d1-42e9-8b26-9da48e1dece1}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"419\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\","
		"\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{abb8370b-531b-40c0-bb29-f3328d120292}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\""
		"{934b6572-6a63-453c-aa6c-5d8525cc6828}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{19afe296-7a1c-4040-8bec-ba0c91522b79}\",\"rd\":6154},\"updatecheck\":{},\""
		"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8ee63837f1ee150d203c0303892a939907d3ee9ae14f81a72965b6707fad80d5\"}]},\"ping\":{\"ping_freshness\":\"{ff1111c9-5b89-42ea-8bc6-f2ed9bb42404}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"760\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\""
		":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{ce62dc7e-466d-4e46-8aaa-97d6d6756e81}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"ru\",\"packages\":"
		"{\"package\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{33bf2148-a0f4-4631-a617-bb66857feff6}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{7b9ec673-265f-433f-becc-4972cbda7978}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\""
		"ping_freshness\":\"{0ee59ebe-a11e-4964-b7c9-a4487be3b521}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.155637bf91846d52fe65f89b24f3d775d0f05d6b0a72569cf89a4e8d205976a7\"}]},\"ping\":{\"ping_freshness\":\"{99d36acd-098e-4953-bbba-22aeb1b9ff04}\",\"rd\":6154},\"updatecheck\":{},\""
		"version\":\"3002\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{e9ccd359-b726-4051-aff2-71341a4cb6a2}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort"
		"\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{5423a0a0-8e42-4ffd-b274-81523a27b3ae}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{8c8cd92a-d063-405d-ad40-4aafa0ecfba1}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{f671aeb2-6bc7-461b-bd2e-f87399323566}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\""
		":{\"ping_freshness\":\"{de381f8e-8742-4592-aeb7-64735bdcae65}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4a0d852651ff385640f359d5b9d1c2f04f765d499276a119b34fdba417193d68\"}]},\"ping\":{\"ping_freshness\":\"{5e42ca1a-82a8-4cc4-adfd-d794926fb8f2}\",\"rd\":6154},\"updatecheck\":{},\""
		"version\":\"8346\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:21zr@0.1\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5817,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{34205b46-d34d-4e93-8ce9-33fd8d678ace}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\""
		"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{618c9dc1-3a4a-4750-b43b-6eee5329d411}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{d0a04659-5b8e-4852-ab95-ee0d50beb7bc}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:21wr@0.1\",\"cohorthint\":\"General release\",\"cohortname\":\"Auto\",\"enabled\":true,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{f00455d0-37a7-441f-ba29-ee0b21d29be8}\",\"rd\":6154},\"updatecheck\":{},\"version\":\"2023.10.12.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":"
		"\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.120\",\"protocol\":\"3.1\",\"requestid\":\"{08e141b2-032c-4eb3-a656-623ff762f4a5}\",\"sessionid\":\"{db364f64-3c8d-4250-9e8a-0590f19f239d}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\"updaterversion\":\"118.0.5993.120\"}}", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

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

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");
	
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
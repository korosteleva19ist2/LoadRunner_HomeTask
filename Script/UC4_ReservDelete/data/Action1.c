Action1()
{

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"119\", \"Chromium\";v=\"119\", \"Not?A_Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("WebTours_2", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,hnimpnehoodheedghdeeijklkeaacbdc,obedbbhbpmojnkanicioggnmelmoomoc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,oimompecagnajdejgnnjijobebaeigek,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,laoigpblnllgcgjnjnllmfolckpjlhki,efniojlnjndmcbiieegkicadnoecjjef,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,"
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh,jamhcnnkihinmdlkakkaopbjbbcngflc,jflhchccmppkfebkiaminageehmchikm,lmelglejhemejginpboagddgdfbepgmp,llkgjffcdpffmhiakmfcdcblohccpfmo,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-119.0.6045.106");

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:mbeXXqmH1RFKsg7F2LMVNp83sDh8wWeUI864UUabVoo&cup2hreq=e5d74f0041942bd4fc9011f73d096f779f3a570e02095f42b175cd2bc9a2eb16", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{2aa0bd69-1a3c-43c9-9d67-3d67c8a4b763}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"1.3.36.141"
		"\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:21zr@0.1\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5817,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{d601792d-d193-4047-a5ea-5b67d4a67445}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{db0ff64d-c8c8-459a-9fcd-5ec372b962fb}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\","
		"\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{0d76c79b-519a-459f-a4f4-5caca65634e6}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{aeb20a53-5fc6-4f25-8e63-76fa14c3828f}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\""
		"ping\":{\"ping_freshness\":\"{43757953-797f-4b78-b317-e0aaa6108031}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{3e802378-57df-4dd7-8818-8b0161d662e6}\",\"rd\":6155},\""
		"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{f1ad60ae-bf84-4e56-8e77-fb1a80f5f06a}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{c5a47d63-6990-4184-8d75-d3d35390f613}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.431de58f126671b621d885b0252afbb0da194785cba04fe25c1bf8de3156f1de\"}]},\"ping\":{\"ping_freshness\":\"{e9ea6c4d-0b1f-49b7-a1d4-536e38770fee}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"8348\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{a5517b4c-24e0-4472-8451-a2d71a68181c}\",\"rd\":6155},\"updatecheck\":{},\"version\":\""
		"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8ee63837f1ee150d203c0303892a939907d3ee9ae14f81a72965b6707fad80d5\"}]},\"ping\":{\"ping_freshness\":\"{5eded548-5ab0-4180-a215-5592004a3d25}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"760\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{50bbc1de-4300-4c8f-86f0-a54288f68fbf}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\""
		"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b915e698d9c9de2569f3089cd387b7dc7e9ba8415f49e838bb8130be31b89ff2\"}]},\"ping\":{\"ping_freshness\":\"{2d4a6c25-946f-4215-8991-12cc438b36e2}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"3003\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{19ad9c5f-0bbd-4662-911e-fca06235fe68}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff"
		"\"}]},\"ping\":{\"ping_freshness\":\"{63ea6496-e89d-4bb2-8da1-7dd1bc959faf}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{ff12f5f0-92d9-45d4-8c72-6895785e6b7e}\",\"rd\":6155},"
		"\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:2263@0.1\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.70038c5037d100135595e4ab2ff64caeb8844cdd03e6408289563fc67f952066\"}]},\""
		"ping\":{\"ping_freshness\":\"{0b0a0f7d-b22d-4736-b8be-8b30b572039c}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"419\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{d3a96075-cf05-4b8c-b73b-2bf532584b06}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\""
		"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{47cb4da7-69e8-426b-9841-0fb42b0ef497}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:21wr@0.5\","
		"\"cohorthint\":\"General release\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{f4b52a28-c94a-4724-aa44-019586d5fdfe}\",\"rd\":6155},\"updatecheck\":{},\"version\":\"2023.10.12.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,"
		"\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3570\"},\"prodversion\":\"119.0.6045.106\",\"protocol\":\"3.1\",\"requestid\":\"{6457224e-c1cc-44e9-b817-d0288d82b960}\",\"sessionid\":\"{225e2943-aab1-4aba-8dd8-ddd0d89cedca}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\"updaterversion\""
		":\"119.0.6045.106\"}}", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

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
		"\"Google Chrome\";v=\"119\", \"Chromium\";v=\"119\", \"Not?A_Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(5);

	web_submit_data("login.pl_2", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=137664.136654516HAiVAQQpAcQVzzzHtctizpfQtVHf", ENDITEM, 
		"Name=username", "Value=ivan", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=login.x", "Value=52", ENDITEM, 
		"Name=login.y", "Value=4", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("Itinerary Button_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("delete");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_submit_data("itinerary.pl_2", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=22608-802-II", ENDITEM, 
		"Name=flightID", "Value=300045-15478-II", ENDITEM, 
		"Name=flightID", "Value=164615236-2337-II", ENDITEM, 
		"Name=4", "Value=on", ENDITEM, 
		"Name=flightID", "Value=1646248941-30878-II", ENDITEM, 
		"Name=flightID", "Value=164619280-3889-II", ENDITEM, 
		"Name=removeFlights.x", "Value=72", ENDITEM, 
		"Name=removeFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);

	lr_end_transaction("delete",LR_AUTO);

	return 0;
}
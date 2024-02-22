Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("loadrunnertips.com", 
		"URL=http://loadrunnertips.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	

	/* correlation */

	

	web_add_cookie("_ga=GA1.2.379952832.1708338573; DOMAIN=loadrunnertips.com");

	web_add_cookie("_gid=GA1.2.1403870666.1708338573; DOMAIN=loadrunnertips.com");

	web_add_cookie("_gat=1; DOMAIN=loadrunnertips.com");

	web_add_cookie("__gads=ID=6369edf0d784b308:T=1708338573:RT=1708338573:S=ALNI_MYRJ_VdG20PvxvTfo72qJoMdWC3Cg; DOMAIN=loadrunnertips.com");

	web_add_cookie("__gpi=UID=00000d0a44374784:T=1708338573:RT=1708338573:S=ALNI_MYJarfHiAklwmiRpZYDpx3fRDJWjg; DOMAIN=loadrunnertips.com");

	web_add_cookie("__eoi=ID=88f7702e57695648:T=1708338573:RT=1708338573:S=AA-AfjY1ioWZMa2Nf_7PuO_WkGZd; DOMAIN=loadrunnertips.com");

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("runner.html_2", 
		"URL=https://tpc.googlesyndication.com/sodar/sodar2/225/runner.html", 
		"Resource=0", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("collect_2", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1621537383&t=pageview&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx&ul=en-gb&de=UTF-8&dt=LoadRunner%3A%20Correlation%20Challenge&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=&gjid=&cid=379952832.1708338573&tid=UA-54539864-2&_gid=1403870666.1708338573&_slc=1&z=1966708811", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	/* start */

	lr_think_time(10);

	web_submit_data("LoadRunner_Correlation_Challenge_Mod.aspx_2", 
		"Action=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__VIEWSTATE", "Value=/wEPDwUJOTg3MDg5NjY4ZGRZYyiQR31NIRoqCeI3HwDc24DGdd83OnvgUVN4lMbpJQ==", ENDITEM, 
		"Name=__VIEWSTATEGENERATOR", "Value=3074961D", ENDITEM, 
		"Name=__EVENTVALIDATION", "Value=/wEdAAKdPCcy9t3wpVKAHy9yYsFnnlbekVM3R/a0oKRYPLuORAlqSlgLVPQiVf0OfQa6TNTr1tbmayZqPlqZ0Zuo3KmB", ENDITEM, 
		"Name=ctl00$head$btnStart", "Value=Start", ENDITEM, 
		LAST);

	web_custom_request("collect_3", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=901892864&t=pageview&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx&ul=en-gb&de=UTF-8&dt=LoadRunner%3A%20Correlation%20Challenge&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=&gjid=&cid=379952832.1708338573&tid=UA-54539864-2&_gid=1403870666.1708338573&_slc=1&z=1580114848", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("runner.html_3", 
		"URL=https://tpc.googlesyndication.com/sodar/sodar2/225/runner.html", 
		"Resource=0", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	/* number */

	lr_think_time(13);

	web_submit_data("LoadRunner_Correlation_Challenge_Mod.aspx_3", 
		"Action=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__VIEWSTATE", "Value=/wEPDwUJOTg3MDg5NjY4ZGRZYyiQR31NIRoqCeI3HwDc24DGdd83OnvgUVN4lMbpJQ==", ENDITEM, 
		"Name=__VIEWSTATEGENERATOR", "Value=3074961D", ENDITEM, 
		"Name=__EVENTVALIDATION", "Value=/wEdAAOdPCcy9t3wpVKAHy9yYsFnEZwAPPXs+fTr6SGYYqMh2jrXPBqUZcs4yqSWpp6/FIREY8A2eedeJopqLW8/6AQxkHtQQcVTOCv5vrqOvEiRFQ==", ENDITEM, 
		"Name=ctl00$head$txtMacigNo", "Value=8615", ENDITEM, 
		"Name=ctl00$head$btnNext", "Value=Next", ENDITEM, 
		LAST);

	web_custom_request("collect_4", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=90230369&t=pageview&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx&ul=en-gb&de=UTF-8&dt=LoadRunner%3A%20Correlation%20Challenge&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=&gjid=&cid=379952832.1708338573&tid=UA-54539864-2&_gid=1403870666.1708338573&_slc=1&z=1416995589", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("runner.html_4", 
		"URL=https://tpc.googlesyndication.com/sodar/sodar2/225/runner.html", 
		"Resource=0", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	/* value */

	lr_think_time(8);

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx_4", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Football", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect_5", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1217302115&t=pageview&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx%3Fdd%3D1%26game%3DFootball&ul=en-gb&de=UTF-8&dt=LoadRunner%3A%20Correlation%20Challenge&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=&gjid=&cid=379952832.1708338573&tid=UA-54539864-2&_gid=1403870666.1708338573&_slc=1&z=2004171332", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("runner.html_5", 
		"URL=https://tpc.googlesyndication.com/sodar/sodar2/225/runner.html", 
		"Resource=0", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:doxLWgytM3ZA20QiqgbegpiGjioW1q7r2e656eMC--4&cup2hreq=d57422f2f8343aabccc81830350aace43c9f558e1e9b678f3b70b594163842ba", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{56a6b393-3f3f-4ded-b67c-01139c31cfd7}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{80654f3d-a26b-4ed1-a2ac-d1741d4f97d2}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\""
		":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{058e74e7-1d87-43a4-bcc1-61bbf88df53b}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\"{f069821a-467a-4d33-bc59-0ab8f565d812}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\":{\"ping_freshness\":\"{5f5c9e94-6b5a-4b83-b91d-7cd197544d9e}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"434\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\""
		"ping_freshness\":\"{2af059b0-9534-47b9-89e2-1965f1520106}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.338cbd67983bc23dfdcae48f34706ac81e378161918137c5242db2175f52d94e\"}]},\"ping\":{\"ping_freshness\":\"{b44e35d5-a6a4-47ef-811a-dcbd66232df5}\",\"rd\":6258},\""
		"updatecheck\":{},\"version\":\"2024.2.14.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{3aea6b1b-db87-4a41-bbbe-790500ee33f9}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\""
		"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{9bcf2ae8-5aff-4106-a4fb-c268897db5c7}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{ea3473cf-c1a1-47af-b5fc-5379b1ec944f}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cb0c781d5870726b7b1c46b031524bd2f772e8cac9614a0dfad7c5b799be575d\"}]},\"ping\":{\"ping_freshness\":\""
		"{c2c89913-12e8-4c36-9e77-600e32486215}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"8556\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{90259d42-b13c-46f9-9be7-02f8c3af76da}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{9eea411d-fade-41f0-b2ca-6b8ed67f1123}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":["
		"{\"fp\":\"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{04026bd8-d0cd-4b2a-849d-676c94d5cbba}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\""
		"ping_freshness\":\"{a8b365ad-cb63-41da-a029-0587bbd83100}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{487bd672-72b1-4c96-a390-94519dacf397}\",\"rd\":6258},"
		"\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{0ae30278-3d7c-46b1-b0ef-657e967d48da}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{629bd7d7-fb50-49c5-8a29-81caab80029c}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cb80f7697a4bf93f5ba730126c381fe89e37b6a264215bcbe4e12628b8940e98\"}]},\"ping\":{\"ping_freshness\":\"{bee63eb7-2052-419d-8c40-c511b2800ae0}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.17.1\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\""
		"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{3eedf822-acc3-41b4-88d5-b1920c914981}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]"
		"},\"ping\":{\"ping_freshness\":\"{edc30d44-6df7-4a7f-b825-7bb774696b29}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]},\"ping\":{\"ping_freshness\":\"{0cbf78d1-a76d-4a50-82de-55052d90af42}\",\"rd\":6258"
		"},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1\",\"requestid\":\"{eddb05a3-a1a8-4f9b-900a-033e18147132}\",\"sessionid\":\""
		"{2a3a7cd9-e832-402c-8e64-409ab92305a8}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6288.0\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	/*flight*/
	
	lr_think_time(23);

	web_submit_data("LoadRunner_Correlation_Challenge_Mod.aspx_5", 
		"Action=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Football", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Football", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__VIEWSTATE", "Value=/"
		"wEPDwUJOTg3MDg5NjY4ZBgBBR5fX0NvbnRyb2xzUmVxdWlyZVBvc3RCYWNrS2V5X18WFAUPY3RsMDAkaGVhZCRjaGsxBQ9jdGwwMCRoZWFkJGNoazIFD2N0bDAwJGhlYWQkY2hrMwUPY3RsMDAkaGVhZCRjaGs0BQ9jdGwwMCRoZWFkJGNoazUFD2N0bDAwJGhlYWQkY2hrNgUPY3RsMDAkaGVhZCRjaGs3BQ9jdGwwMCRoZWFkJGNoazgFD2N0bDAwJGhlYWQkY2hrOQUQY3RsMDAkaGVhZCRjaGsxMAUQY3RsMDAkaGVhZCRjaGsxMQUQY3RsMDAkaGVhZCRjaGsxMgUQY3RsMDAkaGVhZCRjaGsxMwUQY3RsMDAkaGVhZCRjaGsxNAUQY3RsMDAkaGVhZCRjaGsxNQUQY3RsMDAkaGVhZCRjaGsxNgUQY3RsMDAkaGVhZCRjaGsxNwUQY3RsMDAkaGVhZCRjaGsxOAUQY3RsMDAkaGV"
		"hZCRjaGsxOQUQY3RsMDAkaGVhZCRjaGsyMGqXlyHw3od8ns/doV7jTOBVMKvPxwN1j1KsshtV11Mb", ENDITEM, 
		"Name=__VIEWSTATEGENERATOR", "Value=3074961D", ENDITEM, 
		"Name=__EVENTVALIDATION", "Value=/wEdABbkfGNv0lbea+Z4JeynJg3Yqasbxwl7lgdZZfZ2n+oFBQVQb/BqIrnuBsiTd5SBX0XDYFHBMur5v1vZ4LUwZUXEv1bMxkD35JfEKTUHLZw4URiuU4nLTwtj/r43949QF/fcXs3H4McaH100kUT9gcPbmpgAqjKGNuaeCinRuZ1fUy+AnrQ09DAotZNMecAuJqp7WQG8SNPlN0mV+BwfjWNo1u1qRUoE0ucmhZnEUyRDxJcIA7A2BTvsdZNVrY2UTuZixHoyjomtObKrCt06E5/UAoxFdFd6aX6eQs9i0oSTXDkt+Do6wOIA4KwaXE0pUgA2isLFBHeYufrtFtgXd6f0DGIM5YFnsJoM+HWSXfRSONHx4ZdtIVVepNuIcMSoJKpEnOUHlLp+"
		"oSuQ44YhcKDN8B20tHcNPS9okHrSEPNbXouIr9iCQfCWk3E3COVI0FitjCG6HyklgWzfDmV0vuRMUSjdSxCzQ852y1d51LPaJxPca2Q7qj/IAoj901bSYPY=", ENDITEM, 
		"Name=ctl00$head$chk1", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk3", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk5", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk10", "Value=on", ENDITEM, 
		"Name=ctl00$head$chk16", "Value=on", ENDITEM, 
		"Name=ctl00$head$btnNext3", "Value=Next", ENDITEM, 
		LAST);

	web_custom_request("collect_6", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1632416975&t=pageview&_s=1&dl=http%3A%2F%2Floadrunnertips.com%2FLoadRunner_Correlation_Challenge_Mod.aspx%3Fdd%3D1%26game%3DFootball&ul=en-gb&de=UTF-8&dt=LoadRunner%3A%20Correlation%20Challenge&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=24805793&gjid=1572839802&cid=379952832.1708338573&tid=UA-54539864-2&_gid=1403870666.1708338573&_r=1&_slc=1&z=1932229535", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("runner.html_6", 
		"URL=https://tpc.googlesyndication.com/sodar/sodar2/225/runner.html", 
		"Resource=0", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
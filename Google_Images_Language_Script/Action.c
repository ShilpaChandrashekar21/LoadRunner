Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("katalon-demo-cura.herokuapp.com", 
		"URL=https://katalon-demo-cura.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.jpg", 
		"URL=https://katalon-demo-cura.herokuapp.com//img/header.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://katalon-demo-cura.herokuapp.com//css/theme.css", 
		"Snapshot=t5.inf", 
		LAST);

	web_custom_request("reports", 
		"URL=https://nel.heroku.com/reports?ts=1707204039&sid=67ff5de4-ad2b-4112-9289-cf96be89efed&s=cmMX5FsbMuzj%2FMvUiBbgjzqcdPotdNhjjJZsXIQ9h8M%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	/* Click on make appointment */

	lr_think_time(15);

	web_url("profile.php", 
		"URL=https://katalon-demo-cura.herokuapp.com/profile.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASLgkHqZJskw0sFxIFDZFhlU4SBQ2RYZVOEgUN541ADhIFDc5BTHohwfHPmPIHasw=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASLgkHqZJskw0sFxIFDZFhlU4SBQ2RYZVOEgUN541ADhIFDc5BTHohwfHPmPIHasw=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	/* entering user name */

	lr_think_time(29);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:8DEg-pzeuBd4oawTjgr-4x0EcXAm5IsA00LPDaBzufk&cup2hreq=02b619b30f0611e2d3d93cef06615eb665467506221e5dd83fd7cce05d9169f0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{8baa246d-5bcf-4338-968d-85b97e3923d7}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{2fc7a7d4-6e30-40f6-8f4a-1ac12bb2bed7}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{6ff48b43-70d9-4186-b717-24f183ebacf8}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{f00e3548-f734-43e3-b991-15ad6a93c53d}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{bd4e1be0-e8da-45d7-a465-d5996bc4c9d4}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{4f5fac5d-34a6-4ef9-9063-a84377886319}\",\"rd\":6244},\"updatecheck\":"
		"{},\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{fb89f504-e115-40b6-bf3a-4f3aa3046061}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\","
		"\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{46a6c7aa-6931-46c9-9d77-56a17ba1c542}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\""
		"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{d7082cce-f345-4bfc-b534-ccd3a6c396c5}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{bbfb091f-522f-4bef-bd84-333fe5b19d24}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{9f0528bb-768c-42b1-b4f0-3a40b1d4bd76}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{0f50244f-3dc2-4f0c-b804-eb4efff4e0c6}\",\"rd\":6244},\"updatecheck\":{},\"version\""
		":\"852\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.887c873b6c3a26844482754c8534268fcd848b8c543b652626b4d4ec367f26fd\"}]},\"ping\":{\"ping_freshness\":\"{05a7c36c-9b56-4460-b3e6-88a6c3cba945}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"3017\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/"
		"1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{13dd1905-1bc8-42e9-8d1e-3c1cbe8340ef}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{fcef8be0-a530-45bd-a679-6804ba110260}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{a60304e9-6fc6-4c1f-b544-991ca4c31e5f}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{a9720ba4-edd4-4656-bbbb-9fe4c9c852c6}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\""
		"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.74316953175dd4fc990c661551ce1387c462d705f9eff88d759fb130885a3530\"}]},\"ping\":{\"ping_freshness\":\"{0527f99f-3760-44fd-b2ed-f1ef616e1a6f}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2024.2.4.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59"
		":\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c40530fe-e092-4b4d-bd9e-b107271adb1a}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\""
		"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{cf7eb768-af02-4a14-8965-cc7652e69121}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\"ping_freshness\":\"{f8633bbc-bcb2-4f6b-8da2-b8f5a4bc8012}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2024.1.17.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\""
		"ping\":{\"ping_freshness\":\"{899f6bbc-b14a-4ced-8a4d-b46c9bf2222d}\",\"rd\":6244},\"updatecheck\":{},\"version\":\"2024.2.5.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\""
		"requestid\":\"{da997bb8-1666-472f-b48c-39c2e8174e88}\",\"sessionid\":\"{59000701-32e0-48e2-a9fd-49431435504b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6268.0\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(5);

	web_custom_request("reports_2", 
		"URL=https://nel.heroku.com/reports?ts=1707204062&sid=67ff5de4-ad2b-4112-9289-cf96be89efed&s=3gWfdqgqag20ISrvqJ8fxyJ0Y1%2BF3suXBjpImS7Xw5Y%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("reports_3", 
		"URL=https://nel.heroku.com/reports?ts=1707204062&sid=67ff5de4-ad2b-4112-9289-cf96be89efed&s=3gWfdqgqag20ISrvqJ8fxyJ0Y1%2BF3suXBjpImS7Xw5Y%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":60007,\"body\":{\"elapsed_time\":244,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://katalon-demo-cura.herokuapp.com/\",\"sampling_fraction\":0.05,\"server_ip\":\"18.211.231.38\",\"status_code\":404,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://katalon-demo-cura.herokuapp.com/favicon.ico\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/"
		"537.36\"}]", 
		LAST);

	/* Click on password */

	lr_think_time(19);

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNDAaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARCQlRUaAhgLJqhWkyIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQs-kNGgIYC0gH-lQiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEOvgDRoCGAuISvtoIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARC0rwcaAhgL_VjDViIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ3DcaAhgLwLZjkiIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQ86sCGgIYC_ai3uMiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAuXnkjLIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARCwFRoCGAteoQ6BIgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCGjQIaAhgLVXGC1iIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ6q8OGgIYC8xMQtoiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIshGgIYC7kwzGAiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t14.inf", 
		LAST);

	/* Entered password */

	/* Click on login button */

	web_submit_data("authenticate.php", 
		"Action=https://katalon-demo-cura.herokuapp.com/authenticate.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/profile.php", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=John Doe", ENDITEM, 
		"Name=password", "Value=ThisIsNotAPassword", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	/* making appointment */

	lr_think_time(79);

	web_submit_form("appointment.php", 
		"Snapshot=t16.inf", 
		ITEMDATA, 
		"Name=facility", "Value=Tokyo CURA Healthcare Center", ENDITEM, 
		"Name=hospital_readmission", "Value=Yes", ENDITEM, 
		"Name=programs", "Value=Medicare", ENDITEM, 
		"Name=visit_date", "Value=16/02/2024", ENDITEM, 
		"Name=comment", "Value=Demo", ENDITEM, 
		LAST);

	/* Click on view more */

	/* Click on logout */

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t17.inf", 
		LAST);

	return 0;
}
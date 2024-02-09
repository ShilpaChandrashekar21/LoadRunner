Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("katalon-demo-cura.herokuapp.com", 
		"URL=https://katalon-demo-cura.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.jpg", 
		"URL=https://katalon-demo-cura.herokuapp.com//img/header.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://katalon-demo-cura.herokuapp.com//css/theme.css", 
		"Snapshot=t30.inf", 
		LAST);

	/* click on make appointment */

	lr_think_time(21);

	web_link("Login", 
		"Text=Login", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDESLgkHqZJskw0sFxIFDZFhlU4SBQ2RYZVOEgUN541ADhIFDc5BTHohwfHPmPIHasw=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDESLgkHqZJskw0sFxIFDZFhlU4SBQ2RYZVOEgUN541ADhIFDc5BTHohwfHPmPIHasw=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t32.inf", 
		LAST);

	/* login details */

	lr_think_time(21);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:o9_cn7iIeQx8yovYdWa8-XOJ5pREIHifRMP3-K8WaD4&cup2hreq=b49df918265c0930da49a97ccd66e411f30055f6b32f3ed46885f6a91269f8f5", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{6994a23b-f1df-4f8d-af14-8667a833d329}\",\"rd\":6246},\"updatecheck\":{},\"version\":\""
		"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{d5f669c5-349d-41bd-911d-cd993835d5ea}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\""
		"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{db63d2d6-fc34-440f-a7fc-b93f7fe2f2b5}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\"{e438e68b-da1b-4137-ac7a-608a2cd16463}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.5\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},"
		"\"ping\":{\"ping_freshness\":\"{e13a0bea-7b73-491f-9d4f-c347f04cdc1a}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{d20fb56a-0843-4a21-b6e1-9bd7503f6afb}\",\"rd\":6246},\""
		"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{5dee87e9-790f-4432-b02b-278e608202a8}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.0\"},{\"appid\":\""
		"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{1713816e-f247-4299-8e3f-d96ecde2c8d3}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\""
		",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{657f6592-5c8d-4434-b86b-586596dbfba9}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{be37e064-bebf-4797-9e0a-4f41932bf9e8}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{f699c2f6-6667-4ce1-9a11-71f24739e228}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{342e0d47-918f-428e-92fe-ee1850c21727}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\""
		"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{4e34ad24-2eef-4fc4-9757-60b5b77d8e54}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\""
		"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{3d0904e9-6778-412d-a066-14d945ad07b9}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{915bb642-f207-47a9-b7e6-57f001d9df40}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"3018\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\""
		"ping_freshness\":\"{4bcfe00e-5655-42be-9d0d-318a4ca74a2d}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{09ce1ccd-3d81-4efe-ae9a-6652b113d987}\",\"rd\""
		":6246},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{e9b839d0-c67d-40c2-ad95-287b7a5a243e}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\""
		"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1db172c73ae73d79dec3af374adec6dae1047112d5ec949045ad5bdf2b642e79\"}]},\"ping\":{\"ping_freshness\":\"{29019891-f1d7-494e-a3d8-4408ca994a4d}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{a09dab3f-bab2-43ed-ac53-7572640ed02d}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp"
		"\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{ab4fb7bb-912f-4f6e-a73b-9913c655a8a4}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\""
		"ping_freshness\":\"{f019ec71-787c-41a8-8d4e-27780798ad27}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.1.17.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.141\",\"protocol\":\"3.1\",\""
		"requestid\":\"{52add675-7aac-4496-8a2e-7d3e7f7078e0}\",\"sessionid\":\"{5e65da8e-ab0d-467e-bc98-8bbed949c894}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6268.0\"},\"updaterversion\":\"121.0.6167.141\"}}", 
		LAST);

	lr_think_time(8);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"event\":[{\"download_time_ms\":8051,\"downloaded\":3560,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.2.7.0\",\"previousversion\":\"2024.2.5.0\",\"total\":3560,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"niikhdgajlphfehepabhhblakbdgeefj/1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06/1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217/7fdda59eb7050464bd021a8735fd22ecc73548629011dcc6d559e3ba39bef7bb.puff\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\",\"nextversion\":\"2024.2.7.0\",\"previousfp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\",\""
		"previousversion\":\"2024.2.5.0\"}],\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\"}]},\"version\":\"2024.2.7.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\""
		"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.141\",\"protocol\":\"3.1\",\"requestid\":\"{56faa19a-4700-4b0d-ad5a-5d29f8aedcd8}\",\"sessionid\":\"{5e65da8e-ab0d-467e-bc98-8bbed949c894}\",\"updaterversion\":\"121.0.6167.141\"}}", 
		LAST);

	web_submit_data("authenticate.php", 
		"Action=https://katalon-demo-cura.herokuapp.com/authenticate.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/profile.php", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=John Doe", ENDITEM, 
		"Name=password", "Value=ThisIsNotAPassword", ENDITEM, 
		LAST);

	/* logout */

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t36.inf", 
		LAST);

	return 0;
}
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("loadrunnertips.com", 
		"URL=http://loadrunnertips.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	/* correlation */

	lr_think_time(13);

	

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("__gads=ID=6d7306dd6a4db672:T=1708338264:RT=1708338264:S=ALNI_MZJmjPzzmqemS9Eg_laxt-XYdsw-A; DOMAIN=loadrunnertips.com");

	web_add_cookie("__gpi=UID=00000d0a42f6f35f:T=1708338264:RT=1708338264:S=ALNI_MYawxBWa6YGTB-mKg50relUiG9NxA; DOMAIN=loadrunnertips.com");

	web_add_cookie("__eoi=ID=f3826c3973266885:T=1708338264:RT=1708338264:S=AA-AfjaXLwTy9tiwKHBcWVrYvki0; DOMAIN=loadrunnertips.com");

	/* start */

	lr_think_time(12);

	web_submit_form("LoadRunner_Correlation_Challenge_Mod.aspx_2", 
		"Snapshot=t15.inf", 
		ITEMDATA, 
		"Name=ctl00$head$btnStart", "Value=Start", ENDITEM, 
		LAST);

	/* number */

	lr_think_time(17);

	web_submit_form("LoadRunner_Correlation_Challenge_Mod.aspx_3", 
		"Snapshot=t16.inf", 
		ITEMDATA, 
		"Name=ctl00$head$txtMacigNo", "Value=7832", ENDITEM, 
		"Name=ctl00$head$btnNext", "Value=Next", ENDITEM, 
		LAST);

	/* value */

	lr_think_time(10);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:akhX7Zfa9mY1wHF3DtpPedsdM-RP8qlJhfe8gmY7_s8&cup2hreq=68df5f41f37e0c481062aafc482dc95a504e6fd3df77ae2e303a8babdbbcdd9f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{873d7a4c-32b0-40ff-8cca-81daeb492854}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{03c0d039-82f9-433e-bd51-79315111bf0d}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{c8daa3b8-78dc-4a1f-ae4a-0774a7006a59}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{b4955034-d680-4073-b41f-935dd26a4c18}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{06b3be21-983c-4ce0-89dc-c49d2f6488d7}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\":{\"ping_freshness\":\"{1d856f4a-7e39-4a6d-8e3d-b6a95a995bac}\",\"rd\":6258},\"updatecheck\":{},\""
		"version\":\"434\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{0fd5a55e-50fb-4cd8-a1a0-cc9d34a762e5}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.338cbd67983bc23dfdcae48f34706ac81e378161918137c5242db2175f52d94e\"}]},\"ping\":{\"ping_freshness\":\"{dd5b4ad9-cd27-47b2-854e-0c8f5e878b3d}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.14.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{7f33a22b-5b14-462c-9493-d0ae830c2043}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{f612060c-139d-4c61-9067-2a7e9a630871}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cb0c781d5870726b7b1c46b031524bd2f772e8cac9614a0dfad7c5b799be575d\"}]},\"ping\":{\""
		"ping_freshness\":\"{c57caf41-32c9-4432-b234-88d70f6d1aac}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"8556\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{ad3c58a1-153c-430a-8b54-76a48a464afb}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\""
		"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{fbeafaa3-da0c-4ec0-bb39-bca50657a59c}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\""
		"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{29427a8c-e587-444b-9156-82eb1d78586c}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{9a0f33b7-ddef-4e8b-b31b-e1080eae28b3}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\""
		"ping_freshness\":\"{1e377d8f-986f-49d9-9ec3-79fd478588ca}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{bfd556bc-7c30-437d-99ea-5d4da366843e}\",\"rd\":6258},"
		"\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{6b7109ba-fb98-438b-a29f-db2c2aa611ed}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{3978e79e-59f6-4053-ae9c-06d55b47581c}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cb80f7697a4bf93f5ba730126c381fe89e37b6a264215bcbe4e12628b8940e98\"}]},\"ping\":{\"ping_freshness\":\"{5186027c-c73d-4e0d-81a7-e473d0117872}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.17.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{9cac7287-b7d4-4df3-a16b-bcaba7670f33}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]}"
		",\"ping\":{\"ping_freshness\":\"{63ed0f13-7809-41eb-8423-d97fd3742451}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1"
		"\",\"requestid\":\"{7782f37e-be06-43bb-b427-e98716c15a6a}\",\"sessionid\":\"{766abde2-7c2f-45ca-bcb2-85ba435e7569}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6288.0\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	web_url("LoadRunner_Correlation_Challenge_Mod.aspx_4", 
		"URL=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx?dd=1&game=Football", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://loadrunnertips.com/LoadRunner_Correlation_Challenge_Mod.aspx", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

//	/* flight */
//
//	lr_think_time(34);
//
//	web_submit_form("LoadRunner_Correlation_Challenge_Mod.aspx_5", 
//		"Snapshot=t19.inf", 
//		ITEMDATA, 
//		"Name=ctl00$head$chk1", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk2", "Value=on", ENDITEM, 
//		"Name=ctl00$head$chk3", "Value=on", ENDITEM, 
//		"Name=ctl00$head$chk4", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk5", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk6", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk7", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk8", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk9", "Value=on", ENDITEM, 
//		"Name=ctl00$head$chk10", "Value=on", ENDITEM, 
//		"Name=ctl00$head$chk11", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk12", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk13", "Value=on", ENDITEM, 
//		"Name=ctl00$head$chk14", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk15", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk16", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk17", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk18", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk19", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$chk20", "Value=<OFF>", ENDITEM, 
//		"Name=ctl00$head$btnNext3", "Value=Next", ENDITEM, 
//		LAST);

	return 0;
}
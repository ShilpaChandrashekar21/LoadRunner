Action()
{

	/* add contact */

	lr_think_time(24);

	web_url("addContact", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:6anrNXjC_U0L45mTiNKiJ0SvIAcfogeRXazK2HnZhf4&cup2hreq=5c6c546b18311db7602b7d2de8d03d9e0fa054ae5e413810a9788e01c3acffde", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{c4b32c25-4a25-4f81-87de-8167b94280ac}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{a8c86ce6-6863-4970-b35f-e82ee9bf4249}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{5cc5ee6f-05eb-49e6-bd83-3903cb18644d}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{560cc1e4-fe33-490c-99fe-3297b9b0a246}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{218739f3-ddda-45b0-9e71-dd5dcd183a27}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.d714e27bbcdedab3f9f9ca92462ee6dc8ca779849aefdd27af92009a9d55a38f\"}]},\"ping\":{\"ping_freshness\":\"{7e1d32e9-76fb-44fc-b71e-25fbb8ce4f95}\",\"rd\":6251},\"updatecheck\":{},\""
		"version\":\"433\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{520e62c8-23d6-41fc-a3c3-b7048f5f126c}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\"}]},\"ping\":{\"ping_freshness\":\"{c1e7b737-37b3-4e28-9b1a-6f82d648506a}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.7.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{ebf88856-6a25-40d6-abf4-164e20112bfd}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{1d405b94-958f-461f-acef-4cd0b9bcb1e5}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\""
		"{0dc2c4b3-1002-47b8-8fcc-1a73963282d4}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{06049de9-e183-4ccd-9833-b0e4e60a209d}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\""
		"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{e2169554-eca7-421a-a113-279b5906c8e8}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\""
		"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{fe56152c-fd75-4693-8c2e-261d7db3f052}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"3018\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.9324e37832b4647cfe6dd5c305addbd1aebad06a25acf8cab9423efe9424cbf2\"}]},\"ping\":{\"ping_freshness\":\"{4059b374-9814-4c16-8f55-20b9fe3cc37a}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"857\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\""
		"ping\":{\"ping_freshness\":\"{50fa3a7c-a4fb-40a2-9f32-2c05eabae8b4}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{69353301-4170-4d6c-bfbf-6a3b67a43ac7}\",\"rd\":6251},\""
		"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{e8930521-bc28-4309-9cdd-8123870228f7}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\","
		"\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{aed40726-629d-44d2-b55f-e9e87054450d}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate"
		"\":6148,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd0c10a9d39acddc0fd6a083a23ff8a1521d45ac1328d60a7bd1a89b379b82bc\"}]},\"ping\":{\"ping_freshness\":\"{5d0704ec-e533-43ca-b79d-57c1e5c5955a}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.10.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{9d021b9a-d5e2-438b-aaf7-b3b51bf8788a}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.06e71f675912f15e683ea65e2a1ec902ff07d67953b8dbf4542f93baf98a29bc\"}]},\"ping\":{\""
		"ping_freshness\":\"{989aa007-f458-4079-bdb7-426100d1bded}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.161\",\"protocol\":\"3.1\",\"requestid"
		"\":\"{3d7a6fa8-5625-4388-90e0-040d3cd575fc}\",\"sessionid\":\"{4a853678-e896-4c48-b86e-b76cfbe890fb}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6288.0\"},\"updaterversion\":\"121.0.6167.161\"}}", 
		LAST);

	lr_think_time(12);

	web_custom_request("contacts_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"firstName\":\"john\",\"lastName\":\"jack\"}", 
		LAST);

	web_url("contactList_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Contact List", 
		LAST);

	web_custom_request("contacts_3", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

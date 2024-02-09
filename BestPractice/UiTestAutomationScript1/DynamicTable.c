DynamicTable()
{

	/* click on dynamic table */

	lr_think_time(91);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:8KFZGz-zYWx7t0XmcSM4Z47i28MiKOvlMKZFUFIKVAY&cup2hreq=caf7ec995c69be5c889c6ce8904410f402bc627735da80d25d89a3a1c4077ba4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{f00da2c2-04e3-4d06-bf68-23d2ac864584}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{1911445a-143a-4f38-a670-aab280aba0b4}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{059d574f-540e-4ba3-b3fc-59799b6c99b7}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{3c0d8961-d94f-45ce-a1ec-6c5bf78164b5}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{cbaf489b-deef-4820-9b1c-06d6ed9e4b48}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.d714e27bbcdedab3f9f9ca92462ee6dc8ca779849aefdd27af92009a9d55a38f\"}]},\"ping\":{\"ping_freshness\":\"{0368a49d-7073-4256-9ad4-096940a4b0db}\",\"rd\":6247},\"updatecheck\":{},\""
		"version\":\"433\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{d1439112-cc90-4507-a5c3-efd3e1f642c5}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\"}]},\"ping\":{\"ping_freshness\":\"{232a2597-e9ec-46da-b02e-32f2190431bf}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2024.2.7.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{efa98b18-6988-4315-9e6d-b92af4303dca}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{21c7ccd1-f701-40a8-af20-ae49a19833c4}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness"
		"\":\"{c79645cc-fc0c-4f60-a097-06e26992e2e0}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{2fa69cd4-c87e-4b92-a124-f431539ffcdd}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{f686071a-e8ab-4958-b75b-1c1e9c4f7736}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\""
		"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{b087da99-1203-42a0-a7e4-33c45fd8f898}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\""
		"ping\":{\"ping_freshness\":\"{392c8b19-c422-4b54-bb1c-9c713ffd31f2}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{a3f5eeef-9b27-43c5-b37c-641ce1808025}\",\"rd\":6247},\"updatecheck\""
		":{},\"version\":\"3018\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{afd370d3-23e2-43b6-9889-fc9ae2d4aab5}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\""
		"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{b6fa1555-2354-4477-a659-b83dd4520ebb}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname"
		"\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{09d1eb3d-5134-4c97-84f2-c1a073477653}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\""
		"package\":[{\"fp\":\"1.84bce1360e6c43a7ecfda79e1ceed5e28e6690c55aaadc82af8dc0bad9d3ca51\"}]},\"ping\":{\"ping_freshness\":\"{8e4bfa49-00ae-415b-9086-f4c5b83ee45d}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2024.2.7.5\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]"
		"},\"ping\":{\"ping_freshness\":\"{c90275da-1da8-4863-bcbf-bfd1625687a5}\",\"rd\":6247},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:27yr@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\"ping_freshness\":\"{ea23a56e-35cc-4591-b079-0cb2ed7fa884}\","
		"\"rd\":6247},\"updatecheck\":{},\"version\":\"2024.1.17.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.161\",\"protocol\":\"3.1\",\"requestid\":\"{c6f0c6f6-75fa-4748-bd61-039a0a514fab}\",\"sessionid\""
		":\"{5299bd52-6f9b-4372-8f67-afb6fc49b736}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6268.0\"},\"updaterversion\":\"121.0.6167.161\"}}", 
		LAST);

	web_url("dynamictable", 
		"URL=http://uitestingplayground.com/dynamictable", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(29);

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNjEaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDOmxUaAhgLUG3DVSIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQy-sNGgIYCwzpCL8iBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEIPjDRoCGAs8cCQNIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDrrwcaAhgLU6OuXCIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ5DcaAhgLDc4o8CIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQh64CGgIYC27Ir84iBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAuXnkjLIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARCzFRoCGAtKplY8IgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARDTjQIaAhgLoasjkSIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQgbIOGgIYC4cynCkiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEJkhGgIYCzw6mmYiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	/* back */

	

	return 0;
}

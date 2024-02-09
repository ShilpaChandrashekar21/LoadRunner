Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("analytics.js", 
		"URL=https://www.google-analytics.com/analytics.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.bunnycart.com/", 
		"Snapshot=t19.inf", 
		LAST);

	web_custom_request("report", 
		"URL=https://csp-reporting.cloudflare.com/cdn-cgi/script_monitor/report?m=xEMplc1bLQAPVT4WSrNprqFXjMbdFpDBDlIbNIxFlkQ-1707307307-1-AUeaS4BTJCZimi5kMNtviCc53N9nyPPLDgc4XuZf7T3chqk5ObYuPQhMSUQ1hbokG0n53ChYT-FPDm9kGdg-m87ByrQfY4uTGxshZXKbsAIqMnlX3igyyIb4PwAtpku3AmkVFJFvFFrL-TaD4P3f9kn9ISRzxKm_CZ08QkihExKE", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report_2", 
		"URL=https://csp-reporting.cloudflare.com/cdn-cgi/script_monitor/report?m=xEMplc1bLQAPVT4WSrNprqFXjMbdFpDBDlIbNIxFlkQ-1707307307-1-AUeaS4BTJCZimi5kMNtviCc53N9nyPPLDgc4XuZf7T3chqk5ObYuPQhMSUQ1hbokG0n53ChYT-FPDm9kGdg-m87ByrQfY4uTGxshZXKbsAIqMnlX3igyyIb4PwAtpku3AmkVFJFvFFrL-TaD4P3f9kn9ISRzxKm_CZ08QkihExKE", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":2,\"body\":{\"blockedURL\":\"https://www.bunnycart.com/pub/static/_cache/merged/a72f90e11817b3d0f38bc8b42c792fac.min.js\",\"disposition\":\"report\",\"documentURL\":\"https://www.bunnycart.com/\",\"effectiveDirective\":\"script-src-elem\",\"originalPolicy\":\"script-src 'none'; connect-src 'none'; report-uri https://csp-reporting.cloudflare.com/cdn-cgi/script_monitor/report?m="
		"xEMplc1bLQAPVT4WSrNprqFXjMbdFpDBDlIbNIxFlkQ-1707307307-1-AUeaS4BTJCZimi5kMNtviCc53N9nyPPLDgc4XuZf7T3chqk5ObYuPQhMSUQ1hbokG0n53ChYT-FPDm9kGdg-m87ByrQfY4uTGxshZXKbsAIqMnlX3igyyIb4PwAtpku3AmkVFJFvFFrL-TaD4P3f9kn9ISRzxKm_CZ08QkihExKE; report-to cf-csp-endpoint\",\"referrer\":\"\",\"sample\":\"\",\"statusCode\":200},\"type\":\"csp-violation\",\"url\":\"https://www.bunnycart.com/\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/"
		"537.36\"}]", 
		LAST);

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=1466975774&t=pageview&_s=1&dl=https%3A%2F%2Fwww.bunnycart.com%2F&ul=en-gb&de=UTF-8&dt=Buy%20Aquatic%20Plants%20%26%20Aquarium%20Fish%20online&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=IEBAAEABAAAAACAAI~&jid=1744770239&gjid=307832902&cid=865183460.1707305173&tid=UA-53135226-1&_gid=1809341902.1707305173&_r=1&_slc=1&z=1513304316", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bunnycart.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_concurrent_start(NULL);

	web_url("fbevents.js", 
		"URL=https://connect.facebook.net/en_US/fbevents.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.bunnycart.com/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("collect_2", 
		"URL=https://www.google-analytics.com/collect?v=1&_v=j101&a=1466975774&t=pageview&_s=2&dl=https%3A%2F%2Fwww.bunnycart.com%2F&ul=en-gb&de=UTF-8&dt=Buy%20Aquatic%20Plants%20%26%20Aquarium%20Fish%20online&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=KEBAAEABAAAAACAAI~&jid=&gjid=&cid=865183460.1707305173&tid=UA-53135226-1&_gid=1809341902.1707305173&z=531945670", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.bunnycart.com/", 
		"Snapshot=t24.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("collect_3", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j101&tid=UA-53135226-1&cid=865183460.1707305173&jid=1744770239&gjid=307832902&_gid=1809341902.1707305173&_u=IEBAAEAAAAAAACAAI~&z=1798194236", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bunnycart.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	lr_think_time(4);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.141 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	lr_think_time(116);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(93);

	web_url("generate_204_2", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("threatListUpdates:fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch4KDGdvb2dsZWNocm9tZRIOMTIxLjAuNjE2Ny4xNDEaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARDelxUaAhgL_a330iIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQpOoNGgIYC0fgjbUiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABENzhDRoCGAv4W-lsIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDNrwcaAhgLczpccCIEIAEgAigBGigIARAIGhoKDQgBEAgYASIDMDAxMAQQ4TcaAhgLvwgj8yIEIAEgAigEGikIDxABGhsKDQgPEAYYASIDMDAxMAEQ4qwCGgIYC0UDd6EiBCABIAIoARonCAoQCBoZCg0IChAIGAEiAzAwMTABEAcaAhgLYjna-CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQIxoCGAuXnkjLIgQgASACKAEaKAgIEA"
		"EaGgoNCAgQBhgBIgMwMDEwARCyFRoCGAuvTEX6IgQgASACKAEaKQgNEAEaGwoNCA0QBhgBIgMwMDEwARCljQIaAhgLCTLfEiIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ2bAOGgIYC1pmx0oiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEJMhGgIYCwafaK8iBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t29.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("v3", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=PdFyyZ3%2BHYOBv0u8ppWed7%2FZKXo4KFoEyhIOR2WtAJ5Ev1%2F36QqTmXPqhR%2BqCnkS5JSAeYIY0VZt%2F4tOc1%2FLBVHJMKYP9odSrQUf8Cpq0Mn0x9e9wgBhc2FlQh7HbK3igFh3", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:nE4JAgIJHmwUgOyVQMrfzyQq8XZVSZIQ42dQP2jHkFI&cup2hreq=6b989f593e5f8d0aae03e65fb9a80fa6e6a91c679d05b23db367a4d8f38667e2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{901c3d49-e0a1-4114-b255-19d6a1951243}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{0dbadd30-0d2c-421f-bb4d-6d10dd089701}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{2c32b124-5403-41ae-8f2a-22c862dac745}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{8538a3e6-fe08-428f-b0c7-cd209071ed7f}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{350e250e-7775-4327-b080-8d689d0ae962}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{c92c0813-ccc1-4cee-b46e-f2015b90aa7d}\",\"rd\":6246},\"updatecheck\":{}"
		",\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{09cfc08e-ca3c-4651-a00f-a9bb66004d5e}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{11f63291-e35d-44f6-8b0d-2ac6811b9ca5}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{9f951666-889b-47a1-bf3c-289e4482399b}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{310db4af-8049-4c66-973b-1a588961e8de}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness"
		"\":\"{e43f28cf-3962-4e96-b700-2b2e64e4ad6b}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{43e12fe9-59f0-46a1-b6f3-09824e0b615c}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{ea196298-ec37-4695-b5c6-8562fb050802}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\""
		"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{4bdfc919-0a08-4185-867c-e46d9851417a}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\""
		"ping\":{\"ping_freshness\":\"{676e6322-0f44-4189-a995-361f1dd0a551}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{38653538-12a0-498a-b6bd-f3ab5af0f89b}\",\"rd\":6246},\"updatecheck\""
		":{},\"version\":\"3018\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{5c6253f6-2d21-422c-9c2b-f9e76e987a64}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\""
		"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{dc2c22fe-2a8c-47e4-b972-b34f0391a6fe}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname"
		"\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{4bc3c7e7-1eea-4883-b3dc-d878d5f1c124}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":"
		"[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c5f26afa-f01e-4f4f-a6b7-0eb17fba8f75}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1db172c73ae73d79dec3af374adec6dae1047112d5ec949045ad5bdf2b642e79\"}]}"
		",\"ping\":{\"ping_freshness\":\"{1fc10879-335d-4857-84e4-84d3bf35dcef}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.141\",\"protocol\":\"3.1\""
		",\"requestid\":\"{09d4c786-d09e-4775-9b1a-df01d7e79a44}\",\"sessionid\":\"{17418b10-16a0-4b2e-8334-3a7ca7864fa3}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6268.0\"},\"updaterversion\":\"121.0.6167.141\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collect_4", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j101&a=884293478&t=pageview&_s=1&dl=https%3A%2F%2Fwww.bunnycart.com%2F&ul=en-gb&de=UTF-8&dt=Buy%20Aquatic%20Plants%20%26%20Aquarium%20Fish%20online&sd=24-bit&sr=1280x720&vp=1263x593&je=0&_u=AACAAEABAAAAACAAI~&jid=1413964495&gjid=652083596&cid=865183460.1707305173&tid=UA-53135226-1&_gid=1809341902.1707305173&_r=1&_slc=1&z=206325388", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bunnycart.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	return 0;
}
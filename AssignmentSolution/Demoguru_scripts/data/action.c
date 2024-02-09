Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("saucedemo.com", 
		"URL=https://saucedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("2.9b02e67e.chunk.js", 
		"URL=https://www.saucedemo.com/static/js/2.9b02e67e.chunk.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("rP2Yp2ywxg089UriI5-g4vlH9VoD8Cmcqbu0-K4.woff2", 
		"URL=https://fonts.gstatic.com/s/dmsans/v14/rP2Yp2ywxg089UriI5-g4vlH9VoD8Cmcqbu0-K4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("aFTU7PB1QTsUX8KYthqQBA.woff2", 
		"URL=https://fonts.gstatic.com/s/dmmono/v14/aFTU7PB1QTsUX8KYthqQBA.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("aFTR7PB1QTsUX8KYvumzEYOtbQ.woff2", 
		"URL=https://fonts.gstatic.com/s/dmmono/v14/aFTR7PB1QTsUX8KYvumzEYOtbQ.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("service-worker.js", 
		"URL=https://www.saucedemo.com/service-worker.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t30.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("submit", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("submit_2", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.html", 
		"URL=https://www.saucedemo.com/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDESIAlFkLTOuKWH4RIFDRM2JzMSBQ3OQUx6IZFEnCqjIjpF", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDESIAlFkLTOuKWH4RIFDRM2JzMSBQ3OQUx6IZFEnCqjIjpF?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("runtime-main.7bfd0a48.js", 
		"URL=https://www.saucedemo.com/static/js/runtime-main.7bfd0a48.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("arrow3x.4b825b78.svg", 
		"URL=https://www.saucedemo.com/static/media/arrow3x.4b825b78.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("bolt-shirt-1200x1500.c2599ac5.jpg", 
		"URL=https://www.saucedemo.com/static/media/bolt-shirt-1200x1500.c2599ac5.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("bike-light-1200x1500.37c843b0.jpg", 
		"URL=https://www.saucedemo.com/static/media/bike-light-1200x1500.37c843b0.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("close@3x.a30a8a1d.svg", 
		"URL=https://www.saucedemo.com/static/media/close@3x.a30a8a1d.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("cart3x.3669d74a.svg", 
		"URL=https://www.saucedemo.com/static/media/cart3x.3669d74a.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("filter3x.2943df5b.svg", 
		"URL=https://www.saucedemo.com/static/media/filter3x.2943df5b.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("menu3x.52cc17a3.svg", 
		"URL=https://www.saucedemo.com/static/media/menu3x.52cc17a3.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("red-onesie-1200x1500.2ec615b2.jpg", 
		"URL=https://www.saucedemo.com/static/media/red-onesie-1200x1500.2ec615b2.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("pony-express.46394a5d.png", 
		"URL=https://www.saucedemo.com/static/media/pony-express.46394a5d.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("sauce-backpack-1200x1500.0a0b85a3.jpg", 
		"URL=https://www.saucedemo.com/static/media/sauce-backpack-1200x1500.0a0b85a3.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("red-tatt-1200x1500.30dadef4.jpg", 
		"URL=https://www.saucedemo.com/static/media/red-tatt-1200x1500.30dadef4.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("sauce-pullover-1200x1500.51d7ffaf.jpg", 
		"URL=https://www.saucedemo.com/static/media/sauce-pullover-1200x1500.51d7ffaf.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("sl-404.168b1cce.jpg", 
		"URL=https://www.saucedemo.com/static/media/sl-404.168b1cce.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t48.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(4);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.141 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	lr_think_time(8);

	web_custom_request("submit_3", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("submit_4", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(21);

	web_custom_request("submit_5", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("submit_6", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:_0cNpvolZVVEdhbHA8xvi6RO0R0DNpCD-a5lb88yGR4&cup2hreq=8f213f05a1e1ce36475ed291e74198a88288f2c8010d2e995f1e16b8e3804ef0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.30f5f886b824ca1efde5174370fc03cab3c02e9c309bc381857430f5843a510b\"}]},\"ping\":{\"ping_freshness\":\"{161ca4ac-fac6-4e2a-9548-6f5299eeddca}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.3.36.311\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{be6a4863-ed12-430e-b211-1667d68dc6e0}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{4229312b-c386-4b76-b298-595f6ae4ed4e}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{453c5535-37fe-4cf4-9acc-0100dbe219d2}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{9c0a1267-0424-4dcc-96b3-ed1b5addd0e5}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{6f11e011-9211-4f44-a11a-7fe5bb893a1b}\",\"rd\":6246},\"updatecheck\":{}"
		",\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{c4aa040f-85ac-4186-9b32-2f7410e2460b}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6134,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{d9da7112-7ec2-4f8d-850d-9919ae8cb131}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{c9ba1f14-afe4-42d8-ab90-4cf371a102f7}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{1066e144-fe5d-45af-8454-598dd294092d}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness"
		"\":\"{c403dda3-94d1-4aa1-b46b-2b9dd7da82d8}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{c89b5832-fc62-4624-8f7a-1c2d2e183238}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{01dfda3f-ac03-47c0-8be6-ebb0f42226c9}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":["
		"{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{7a869a46-88f4-4343-813a-cdcd7d58978b}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{a8e25f05-342d-4cd0-9ea6-5f426794689a}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{902e4a65-f325-496d-9a3c-fd6c9a62bb51}\",\"rd\":6246},\"updatecheck\":{}"
		",\"version\":\"3018\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{614b9d0f-134d-4e90-8f71-275c140e9953}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{ead475d2-2ca3-40bc-adc7-e70e421d865f}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\""
		"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{d3f4891a-d3b1-43d6-85ac-7c42ba122b2b}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6148,\"lang\":\"en-GB\",\"packages\":{\""
		"package\":[{\"fp\":\"1.1db172c73ae73d79dec3af374adec6dae1047112d5ec949045ad5bdf2b642e79\"}]},\"ping\":{\"ping_freshness\":\"{87276add-e0b0-4820-a451-ed9d0755be2b}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]"
		"},\"ping\":{\"ping_freshness\":\"{56661334-e1bb-431b-a4fe-f1d5fcc4b572}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\"ping_freshness\":\"{ee4bc290-f27c-417b-8ae8-7779599e40ff}\",\"rd\":6246"
		"},\"updatecheck\":{},\"version\":\"2024.1.17.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.141\",\"protocol\":\"3.1\",\"requestid\":\"{e0d8689b-6258-47b4-9e26-05980f5b463f}\",\"sessionid\":\""
		"{d5f07313-91f3-48b0-8546-a802ecef0827}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"laststarted\":0,\"name\":\"ChromiumUpdater\",\"updatepolicy\":-1,\"version\":\"123.0.6268.0\"},\"updaterversion\":\"121.0.6167.141\"}}", 
		LAST);

	/* entering username */

	return 0;
}
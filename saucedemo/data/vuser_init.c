/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.161 (8e23a63b5dead78825bec5ef48f4aeb5698ce21a-refs/branch-heads/6167@{#1764}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	lr_think_time(7);

	web_url("www.freshtohome.com", 
		"URL=https://www.freshtohome.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tags", 
		"URL=https://asia.creativecdn.com/tags?id=pr_4ioo4qmFHYgLJsDnam70&ncm=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.freshtohome.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("660083121", 
		"URL=https://td.doubleclick.net/td/rul/660083121?random=1707736015294&cv=11&fst=1707736015294&fmt=3&bg=ffffff&guid=ON&async=1&gtm=45He4270v78148969za200&gcd=13l3l3l3l1&dma=0&u_w=1280&u_h=720&url=https%3A%2F%2Fwww.freshtohome.com%2F&label=F7tmCI3P2skBELGj4LoC&hn=www.googleadservices.com&frm=0&tiba=FreshToHome%20-%20Order%20Fresh%20Fish%2C%20Chicken%20and%20Mutton%20Online.&value=0&bttype=purchase&npa=0&pscdl=noapi&auid=1351083710.1707736015&uaa=x86&uab=64&uafvl=Not%2520A"
		"(Brand%3B99.0.0.0%7CGoogle%2520Chrome%3B121.0.6167.161%7CChromium%3B121.0.6167.161&uamb=0&uap=Windows&uapv=10.0.0&uaw=0&fledge=1&capi=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.freshtohome.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("session", 
		"URL=https://app.adjust.net.in/session?gps_adid=96eacd87-b851-48aa-8086-4be02489ec80&app_token=b0n6h09skpog&environment=production&os_name=Windows&platform_name=Win32&callback_params=%7B%22device_id%22%3A%2296eacd87-b851-48aa-8086-4be02489ec80%22%2C%22medium%22%3A%22Desktop%22%7D", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.freshtohome.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("10092155.json", 
		"URL=https://s.yimg.com/wi/config/10092155.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.freshtohome.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("collect", 
		"URL=https://stats.g.doubleclick.net/j/collect?t=dc&aip=1&_r=3&v=1&_v=j101&tid=UA-32234783-1&cid=1679941838.1707736017&jid=535950374&gjid=918419895&_gid=1893447347.1707736017&_u=IEBAAEAAAAAAACAAI~&z=436324710", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.freshtohome.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_url("session_2", 
		"URL=https://app.adjust.net.in/session?gps_adid=96eacd87-b851-48aa-8086-4be02489ec80&app_token=b0n6h09skpog&environment=production&os_name=Windows&platform_name=Win32&callback_params=%7B%22device_id%22%3A%2296eacd87-b851-48aa-8086-4be02489ec80%22%2C%22medium%22%3A%22Desktop%22%7D", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.freshtohome.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

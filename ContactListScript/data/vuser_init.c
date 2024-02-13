/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("thinking-tester-contact-list.herokuapp.com", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(5);

	web_url("addUser", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/addUser", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.161 (8e23a63b5dead78825bec5ef48f4aeb5698ce21a-refs/branch-heads/6167@{#1764}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	return 0;
}

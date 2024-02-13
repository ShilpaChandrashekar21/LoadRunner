/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("thinking-tester-contact-list.herokuapp.com", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.161 (8e23a63b5dead78825bec5ef48f4aeb5698ce21a-refs/branch-heads/6167@{#1764}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_add_cookie("NID=511=qpCCRrAbQQVT_1iBN3tAmHhP2KTY6jJNDp7vd7mRKg5yrFJqKC3ndYydLQ8fsvmYdfAJuU2IRrUQRVdS_e4EXpg3pnRbmX4zL4X6b-BXN7rmkOEfEYY2YWzLhGnOb5xK_Z3Jc58VpRAS7J8VCYYo58Aknex9Q9gXRKoVLOKi88s; DOMAIN=safebrowsing.google.com");

	lr_think_time(16);

	web_custom_request("crx-telemetry", 
		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\x08\\xEB\\xCF\\xA1\\xE5\\xD91\\x12M\nK\n ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A\tWeb Store \\xCC\\x88\\xB9\\xD4\\xE40(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12Z\nX\n ghbmnnjooekpmoecnnnilnnbdlolhkhi\\x12\\x061.73.0\\x1A\\x13Google Docs Offline \\x92\\x86\\xA9\\xD9\\xD11(\\x010\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12r\np\n mbopgmdnpcbohhpnfglgohlbhfongabi\\x12\\x056.1.0\\x1A,BlazeMeter | The Continuous Testing Platform \\x94\\xBC\\xB0\\xBA\\xCF1"
		"(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\nQ\n mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\xCD\\x88\\xB9\\xD4\\xE40(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12Y\nW\n neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\xCE\\x88\\xB9\\xD4\\xE40(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\xCD\\x88\\xB9\\xD4\\xE40"
		"(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12a\n_\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1A\\x19Chrome Web Store Payments \\x85\\xA2\\xB9\\xD4\\xE40(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
		LAST);

	lr_think_time(4);

	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"abcd@hotmail.com\",\"password\":\"Shilpa21\"}", 
		LAST);

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	return 0;
}

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

	
	

	web_add_cookie("NID=511=qpCCRrAbQQVT_1iBN3tAmHhP2KTY6jJNDp7vd7mRKg5yrFJqKC3ndYydLQ8fsvmYdfAJuU2IRrUQRVdS_e4EXpg3pnRbmX4zL4X6b-BXN7rmkOEfEYY2YWzLhGnOb5xK_Z3Jc58VpRAS7J8VCYYo58Aknex9Q9gXRKoVLOKi88s; DOMAIN=safebrowsing.google.com");

	lr_think_time(16);

//	web_custom_request("crx-telemetry", 
//		"URL=https://safebrowsing.google.com/safebrowsing/clientreport/crx-telemetry", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer=", 
//		"Snapshot=t3.inf", 
//		"Mode=HTML", 
//		"EncType=application/octet-stream", 
//		"BodyBinary=\\x08\\xEB\\xCF\\xA1\\xE5\\xD91\\x12M\nK\n ahfgeienlihckogmohjhadlkjgocpleb\\x12\\x030.2\\x1A\tWeb Store \\xCC\\x88\\xB9\\xD4\\xE40(\\x000\\x008\\x00@\\x00H\\x00P\\x04X\\x05`\\x00h\\x00\\x12Z\nX\n ghbmnnjooekpmoecnnnilnnbdlolhkhi\\x12\\x061.73.0\\x1A\\x13Google Docs Offline \\x92\\x86\\xA9\\xD9\\xD11(\\x010\\x008\\x01@\\x01H\\x00P\\x01X\\x06`\\x00h\\x00\\x12r\np\n mbopgmdnpcbohhpnfglgohlbhfongabi\\x12\\x056.1.0\\x1A,BlazeMeter | The Continuous Testing Platform \\x94\\xBC\\xB0\\xBA\\xCF1"
//		"(\\x000\\x008\\x01@\\x01H\\x00P\\x01X\\x01`\\x00h\\x00\\x12S\nQ\n mhjfbmdgcfjbbpaeojofohoefgiehjai\\x12\\x011\\x1A\\x11Chrome PDF Viewer \\xCD\\x88\\xB9\\xD4\\xE40(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12Y\nW\n neajdppkdcdipfabeoofebfddakdcjhd\\x12\\x031.0\\x1A\\x15Google Network Speech \\xCE\\x88\\xB9\\xD4\\xE40(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12V\nT\n nkeimhogjdpnpccoofpliimaahmaaome\\x12\\x061.3.21\\x1A\\x0FGoogle Hangouts \\xCD\\x88\\xB9\\xD4\\xE40"
//		"(\\x000\\x008\\x00@\\x00H\\x00P\\x01X\\x05`\\x00h\\x00\\x12a\n_\n nmmhkkegccagdldgiimedpiccmgmieda\\x12\\x071.0.0.6\\x1A\\x19Chrome Web Store Payments \\x85\\xA2\\xB9\\xD4\\xE40(\\x010\\x008\\x01@\\x01H\\x00P\\x06X\n`\\x00h\\x00", 
//		LAST);

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
		"Body={\"email\":\"{email}\",\"password\":\"{pass}\"}", 
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
	//web_set_user("{email}","{pass}","contacts");
	

	//web_set_max_html_param_len("9999999");
	web_reg_save_param_ex(
	"ParamName=my_token",
    "LB=token:",
    "RB=}",
    "Ordinal=1",
    SEARCH_FILTERS,
		"Scope=body",
    LAST);
		
	char *token = "${my_token}";
	web_add_header("Authorization", lr_eval_string("Bearer %s", token));

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

	

	return 0;
}

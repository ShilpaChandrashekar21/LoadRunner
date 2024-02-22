Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("thinking-tester-contact-list.herokuapp.com", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	

	

	
	web_reg_save_param("vartoken", "LB=\"token\":\"","RB=\"","Search=Body",LAST);
	
//		web_reg_save_param(
//		"vartoken",
//		"LB/IC=\"token\":\"",
//		"RB=\"",
//		"Search=Body",
//		LAST);
//
//	


//	web_reg_save_param_ex(
//		"ParamName=t1",
//		"LB=\"token\":\"",
//		"RB=\"",
//		"Ordinal=1",
//		SEARCH_FILTERS,
//		"Scope=BODY",
//		LAST);	

//	web_reg_save_param_regexp(
//		"ParamName=t1",
//    "RegExp=\"token\":\"([^\"]+)\"",
//		"Ordinal=1",
//		SEARCH_FILTERS,
//		"Scope=BODY",
//		LAST);

	//	web_reg_save_param_json(
//		"ParamName=t1",
//		"QueryString=$.token",
//		SEARCH_FILTERS,
//		"Scope=BODY",
//		LAST);

	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"xy@zfz.com\",\"password\":\"12345678\"}", 
		LAST);


	

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
		
	


	web_add_auto_header("Authorization","Bearer {t1}");

	web_custom_request("contacts",
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t7.inf",
		"Mode=HTML", 
		LAST);

	return 0;
}
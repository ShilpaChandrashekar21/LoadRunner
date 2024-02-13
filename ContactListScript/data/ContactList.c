ContactList()
{

	/* new contact */

	lr_think_time(14);

	web_url("addContact", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(28);

	web_custom_request("contacts_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"firstName\":\"Sin\",\"lastName\":\"dhu\",\"birthdate\":\"1999-03-23\"}", 
		LAST);

	web_url("contactList_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("contacts_3", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

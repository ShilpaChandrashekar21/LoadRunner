DynamicId()
{
	/* click on dynamic id */

	lr_think_time(57);

	web_url("dynamicid", 
		"URL=http://uitestingplayground.com/dynamicid", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/* button with dynamic id */
	return 0;
}

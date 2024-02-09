Action()
{

	/* dynamicId */

	web_reg_find("Text=Dynamic ID", 
		LAST);

	lr_think_time(38);

	web_url("dynamicid", 
		"URL=http://uitestingplayground.com/dynamicid", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}

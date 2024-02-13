/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("BankingProject", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("style.css", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("account.service.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/account.service.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("user.service.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/user.service.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("app.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/app.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("customer.data.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/customer.data.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("mockDataLoadService.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/mockDataLoadService.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("transaction.service.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/transaction.service.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("accountViewController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/accountViewController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("date.search.filter.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/date.search.filter.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("addCustomerController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/addCustomerController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("angular.min.js", 
		"URL=https://ajax.googleapis.com/ajax/libs/angularjs/1.4.7/angular.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("jquery.min.js", 
		"URL=https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("config.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/config.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("customerViewController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/customerViewController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("depositController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/depositController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("bodyController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/bodyController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("listCustomerController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/listCustomerController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("openAccountController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/openAccountController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("managerViewController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/managerViewController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("mainController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/mainController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("optionsController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/optionsController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("transactionSummaryController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/transactionSummaryController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("withdrawlController.js", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/withdrawlController.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t25.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("main.html", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/main.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://www.globalsqa.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("options.html", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/options.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

//	web_custom_request("command", 
//		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/vnd.google.octet-stream-compressible", 
//		"Referer=", 
//		"Snapshot=t29.inf", 
//		"ContentEncoding=gzip", 
//		"Mode=HTML", 
//		"EncType=application/octet-stream", 
//		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.161 (8e23a63b5dead78825bec5ef48f4aeb5698ce21a-refs/branch-heads/6167@{#1764}) channel(stable),gzip(gfe)"
//		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
//		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	return 0;
}

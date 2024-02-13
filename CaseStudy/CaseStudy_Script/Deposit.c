Deposit()
{
	/* deposit */

	lr_think_time(15);

	web_url("depositTx.html", 
		"URL=https://www.globalsqa.com/angularJs-protractor/BankingProject/depositTx.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.globalsqa.com/angularJs-protractor/BankingProject/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESGQnRtEZ2-NdaeBIFDYGQ8XwhazZa6dxyhSE=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNjESGQnRtEZ2-NdaeBIFDYGQ8XwhazZa6dxyhSE=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t34.inf", 
		LAST);

	return 0;
}

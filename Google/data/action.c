Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("1P_JAR=2024-02-20-04; DOMAIN=ogs.google.com");

	web_add_cookie("AEC=Ae3NU9OZQ1FWVY0FCfXQxjsz0vk8qS8RW4ycQSP7SEKYIsTNoSQmIk4CBw; DOMAIN=ogs.google.com");

	web_add_cookie("NID=511=PrrdD9gvbjEuaO0NYUTklYB47fQXguWp1K7CeR5UZ1ernd1XbPfNOPtpDSFtz1pesoGTdFZpRzjlu520DxCsXMUDI62hm2ivStHaJZf35t5Eb2p6OC1_ZZA1cd2VXjbVn30GMBd_9Z0E98FBrxu71u820G7gvMgArtXASOWOJ7raa0R28iUfW7w; DOMAIN=ogs.google.com");

	web_url("callout", 
		"URL=https://ogs.google.com/widget/callout?prid=19037050&pgid=19037049&puid=a5627eb5c02923db&cce=1&dc=1&origin=https%3A%2F%2Fwww.google.com&cn=callout&pid=1&spid=538&hl=en", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true&authuser=0", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://ogs.google.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("1P_JAR=2024-02-20-04; DOMAIN=play.google.com");

	web_add_cookie("AEC=Ae3NU9OZQ1FWVY0FCfXQxjsz0vk8qS8RW4ycQSP7SEKYIsTNoSQmIk4CBw; DOMAIN=play.google.com");

	web_add_cookie("NID=511=PrrdD9gvbjEuaO0NYUTklYB47fQXguWp1K7CeR5UZ1ernd1XbPfNOPtpDSFtz1pesoGTdFZpRzjlu520DxCsXMUDI62hm2ivStHaJZf35t5Eb2p6OC1_ZZA1cd2VXjbVn30GMBd_9Z0E98FBrxu71u820G7gvMgArtXASOWOJ7raa0R28iUfW7w; DOMAIN=play.google.com");

	web_add_cookie("OGPC=19037049-1:; DOMAIN=play.google.com");

	web_custom_request("log_2", 
		"URL=https://play.google.com/log?format=json&hasfast=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.google.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=[[1,null,null,null,null,null,null,null,null,null,[null,null,null,null,\"en-IN\",null,null,null,[[[\"Not A(Brand\",\"99\"],[\"Google Chrome\",\"121\"],[\"Chromium\",\"121\"]],0,\"Windows\",\"10.0.0\",\"x86\",\"\",\"121.0.6167.185\"],[1,0,0,0,0]]],373,[[\"1708403253018\",null,null,null,null,null,null,\"[108,40400,538,1,\\\"606105313.0\\\",\\\"NCrUZcSUBfzUseMPmN-i2Ao\\\",null,null,null,\\\"en\\\",\\\"IND\\\",0,8,2924,null,0,0,null,\\\"og-e8169fc9-ca2a-41ca-9254-c5b2f7dcc5a7\\\",null,null,null,"
		"null,null,null,null,0,null,null,null,19037050,null,null,null,null,0,[1],1,null,null,null,null,null,null,null,null,null,null,null,[0,2],null,null,null,null,0,null,[2,5,\\\"sd\\\",33],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[null,null,[3700942,3701290]]\"],null,null,null,null,1],[\"1708403253021\",null,null,null,null,null,null,\"[107,40400,538,1,\\\"606105313.0\\\",\\\"NCrUZcSUBfzUseMPmN-i2Ao\\\",null,null,null,\\\"en\\\",\\\"IND\\\",0,8,2927,null,0,0,null,\\\""
		"og-e8169fc9-ca2a-41ca-9254-c5b2f7dcc5a7\\\",null,null,null,null,null,null,null,8,null,null,null,19037050,null,null,null,null,0,[2],2,null,null,null,null,null,null,null,null,null,null,null,[0,2],null,null,null,null,0,null,[2,5,\\\"sd\\\",33],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[null,null,[3700942,3701290]]\"],null,null,null,null,2],[\"1708403253626\",null,null,null,null,null,null,\"[109,40400,538,1,\\\"606105313.0\\\",\\\"NCrUZcSUBfzUseMPmN-i2Ao\\\",null,null,"
		"null,\\\"en\\\",\\\"IND\\\",0,8,3532,null,0,0,null,\\\"og-e8169fc9-ca2a-41ca-9254-c5b2f7dcc5a7\\\",null,null,null,null,null,null,null,32936,null,null,null,19037050,null,null,null,null,0,[3],3,null,null,null,null,null,null,null,null,null,null,null,[0,2],null,null,null,null,0,null,[2,5,\\\"sd\\\",33],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[null,null,[3700942,3701290]]\"],null,null,null,null,3],[\"1708403253629\",null,null,null,null,null,null,\"[36,40400,538,1,\\\""
		"606105313.0\\\",\\\"NCrUZcSUBfzUseMPmN-i2Ao\\\",null,null,null,\\\"en\\\",\\\"IND\\\",0,8,3535,null,0,0,null,\\\"og-e8169fc9-ca2a-41ca-9254-c5b2f7dcc5a7\\\",null,null,null,null,612,null,null,32938,null,null,null,19037050,null,null,null,null,null,null,4,-1,null,null,null,76,256,879,1249,null,null,null,[0,2,1,0,0],null,null,null,null,0,null,[2,5,\\\"sd\\\",33],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[null,null,[3700942,3701290]]\"],null,null,null,null,4]],\""
		"1708403254021\",null,null,null,null,null,null,null,null,null,null,null,null,null,[[null,[null,null,null,null,null,null,null,null,null,null,null,null,122505695]],9]]", 
		LAST);

	/* search */

	return 0;
}
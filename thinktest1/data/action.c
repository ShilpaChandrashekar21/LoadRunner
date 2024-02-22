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

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01@\\x00H\\x07:%z00000162-c454-d76e-0000-00005ad2013dR\\x1E\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\xB1\\xE6\\x02\n\\x04\\x18\\xB1\\xE6\\x02\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.185 (057a8ae7deb3374d0f1b04b36304d236f0136188-refs/"
		"branch-heads/6167@{#1818}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_custom_request("command_2", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x02*\\xCB\\x05\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x99\\x01\\x08\\xB1\\xE6\\x02\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_pw\\x12\\x0551!pw\\x1A\\x12\t\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00\\x11\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00)\\x99\\xAC\\x83?\\xB9\\x11\\x06\\x00\nE\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00\\x11\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00)U\\x93\\x83?"
		"\\xB9\\x11\\x06\\x000\\x80\\x96\\x82\\xD0\\x93\\xB7\\x84\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x02(\\x000\\x008\\x00@\\x002&\\x08\\xDE\\xD8\\x12\\x12\\x10 \\x00x\\xF4\\xE4\\xB5\\xBF\\x02\\x80\\x01\\xBE\\xC8\\x96\\x88\\xDC1*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\x9A\\xB7\t\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_di\\x12\\x0551!di\\x1A\\x12\t\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00\\x11\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00)\\x84\\xAC\\x83?\\xB9\\x11\\x06\\x00\nE"
		"\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00\\x11\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00)U\\x93\\x83?\\xB9\\x11\\x06\\x000\\x80\\x96\\x82\\xD0\\x93\\xB7\\x84\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xFC\\xDE$\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_st\\x12\\x0551!st\\x1A\\x12\t\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00\\x11\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00)\\x9F\\xAC\\x83?\\xB9\\x11\\x06\\x00\nE\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00\\x11\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00)U\\x93\\x83?\\xB9\\x11\\x06\\x000\\x80\\x96\\x82\\xD0\\x93\\xB7\\x84\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xAB\\xD26\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_wk\\x12\\x0551!wk\\x1A\\x12\t\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00\\x11\\xEB\\x94\\x83?\\xB9\\x11\\x06\\x00)\\xA3\\xAC\\x83?\\xB9\\x11\\x06\\x00\nE\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00\\x11\\x00\\x8B\\x00:\\xB9\\x11\\x06\\x00)U\\x93\\x83?\\xB9\\x11\\x06\\x000\\x80\\x96\\x82\\xD0\\x93\\xB7\\x84\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002#\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xAF\\xC8\\xC9\\xCB\\xC4\\x9F\\xD4\\xB4\\x01*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00@\\x00H\\x0CP\\x00:%z00000162-c454-d76e-0000-00005ad2013dR\\x16\n"
		"\\x0E\\x12\\x0C8\\x00@\\x01R\\x04\\x08\\x00\\x10\\x00`\\x07\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.185 (057a8ae7deb3374d0f1b04b36304d236f0136188-refs/branch-heads/6167@{#1818}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_custom_request("command_3", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=EqBJmtXuwdBaPOmd8C%2FKQg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18shilpagowda939@gmail.com\\x10c\\x18\\x01\"\\xE9\r\n\\xAE\\x06\n$2c38a5b0-834a-4767-8be8-807be665619c \\x00(\\x91\\x86\\x96\\x88\\xDC10\\x91\\x86\\x96\\x88\\xDC1:\tencrypted\\x90\\x01\\x00\\xAA\\x01\\xC7\\x05\\x8A\\xB3\\x16\\xC2\\x05\n\\xC9\\x03\nX8h4fadipPvM9KxM3DNcyVJzkd0RGKffaZrLmFhMbZLaFLDiibVQzsAUikLAqahbItT7NVMARintejmt6A9lC1w==\\x12\\xEC\\x02rFg4TCq+A1T0Lmod0/bhPADIRT43tvPLCPKH/Tanh4hfiTj9hyb1O/FAHjeUwr35xc8MPR1tA1H9W2RCO+iYBwMB5UWqZzs+"
		"ljUdhWEqyUb5mSecDeHe6x67EgyOeH2bmFI8UgMsoUwArpfmlMQCsOnPEJhsjUBkPAGw1uB1tRgGP6ASNbE3z4+ha+rXLC+GtJycUSE2OvXaR22s36FgtteMV7+kRbz2wqULvENa+C0hf7Cc21wp59/oj7cXmP/oBADU33qxf4Yb73KHvDjJgeYK+zqKykE1lUhJEUC1byY7/KIttjETHIE39ZPM/xE/w3Lmc/hEePmwaibb/UA2EMg7wBzDBRwmxb9ZsYzQ6wI=\\x1A=\n3https://thinking-tester-contact-list.herokuapp.com/\\x10\\x01\\x18\\x00\"\\x00h\\x00*\\xB4\\x01\nX8h4fadipPvM9KxM3DNcyVJzkd0RGKffaZrLmFhMbZLaFLDiibVQzsAUikLAqahbItT7NVMARintejmt6A9lC1w=="
		"\\x12XnftTB3wUPDIfxG9U2C4brSSDQwQh1POYTqjDvpH7t9+dvhK/xH/PTAupe89JLmDcxDWzJjQXB/zP9rBcpB5XJg==\\xBA\\x01\\x1CCs5ZCXN7i9OkiKo5aKQhVYUxZqI=\\x12\\x18EqBJmtXuwdBaPOmd8C/KQg==\"\\x98\\x05\\x08\\xB1\\xE6\\x02\\x08\\xDE\\xD8\\x12\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xB4\\xD2$\\x08\\xA2\\xBE,\\x08\\xAB\\xD26\\x08\\x81\\xF5\\x02\\x18\\x00 \\x00*\\x98\\x01fK-RjIe_AgQ"
		":APA91bGxEkgkhKLl_nwlTJ4Jd_V1Hc61Pmwp0s991YW16xretH5yTiPvPOOWlIlcvePaRWLxJkzXxS627HRFmskUrNjMFE9H0o9MK-wEdBtEd9sFz3rmrfpqL_xdV2lXiQN5gYOZbiUL*\\x98\\x01f24g0LETiyU:APA91bHFwb7ajCpsB9OcGj4CadmYd972y7IyT5ZZPJaXBAk89G1t5WKsXkMWX4iG9hDg4lSWb1M8gau3VaTOl-DGTASYJ6tf-UKEcoz2J3NAL2qZf4QwNX6eg0RACj0JOpGsaS-L4eXH0\\x00:\\x98\\x01f24g0LETiyU:APA91bHFwb7ajCpsB9OcGj4CadmYd972y7IyT5ZZPJaXBAk89G1t5WKsXkMWX4iG9hDg4lSWb1M8gau3VaTOl-DGTASYJ6tf-UKEcoz2J3NAL2qZf4QwNX6eg0RACj0JOpGsaS-L4eXH:\\x98\\x01fK-RjIe_AgQ"
		":APA91bGxEkgkhKLl_nwlTJ4Jd_V1Hc61Pmwp0s991YW16xretH5yTiPvPOOWlIlcvePaRWLxJkzXxS627HRFmskUrNjMFE9H0o9MK-wEdBtEd9sFz3rmrfpqL_xdV2lXiQN5gYOZbiUL@\\x012\\x80\\x02lAaD +JqLX,E:xnWiWLR'xK^:'VB|v}'IbuG-PTr)2GYW[#tXScs/b|}%:&9)a qsO zF<8)0wkUTN\".$2_V\"6-m_Rb?r2K3Zo%m~B~TYVi]`v0b$=7t%H4\\\\qT'*0ukSgj@MnOxTw{DhGxt_2p9xLu<Os|o83qgw4;irJzW%P5SY)f1Qgr4{H\"-pF>mj3sZgoIP&kf\\\\1tc`T?7w5X#Q$y\\\\nK;aSWKT07f7/3kH=g9uaV]H84-6hfBxy!>MoUutl\":%z00000162-c454-d76e-0000-00005ad2013dR\\x06\\x10\\x01\\x18\\x00 "
		"\\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.185 (057a8ae7deb3374d0f1b04b36304d236f0136188-refs/branch-heads/6167@{#1818}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	lr_think_time(5);

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

	web_add_cookie("token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfaWQiOiI2NWQzMDFkZDI3NDUzNzAwMTM0MmRlNTkiLCJpYXQiOjE3MDgzNDAzOTV9.fKd0USkQkMcbE06lySlCeUvqwvIpbvZsx3gH485lQ-g; DOMAIN=thinking-tester-contact-list.herokuapp.com");

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

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
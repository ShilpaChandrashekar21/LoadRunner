Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	lr_think_time(15);

	web_url("4UaGrENHsxJlGDuGo1OIlL3Owp4.woff2", 
		"URL=https://fonts.gstatic.com/s/googlesans/v14/4UaGrENHsxJlGDuGo1OIlL3Owp4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.google.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("24px.svg", 
		"URL=https://fonts.gstatic.com/s/i/productlogos/googleg/v6/24px.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.google.com/", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_cookie("AEC=Ae3NU9MqpeeTdGEedJu0qT85qteocAFIbFf7Q2naee-TgTdVR7MdvPuWYZw; DOMAIN=id.google.com");

	web_add_cookie("NID=511=VuclcEX_S07JdZwfMgeph93SQIEXjPPKnx7cw0_IOVv9l9Ajazdr8dRpyt-nsSf8fIZeX3r1kWZIf0Apf71Y9oLZb1fV_4dciJRhvaG89kqhLzhwNMa0DcSjkIHgqZZf7T_o5uFs3jZXTqtoqJfI9AWiIKp7POHy_OTs0I0NQxY2--VE73StGaA; DOMAIN=id.google.com");

	web_add_cookie("1P_JAR=2024-02-07-10; DOMAIN=id.google.com");

	web_url("ANsg4T6iwuhv8e8mQgR2ySnzTGpUPHdGsPD5MpuMWDSjZOoaclCZr0qwhtM3WEh3_Z5_PITZiAFO4k7M71SiszTCwJL_frrZifXPUmv-D9SEWDFKBq9G", 
		"URL=https://id.google.com/verify/ANsg4T6iwuhv8e8mQgR2ySnzTGpUPHdGsPD5MpuMWDSjZOoaclCZr0qwhtM3WEh3_Z5_PITZiAFO4k7M71SiszTCwJL_frrZifXPUmv-D9SEWDFKBq9G", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://www.google.com/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("shopping", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcQ7xg6V0VpS7yqCscrggFJunl-7YW9VNR2lHHYY6WAwxUcaOYqiw8mTNeW67agVeVuPXcpqY5943ZmqGR5x1v3SqiNXBJlNwQDZImxTnQXsA53X2fJIZxU4", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("shopping_2", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcQEzQGG-8hg1RIe1HI8DoK2rt-MlFjd99kEhaKFmYEl61yi9qP568IFXXP5CNFAXITlbo1tAidq494e2UAwNpVeVnPakoXTG2XAE2RiMN-l", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t11.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("shopping_3", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcS3oWfbPM9toNWg9YmqiMgaCut2nq0kRkSEIX4RhIrZYSYuPlBumlM0VECdsEpcw_ug2mgsXAWuC--B_lLLJxoNj4_PcPljd3z5GhEml0n_a2xC-Wl4pHF2zA", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t12.inf", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("shopping_4", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcT5c7Xswi2aPi9-a36nGwNCuEAuOPriQD03kY0CpXNgAQzWTiIZVxqdMCSTm_cqFyHxGnGWwpidzfoEFe_SMcbBroXldfqnsVx7ueH9evnl4fC2MAZU2Sw", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("shopping_5", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcSlwA76_8oywJMzH7ceJblvZRqwgGw6nx-HUJRDexKcsEgSmw2GRe57S-yiCFSMTHyYOvr1KEiiV7Nre58A0lUZ2uK2XojaDiDpd_arFK0", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("shopping_6", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcRI4CGcgRacJ_hMc0LAlA146RPwmbFh_P4-dJaImmuRTEOEXIUcKJ8ol5Tpr_cqRBzRbnc8z-o2KqyywUhVOAcWlQcs0L9SRFs0-FZzGp600r8EliIIx7ql0A", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("shopping_7", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcSvhHfrPjreMiW34JGLV6FDBlye8wl06_QD6b042xdyf8UwYiUSgGU4zDv_nJPWg9kB3kJAed7tCYr-7ncvz2pByaU_knstrGUdgxFPOTosLz3grL0I3Mph", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("shopping_8", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcTbhWNoyg0HbpajqyLlmysji3hZMSL9MGKugznfrf_2eCkzdEZGklM5a7vgRq7MdDr-xzHo8Z_oNztFuY6tVDhv9OwSOg7aVO-gAcj6dUI", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("shopping_9", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcRy-dlw_ISW_ees-zMDtVJ0NnyYrJIo_lAD21fLPdER6oFcsHWthzv2c5zmSH1d1wk1bLiur9a3WnBxKxtShvRQmAp8nwIuZEbSEsamVsTLcbrIGWrxppkl", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("shopping_10", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcQ3d_DhCd194vFlv4NJu9QsE6gJVhBeEX5nqMplNlYbBn--WE4lZIXASH-hwOkn2DnPz0ZhETWCG3XyTcRER1-1-IyDrrst4woyHuKLvfj1HsFxAp9X6bt9", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("shopping_11", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcQBIH_XBNegOC2vTyElsEa3pi0KZT_revIgMqvWm7VK_q988saoFaeDWb-DP14wzkE40abhT6R-5V2dLCNM_-D4fzIeyecpvDuy4V-R0PiQCdRH2IkR4BBB", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("shopping_12", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcRaw_l3di1F783ea44Lq-uYNASYo5w5rHAzT1LQNtFTwNzTnweOa9LLqSw0rj76KRKplzUt9hNLclXNDOd1cpcLHLZqTlKW4z4LVQDlOX8", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("shopping_13", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcQZV9sULUPfojWfcOlcJxZA6bqOkozqP6u5EOwf0uf4ABdbXZLcjSX9a84riDEYOz8kPuYH8RkjmTOv5b5Dk8BIRH9TzHEzGSzLj7w4YSo", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("shopping_14", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcTwl4W2FR8mlvpHqzoxJ_Lpr4v1-AlDt8gbDGgfFx5CZMzv9okAzTtM1G86sYBlLirwzIm1ORGYSjNQWHOvRO6lik0hw9_FeQpUuMbi--BbbFFDKf3SadKK", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("shopping_15", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcRPQRgQEv2GzTAlIutWDl_-fEkHIhgx2QcWJu6MR4DuTn-e3jDIQ30qSvSx_UdjM4ZHOsqyfp4RmuFhGCwced37GyJ6qoucTUNVeutl-X4KGP3tDjWwdGVo", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("shopping_16", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcR09377KFpalTyccYn_6RA4hpgjlZRjJBjN5B5iuswNt3nk98QsSf5xzy9JNMbx21dcncHhJV0Wfc7p-7RhwriFQxDC5JzobVT18y8n4KBKgXPxLzzaEKRbeHc", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("shopping_17", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcSRk5IhS0RMTPEDF6H_62UMJq95fWZXzpN7vnBslZbN9Lg0zATbpQFU_I1lPpySgPnlC0FxnK5VrU-lQoecoXuuDhXTVODHSa_kdnsfQBAImnlcN__rsJwEjA", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t26.inf", 
		LAST);

	return 0;
}
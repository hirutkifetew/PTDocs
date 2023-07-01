Signout()
{

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(81);

	web_url("welcome.pl_2", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_15", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEP2EBqscPIuIXXSbxB+e47PgAEMACNIeiBtq9zdAyaAcvg7UbkMt6gm3lebzVJ0fekl7uaq4GG4u6FwO528SVvY7oAMLh2K7z+7i4cimIIMY1U01wiwxDXsXUHEOI1NdSNU4Mx60/qeIrBfcPKzv7O2HPaOpNBLgK/iztJThhB41hJT5p6ySyq9ZusarZQq/"
		"n2p8t3UoUdYvSc0BI+Mg72UlqrPfE9NF73/fWknBSS4tYkz5ZP+hTiKle0qBW1rdYEOinMYoTpLFQxR6KxjmPtp1WxFfad5n6KiwQkssPUurpuDMZcTk+dY3kEOT6nNGXFDvHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177836117910321\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"85c80348-7218-4ea6-9b76-5affb2a9eb08\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_16", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEP2EBqscPIuIXXSbxB+e47PgAEMACNIeiBtq9zdAyaAcvg7UbkMt6gm3lebzVJ0fekl7uaq4GG4u6FwO528SVvY7oAMLh2K7z+7i4cimIIMY1U01wiwxDXsXUHEOI1NdSNU4Mx60/qeIrBfcPKzv7O2HPaOpNBLgK/iztJThhB41hJT5p6ySyq9ZusarZQq/"
		"n2p8t3UoUdYvSc0BI+Mg72UlqrPfE9NF73/fWknBSS4tYkz5ZP+hTiKle0qBW1rdYEOinMYoTpLFQxR6KxjmPtp1WxFfad5n6KiwQkssPUurpuDMZcTk+dY3kEOT6nNGXFDvHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177836117910321\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?in=home\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"7fff834e-8372-4303-87a1-56cd2addb9b3\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_17", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEP2EBqscPIuIXXSbxB+e47PgAEMACNIeiBtq9zdAyaAcvg7UbkMt6gm3lebzVJ0fekl7uaq4GG4u6FwO528SVvY7oAMLh2K7z+7i4cimIIMY1U01wiwxDXsXUHEOI1NdSNU4Mx60/qeIrBfcPKzv7O2HPaOpNBLgK/iztJThhB41hJT5p6ySyq9ZusarZQq/"
		"n2p8t3UoUdYvSc0BI+Mg72UlqrPfE9NF73/fWknBSS4tYkz5ZP+hTiKle0qBW1rdYEOinMYoTpLFQxR6KxjmPtp1WxFfad5n6KiwQkssPUurpuDMZcTk+dY3kEOT6nNGXFDvHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177836117910321\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/WebTours/home.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"e0ef6c64-d16f-4dae-94a3-ac08506e7a08\",\"synchronous\":false}", 
		LAST);

	return 0;
}

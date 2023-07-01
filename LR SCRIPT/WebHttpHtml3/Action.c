Action()
{

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

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

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("MC1=GUID=ea96e8600fb244c0b76ff4f2faa0694d&HASH=ea96&LV=202210&V=4&LU=1666172924349; DOMAIN=edge.microsoft.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.48");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"enable_features\":\"ddfd6cd3,e16e3ae1,e3ce9af1\"}", 
		LAST);

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEP2EBqscPIuIXXSbxB+e47PgAEMACNIeiBtq9zdAyaAcvg7UbkMt6gm3lebzVJ0fekl7uaq4GG4u6FwO528SVvY7oAMLh2K7z+7i4cimIIMY1U01wiwxDXsXUHEOI1NdSNU4Mx60/qeIrBfcPKzv7O2HPaOpNBLgK/iztJThhB41hJT5p6ySyq9ZusarZQq/"
		"n2p8t3UoUdYvSc0BI+Mg72UlqrPfE9NF73/fWknBSS4tYkz5ZP+hTiKle0qBW1rdYEOinMYoTpLFQxR6KxjmPtp1WxFfad5n6KiwQkssPUurpuDMZcTk+dY3kEOT6nNGXFDvHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177800599042627\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"2a79a7b2-2904-458d-951c-99d1083a45ea\",\"synchronous\":false}", 
		LAST);

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"anid\":\"61DA64BFEC386413636BD286FFFFFFFF\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(5);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEP2EBqscPIuIXXSbxB+e47PgAEMACNIeiBtq9zdAyaAcvg7UbkMt6gm3lebzVJ0fekl7uaq4GG4u6FwO528SVvY7oAMLh2K7z+7i4cimIIMY1U01wiwxDXsXUHEOI1NdSNU4Mx60/qeIrBfcPKzv7O2HPaOpNBLgK/iztJThhB41hJT5p6ySyq9ZusarZQq/"
		"n2p8t3UoUdYvSc0BI+Mg72UlqrPfE9NF73/fWknBSS4tYkz5ZP+hTiKle0qBW1rdYEOinMYoTpLFQxR6KxjmPtp1WxFfad5n6KiwQkssPUurpuDMZcTk+dY3kEOT6nNGXFDvHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177800599042627\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/WebTours/header.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"b4ad8f29-5a22-4bea-add2-5f96ba41ab97\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEP2EBqscPIuIXXSbxB+e47PgAEMACNIeiBtq9zdAyaAcvg7UbkMt6gm3lebzVJ0fekl7uaq4GG4u6FwO528SVvY7oAMLh2K7z+7i4cimIIMY1U01wiwxDXsXUHEOI1NdSNU4Mx60/qeIrBfcPKzv7O2HPaOpNBLgK/iztJThhB41hJT5p6ySyq9ZusarZQq/"
		"n2p8t3UoUdYvSc0BI+Mg72UlqrPfE9NF73/fWknBSS4tYkz5ZP+hTiKle0qBW1rdYEOinMYoTpLFQxR6KxjmPtp1WxFfad5n6KiwQkssPUurpuDMZcTk+dY3kEOT6nNGXFDvHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177800599042627\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"916ff50d-2d31-4e21-9a98-fc2a0cfa97dc\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEP2EBqscPIuIXXSbxB+e47PgAEMACNIeiBtq9zdAyaAcvg7UbkMt6gm3lebzVJ0fekl7uaq4GG4u6FwO528SVvY7oAMLh2K7z+7i4cimIIMY1U01wiwxDXsXUHEOI1NdSNU4Mx60/qeIrBfcPKzv7O2HPaOpNBLgK/iztJThhB41hJT5p6ySyq9ZusarZQq/"
		"n2p8t3UoUdYvSc0BI+Mg72UlqrPfE9NF73/fWknBSS4tYkz5ZP+hTiKle0qBW1rdYEOinMYoTpLFQxR6KxjmPtp1WxFfad5n6KiwQkssPUurpuDMZcTk+dY3kEOT6nNGXFDvHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177800599042627\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?in=home\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"c6d40f7e-8315-4e4a-affb-85395bb0e52d\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("3_5", 
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
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638177800599042627\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"http://127.0.0.1:1080/WebTours/home.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"41d2d4dd-3c8e-4176-8432-5692f3fdeba6\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.48");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,kpfehajjjbbcifeehjgfgnabifknmdad,ohckeflnhegojcjlcpbfpciadgikcohk,fppmbhmldokgmleojlplaaodlkibgikh,ojblfafjmiikbkepnnolpgbbhejhlcim,ahmaebgpfccdhgidjaidaoojjcijckba,ndikpojcjlepofdkaaldkinkjbeeebkl,jbfaflocpnkhbgcijpkiafdpbjkedane,lkkdlcloifjinapabfonaibjijloebfb,mkcgfaeepibomfapiapjaceihcojnphg,mpicjakjneaggahlnmbojhjpnileolnb,oankkpibpaokgecfckkdkgaoafllipag,omnckhpgfmaoelhddliebabpgblmmnjp,lfmeghnikdkbonehgjihjebgioakijgn,cllppcmmlnkggcmljjfigkcigaajjmid,"
		"hjaimielcgmceiphgjjfddlgjklfpdei,llmidpclgepbgbgoecnhcmgfhmfplfao,plbmmhnabegcabfbcejohgjpkamkddhn,alpjnmnfbgfkmmpcfpejmmoebdndedno");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"3293");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-112.0.1722.48");

	lr_think_time(46);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:eZYTloIkNf2l_y9WeLrNqd2W7hvyafzhDWKsYGxmzAw&cup2hreq=601a3d1d1868989b76ce525c9009aa8a975203749cde4e9a1070349f74053945", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.81\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.81\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.81,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.47,\"AppVersion\":\""
		"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.95\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.95\",\"AppMajorVersion\":\"112\","
		"\"AppRollout\":0.95,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.11\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.11,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\""
		"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.85,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":"
		"\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.AE475A582EAEBD30A38C2EA870A9CF5EDDF5F653095B95B6612643795ED7A7F6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.68,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false"
		",\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"10.34.0.45\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.69,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55"
		"\"},\"updatecheck\":{},\"version\":\"1.0.0.23\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8DB8EE0201AAEE92134313B2CDF5C6EF621CC95B61F0817A056E5020111EF340\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.48,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha"
		"\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.0.2.18\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2F0CDE41A4FF73810239C650DC9B1769D6DE63D3562518F686AEAEBD56D591E0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.77,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\""
		"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.3.163.19\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.B310248F30249CE0887C7346EF05478A5E744C7482BC8B6CDF7555FD7260CCC6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\""
		"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"3.0.0.9\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F3CA7027E9AF306E210170760F05487A86C0C4F7C3B64C1E22B492A8EB31125\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"112\",\""
		"AppRollout\":0.24,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"6498.2023.3.1\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.43\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.43,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.94,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.C1A9FF2995F6CC0ABFAEA047AC714541E10DCF1F7F38FD47C5CCBE6309458414\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.59,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"112.15210.15201.8\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate"
		"\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0A896B25442E25516B574F8632D6D38AFF3938B0E5F6502A6E5B16C2ADFFF2BD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.72,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.3\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.84\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.34D2835BE4AD0A4F442BDD802DF1A4ACDB6213411384A87F871DDAFFE7C5EC4E\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.84\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.84,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2.0.4816.0\"},{\"appid\":\""
		"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4607D9A0C59F0043F9CB4A9EA8D1FD1FF2463F8F3E0AE6EFCB5C22AFE264A3AB\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\""
		"version\":\"2944\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.76\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.76,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\""
		"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":14,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.1555\"},\"prodversion\":\"112.0.1722.48\",\"protocol\":\"3.1\",\"requestid\":\"{d19de55b-6077-4d3c-b1dd-8b7b5b53d14a}\",\""
		"sessionid\":\"{794d4c19-aa9f-4722-822a-6f44a198f35b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.173.55\"},\"updaterversion\":\"112.0.1722.48\"}}", 
		LAST);

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

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

	lr_think_time(22);

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=136264.58436614HAAQVAQpffiDDDDDtcAftpzfHDf", ENDITEM, 
		"Name=username", "Value=jojo1", ENDITEM, 
		"Name=password", "Value=j2ee1", ENDITEM, 
		"Name=login.x", "Value=17", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	return 0;
}
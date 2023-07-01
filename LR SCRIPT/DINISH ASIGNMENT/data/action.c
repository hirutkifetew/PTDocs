Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"07gfyeBrJGwokh9BLYIJ0k");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=112.0.1722.48&lang=en-US&acceptformat=crx3&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.1.2%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"anid\":\"61DA64BFEC386413636BD286FFFFFFFF\"}", 
		LAST);

	web_add_cookie("MC1=GUID=ea96e8600fb244c0b76ff4f2faa0694d&HASH=ea96&LV=202210&V=4&LU=1666172924349; DOMAIN=edge.microsoft.com");

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
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"4a945acb,b9528075,82a866e9,6c715cfb,e0075c8a,3f6a1a2,322c815,968aa160,dee07e4,95a29f90,603d2fd8,93277d03,b9047d,de7bc63a,eb936fc6\",\"enable_features\":\"42f76cc4,ac1a31c6,b44b62e1,ddfd6cd3,eb6bda0a,b9d9753f,21004d55,c073554e,8c56fcfe,3b92f82f,3915a3ff,209911b6,49c628a9,f040bc88,3242f4fd,8918c4bc,ec70e985,9aec59c7,bbccaf61,c428869,657a13f8,bfd715c,e54d9e38,49f8975c,d0dc3263,8ea1baf,c6e89c63,45ed8495,fe8f254,da54791,ec7d8af9,87e7bcb0,3d47a1e6,aa9752f4,cd614abf,6d667393,"
		"e314f18e,3d52c6a2,a47c71da,6d39f62e,8656b6b2,14666474,6918470a,963f18b5,dc7d21dd,473bc83f,a4c17ac,106e2e85,956f91b8,51d50e41,7930653d,8fb8c332,33cc9bc8,174bb60,bd8fc42a,61431c7,6e607227,15f0c840,13fe26d0,694dde77,17178ab5,41c26479,9cffea93,75b1b341,60806046,7b1870e,8832ce78,fc1ff333,732c732a,1207cc22,329d828e,3891021f,6286c2b2,12e2660f,3b76ae01,19857ae4,faf0abfc,9f191260,2373949a,5cfd95dc,8a2adb0,e7c29515,56181917,6a07a97c,a49949fb,7de23af1,3a94d1fb,9c4f24cc,69a90326,6b9993b7,1cf10166,16649177,"
		"44f7971e,fbaa04bd,3e7788d0,58568926,4ed13a13,5727cfbf,f2c76ca4,8ebd6d8b,b547d3e4,382a708,6046b072,b217214c,1df7f9ab,5f000ce,926a891a,2442314,4fbc7741,bf8cde40,8b578039,9155bb95,d486bb42,b9ce036a,a6fd2304,39910341,f658bba8,58e0343e,6e71f66e,20072c82,868da52a,6099ff4d,caa6d356,10bc8c5b,57cfd418,3d95853,4d578363,8a1d22f,f26b1d9f,3d0bbd6,e16e3ae1,60ff3cac,71272018,ace2c02,badd9207,20984807,686d65ac,5c793004,5fe48b97,15f16891,2d289c6b,dbac1097,313163e0,ff72c049,f8746649,8543db20,ec121b81,cfea09b1,"
		"aa84b360,7aef631d,62fd93b7,6e775e3,ac6af412,d29e7da8,792fbf1a,43d8ef41,a2f3a356,8c22a23,63f6405a,39aa9578,fba29c0,c2c703ac,5c82f28f,8aacb961,5bb92a39,4b4c3b98,5b66afe0,6c0bf1c,72f1fc48,ce975dfa,be978d29,59e7987a,beeacc0d,d8dbe509,4f50853c,53e63c76,ebb2abb8,7c336ddf,ddcca13f,9b833520,26a23df5,6a0f795a,c38b4943,b83652bc,f7d05a59,597842a0,c310ac47,609df054,1e558647,8a094058,2c3ab10f,1347160e,ce3a2f9b,55476aab,e4c29c54,50cbb1f,cd20ec4f,33a7e900,3693d98b,d7595bfb,b31e492c,3e1e1ad1,3061cce0,7c940d4b,"
		"39e38478,2e4fce77,710e2548,a85c2524,a1f2654e,15a8d884,c0fc353a,d5427798,60428d40,3e057f56,d8990b6c,5222cfba,ab6121a5,73176314,7499d66a,e3ce9af1,9b42372,f34a4bc1,f276d9d,55248c83,9ba6613a,5182d9e4,3ffeaa11,a606eeb4,88c758b7,66171647,37ad8f9b,c256496d,bc5dfc53,e3cf7468,5e47e9af,9afb0488,bda73cc8,7d2dcff4\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

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

	web_url("catalog", 
		"URL=https://jpetstore.aspectran.com/catalog/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("DomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/DomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Origin", 
		"https://api.msn.com");

	web_custom_request("report", 
		"URL=https://deff.nelreports.net/api/report?cat=msn", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_custom_request("report_2", 
		"URL=https://deff.nelreports.net/api/report?cat=msn", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":13,\"body\":{\"elapsed_time\":6491,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"https://ntp.msn.com/\",\"sampling_fraction\":0.5,\"server_ip\":\"204.79.197.203\",\"status_code\":504,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://api.msn.com/auth/cookie/appanon?scn=app_anon&ocid=authconstants-peregrine&apikey=1hYoJsIRvPEnSkk0hlnJF2092mHqiz7xFenIFKa9uc&activityId=B62E376607904B47A187B5FABBBFD3F0\",\"user_agent\":\"Mozilla"
		"/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\"}]", 
		LAST);

	lr_start_transaction("SIGN IN");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://jpetstore.aspectran.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("collect", 
		"URL=https://region1.google-analytics.com/g/collect?v=2&tid=G-PBGW9BF7P6&gtm=45je34j0&_p=1961347037&cid=1539885789.1682103021&ul=en-us&sr=1536x864&uaa=x86&uab=64&uafvl=Chromium%3B112.0.5615.121%7CMicrosoft%2520Edge%3B112.0.1722.48%7CNot%253AA-Brand%3B99.0.0.0&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&_s=1&sid=1682103021&sct=1&seg=0&dl=https%3A%2F%2Fjpetstore.aspectran.com%2Fcatalog%2F&dt=JPetStore%20Demo&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://jpetstore.aspectran.com/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFsSvJ+gELGX/ghcnqPypbLwABc3klF6qjp+xpCUf2/UJ/gcVo4wkpI/lLZDGGXc2VD1VgoSxH6SsLv3mXTiPYCYjegqD87VlbKvzpM6fa8k7djOb7JKhU5YlDINJLwE1x9XILVNkNvy0VVDJ7gVi/MY6/UwYbUBMTB+xV+vMJF2AlMlU9R4NvMFvjRSg3ICd"
		"/S9I3TWY9leDJdGxw7Ss9tGncjFUFft8K/qP7pKvgl0BocL5UiWyC+pyu1vCOiH3zHe+07MhPWA0n7Se472fV3FA1H9ov6pzX7+9+/CHf8sBbxkcLNTZC50zDl+5WPXhC2xk71KDSiF/CEH/wotf4aWnR4B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\""
		":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638176522631913260\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"188.114.96.0\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/\",\"ip\":\"188.114.96.0\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"7876e99f-751b-489f-ad64-6a8e2aa580a2\",\"synchronous\":false}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://jpetstore.aspectran.com");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("collect_2", 
		"URL=https://region1.google-analytics.com/g/collect?v=2&tid=G-PBGW9BF7P6&gtm=45je34j0&_p=1961347037&cid=1539885789.1682103021&ul=en-us&sr=1536x864&uaa=x86&uab=64&uafvl=Chromium%3B112.0.5615.121%7CMicrosoft%2520Edge%3B112.0.1722.48%7CNot%253AA-Brand%3B99.0.0.0&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&_s=2&sid=1682103021&sct=1&seg=0&dl=https%3A%2F%2Fjpetstore.aspectran.com%2Fcatalog%2F&dt=JPetStore%20Demo&en=user_engagement&_et=2041", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://jpetstore.aspectran.com/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_end_transaction("SIGN IN",LR_AUTO);

	lr_start_transaction("LOGIN");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(31);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFsSvJ+gELGX/ghcnqPypbLwABc3klF6qjp+xpCUf2/UJ/gcVo4wkpI/lLZDGGXc2VD1VgoSxH6SsLv3mXTiPYCYjegqD87VlbKvzpM6fa8k7djOb7JKhU5YlDINJLwE1x9XILVNkNvy0VVDJ7gVi/MY6/UwYbUBMTB+xV+vMJF2AlMlU9R4NvMFvjRSg3ICd"
		"/S9I3TWY9leDJdGxw7Ss9tGncjFUFft8K/qP7pKvgl0BocL5UiWyC+pyu1vCOiH3zHe+07MhPWA0n7Se472fV3FA1H9ov6pzX7+9+/CHf8sBbxkcLNTZC50zDl+5WPXhC2xk71KDSiF/CEH/wotf4aWnR4B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\""
		":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638176971838020106\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/\",\"ip\":\"188.114.96.0\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"188.114.96.0\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"2c209f25-cf29-4398-8be7-3012c7d4b61c\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFsSvJ+gELGX/ghcnqPypbLwABc3klF6qjp+xpCUf2/UJ/gcVo4wkpI/lLZDGGXc2VD1VgoSxH6SsLv3mXTiPYCYjegqD87VlbKvzpM6fa8k7djOb7JKhU5YlDINJLwE1x9XILVNkNvy0VVDJ7gVi/MY6/UwYbUBMTB+xV+vMJF2AlMlU9R4NvMFvjRSg3ICd"
		"/S9I3TWY9leDJdGxw7Ss9tGncjFUFft8K/qP7pKvgl0BocL5UiWyC+pyu1vCOiH3zHe+07MhPWA0n7Se472fV3FA1H9ov6pzX7+9+/CHf8sBbxkcLNTZC50zDl+5WPXhC2xk71KDSiF/CEH/wotf4aWnR4B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\""
		":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638176971838020106\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://jpetstore.aspectran.com/account/signon\",\"ip\":\"188.114.96.0\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"188.114.96.0\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"fdfdcaa3-c890-4b08-9db6-ca8e7f0ee652\",\"synchronous\":false}", 
		LAST);

	lr_end_transaction("LOGIN",LR_AUTO);

	lr_think_time(27);

	lr_start_transaction("FISH");

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFsSvJ+gELGX/ghcnqPypbLwABc3klF6qjp+xpCUf2/UJ/gcVo4wkpI/lLZDGGXc2VD1VgoSxH6SsLv3mXTiPYCYjegqD87VlbKvzpM6fa8k7djOb7JKhU5YlDINJLwE1x9XILVNkNvy0VVDJ7gVi/MY6/UwYbUBMTB+xV+vMJF2AlMlU9R4NvMFvjRSg3ICd"
		"/S9I3TWY9leDJdGxw7Ss9tGncjFUFft8K/qP7pKvgl0BocL5UiWyC+pyu1vCOiH3zHe+07MhPWA0n7Se472fV3FA1H9ov6pzX7+9+/CHf8sBbxkcLNTZC50zDl+5WPXhC2xk71KDSiF/CEH/wotf4aWnR4B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\""
		":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638176971838020106\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/categories/FISH\",\"ip\":\"188.114.96.0\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/\",\"ip\":\"188.114.96.0\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"22924bb8-4296-4125-865c-7f41dbf41fd5\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	lr_end_transaction("FISH",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("PRODUCT ID");

	web_custom_request("3_5", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFsSvJ+gELGX/ghcnqPypbLwABc3klF6qjp+xpCUf2/UJ/gcVo4wkpI/lLZDGGXc2VD1VgoSxH6SsLv3mXTiPYCYjegqD87VlbKvzpM6fa8k7djOb7JKhU5YlDINJLwE1x9XILVNkNvy0VVDJ7gVi/MY6/UwYbUBMTB+xV+vMJF2AlMlU9R4NvMFvjRSg3ICd"
		"/S9I3TWY9leDJdGxw7Ss9tGncjFUFft8K/qP7pKvgl0BocL5UiWyC+pyu1vCOiH3zHe+07MhPWA0n7Se472fV3FA1H9ov6pzX7+9+/CHf8sBbxkcLNTZC50zDl+5WPXhC2xk71KDSiF/CEH/wotf4aWnR4B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\""
		":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638176971838020106\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"188.114.96.0\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/categories/FISH\",\"ip\":\"188.114.96.0\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"ff19754b-046a-4c99-8680-9d720f15e35d\",\"synchronous\":false}", 
		LAST);

	lr_end_transaction("PRODUCT ID",LR_AUTO);

	lr_think_time(37);

	lr_start_transaction("ADD TO CART");

	web_custom_request("3_6", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFsSvJ+gELGX/ghcnqPypbLwABc3klF6qjp+xpCUf2/UJ/gcVo4wkpI/lLZDGGXc2VD1VgoSxH6SsLv3mXTiPYCYjegqD87VlbKvzpM6fa8k7djOb7JKhU5YlDINJLwE1x9XILVNkNvy0VVDJ7gVi/MY6/UwYbUBMTB+xV+vMJF2AlMlU9R4NvMFvjRSg3ICd"
		"/S9I3TWY9leDJdGxw7Ss9tGncjFUFft8K/qP7pKvgl0BocL5UiWyC+pyu1vCOiH3zHe+07MhPWA0n7Se472fV3FA1H9ov6pzX7+9+/CHf8sBbxkcLNTZC50zDl+5WPXhC2xk71KDSiF/CEH/wotf4aWnR4B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\""
		":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638176971838020106\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/items/EST-1\",\"ip\":\"188.114.96.0\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/catalog/products/FI-SW-01\",\"ip\":\"188.114.96.0\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"caf3cf6e-8390-4ca0-92da-bd9f2103017b\",\"synchronous\":false}", 
		LAST);

	lr_end_transaction("ADD TO CART",LR_AUTO);

	lr_start_transaction("ADD TO CART");

	lr_end_transaction("ADD TO CART",LR_AUTO);

	lr_start_transaction("ADD  TO CART");

	return 0;
}
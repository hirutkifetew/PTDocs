Action()
{

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

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

	web_url("WebTours_2", 
		"URL=http://127.0.0.1:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("112.0.1722.58", 
		"URL=https://config.edge.skype.com/config/v1/Edge/112.0.1722.58?clientId=6921235004802684617&agents=EdgeFirstRun%2CEdgeFirstRunConfig&osname=win&client=edge&channel=stable&scpfull=0&scpguard=0&scpfre=0&scpver=0&osarch=x86_64&osver=10.0.22621&wu=1&devicefamily=desktop&uma=0&sessionid=485&mngd=0&installdate=1661998981&edu=0&bphint=2&soobedate=1661998892", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("3_18", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"17647795-2f06-4c02-9d54-91a31d149527\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.58");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_custom_request("msa_2", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		LAST);

	web_custom_request("3_19", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/header.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"7ec27585-9f00-4823-98be-a67e651c5b52\",\"synchronous\":false}", 
		LAST);

	web_custom_request("rewardsUserInfo_2", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"anid\":\"61DA64BFEC386413636BD286FFFFFFFF\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("3_20", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"165fce65-fe63-4b1e-9db9-89a8b5955379\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("getsupporteddomains", 
		"URL=https://www.bing.com/api/shopping/v1/getsupporteddomains?appid=67220BD2169C2EA709984467C21494086DF8CA85", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"112.0.1722.58\",\"enabledfeatures\":[{\"name\":\"msWebAssistQuery\",\"params\":[]},{\"name\":\"msAutofillAutoPopup\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingGuestDomainCoupons\",\"params\":[]},{\"name\":\"msEdgeShoppingEncryptionKey\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowControlForFeature\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingBackgroundAutoApply\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\""
		"msEdgePwiloAsyncFallback\",\"params\":[]},{\"name\":\"msEdgeShoppingServerNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[]},{\"name\":\"msShoppingEdgeTemplateAutomation\",\"params\":[]},{\"name\":\"msEdgeShoppingWebAssistForScript\",\"params\":[]},{\"name\":\"msShoppingCheckoutMultiMessage\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotificationsProductTracking\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingRebatesAutoShowExistingUser\",\"params\":[]}],\"enabledservicefeatures\":{},\"enabledserviceflights\":\"\",\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.22621\"}}", 
		LAST);

	web_custom_request("3_21", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?in=home\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"816d606a-24bb-42d9-bc5b-56312c82d50b\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_22", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/home.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"fe0147e8-5e03-41f6-b3e6-7bb34a723a78\",\"synchronous\":false}", 
		LAST);

	web_custom_request("search_2", 
		"URL=https://www.bing.com/api/shopping/v1/item/search?appid=67220BD2169C2EA709984467C21494086DF8CA85&features=persnlcashback&sf=cashback1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"AgeGroup\":0,\"IsAADSignedIn\":false,\"IsBingSignedInUser\":false,\"IsMSASignedIn\":false,\"IsOffTheRecord\":true,\"IsPersonalizationDataConsentChanged\":true,\"IsPersonalizationDataConsentEnabled\":true,\"IsSSOEnabled\":true,\"LdClickData\":\"\",\"MsClickId\":\"\",\"ReturnedToCashbackActivatedDomain\":false,\"UClickData\":\"\",\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"112.0.1722.58\",\"enabledfeatures\":[{\"name\":\"msWebAssistQuery\",\"params\":[]},{\"name\":\""
		"msAutofillAutoPopup\",\"params\":[]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingGuestDomainCoupons\",\"params\":[]},{\"name\":\"msEdgeShoppingEncryptionKey\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowControlForFeature\""
		",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingBackgroundAutoApply\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\"msEdgePwiloAsyncFallback\",\"params\":[]},{\"name\":\"msEdgeShoppingServerNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[]},{\"name\""
		":\"msShoppingEdgeTemplateAutomation\",\"params\":[]},{\"name\":\"msEdgeShoppingWebAssistForScript\",\"params\":[]},{\"name\":\"msShoppingCheckoutMultiMessage\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotificationsProductTracking\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesAutoShowExistingUser\",\"params\":[]}],\"enabledservicefeatures\":{},\"enabledserviceflights\":\"\",\"extractedpagelocale\":\"\",\"ismobile\":false,\""
		"osname\":\"Windows NT\",\"osversion\":\"10.0.22621\"},\"item\":{\"seller\":{\"IsEdgeRebatesFlow\":false,\"domain\":\"127.0.0.1\",\"path\":\"/WebTours/\"}},\"sourceTypes\":[\"deals\"]}", 
		LAST);

	lr_start_transaction("sign in");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.58");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,oankkpibpaokgecfckkdkgaoafllipag,kpfehajjjbbcifeehjgfgnabifknmdad,ohckeflnhegojcjlcpbfpciadgikcohk,ojblfafjmiikbkepnnolpgbbhejhlcim,ahmaebgpfccdhgidjaidaoojjcijckba,jbfaflocpnkhbgcijpkiafdpbjkedane,mpicjakjneaggahlnmbojhjpnileolnb,lkkdlcloifjinapabfonaibjijloebfb,mkcgfaeepibomfapiapjaceihcojnphg,fppmbhmldokgmleojlplaaodlkibgikh,hjaimielcgmceiphgjjfddlgjklfpdei,cllppcmmlnkggcmljjfigkcigaajjmid,plbmmhnabegcabfbcejohgjpkamkddhn,lfmeghnikdkbonehgjihjebgioakijgn,"
		"llmidpclgepbgbgoecnhcmgfhmfplfao,omnckhpgfmaoelhddliebabpgblmmnjp,ndikpojcjlepofdkaaldkinkjbeeebkl,alpjnmnfbgfkmmpcfpejmmoebdndedno,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"4552");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-112.0.1722.58");

	lr_think_time(16);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:x5hjcxPIhcT8LVo8mS7AbrRrmhMxEZ1_obR93OCS7mw&cup2hreq=d2508d8ea3e40d65281d42264797a94b487d5a75e87e636569ee7e484a28b075", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.81\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.81\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.81,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F3CA7027E9AF306E210170760F05487A86C0C4F7C3B64C1E22B492A8EB31125\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.24,\"AppVersion\":\""
		"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"6498.2023.3.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"112\""
		",\"AppRollout\":0.47,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.95\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.95\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.95,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\""
		"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.85,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":"
		"\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.69,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":"
		"\"1.0.0.23\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.B310248F30249CE0887C7346EF05478A5E744C7482BC8B6CDF7555FD7260CCC6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\""
		"},\"updatecheck\":{},\"version\":\"3.0.0.9\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8DB8EE0201AAEE92134313B2CDF5C6EF621CC95B61F0817A056E5020111EF340\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.48,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\","
		"\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.0.2.18\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2F0CDE41A4FF73810239C650DC9B1769D6DE63D3562518F686AEAEBD56D591E0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.77,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\""
		"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.3.163.19\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.11\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.11,\"AppVersion\":\""
		"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0A896B25442E25516B574F8632D6D38AFF3938B0E5F6502A6E5B16C2ADFFF2BD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\""
		"AppMajorVersion\":\"112\",\"AppRollout\":0.72,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.3\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.799ADA27074CE86B3B24F3DACB569FA9F4A0D52D28181C866E1022F36FEF0846\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.59,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"112.15229.15225.4\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.FB8C2C1BC2D2762C2911C12C538191F5277FC4A957B7C8E8E979D075578384BB\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2948\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.94,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.84\",\""
		"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.34D2835BE4AD0A4F442BDD802DF1A4ACDB6213411384A87F871DDAFFE7C5EC4E\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.84\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.84,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2.0.4816.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\""
		":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.43,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\""
		"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.FDBBAED3B7A4C6AD0DB7ACEA2484CDCC8A836A1892B32451A2DA25150FDDC667\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.68,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\""
		"version\":\"10.34.0.47\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.76\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.76,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\""
		"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.01ABB1A14967FB06B48808C1FF9C7EE1FBEA741E3688997639BE0A5D428DDE66\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.91,\"AppVersion\":\"112.0.1722.58\",\"IsInternalUser"
		"\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":14,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.1555\"},\"prodversion\":\"112.0.1722.58\",\"protocol\":\"3.1\",\""
		"requestid\":\"{cac7c624-e77d-46ff-9d5c-1ca85d3cd85b}\",\"sessionid\":\"{db1212cc-f374-4817-b920-8a8da2f90cb3}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.173.55\"},\"updaterversion\":\"112.0.1722.58\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

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

	web_submit_data("login.pl_2", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=136285.399108951HAVAViApcVzzzzzHtcAzVpAiVD", ENDITEM, 
		"Name=username", "Value=Jojo1", ENDITEM, 
		"Name=password", "Value=j2ee1", ENDITEM, 
		"Name=login.x", "Value=60", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_23", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/login.pl\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?in=home\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"d48f042e-674b-42a5-be18-f18c7a5bb14c\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_24", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/login.pl\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"016a3c75-e606-4401-9a09-0fcc6c1c86bc\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_25", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/login.pl?intro=true\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/login.pl\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"2a98b4f8-6137-4d1e-807b-511f80b1332a\",\"synchronous\":false}", 
		LAST);

	lr_end_transaction("sign in",LR_AUTO);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

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

	lr_think_time(9);

	web_url("welcome.pl_3", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("3_26", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=home\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"f979d4d2-5927-4f28-b5ac-e30b71519f72\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_27", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"3324acda-ded6-4382-8559-01c75b850d8c\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_28", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"0ad80d1c-863c-416e-a615-3bf7e51b2a06\",\"synchronous\":false}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
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

	web_url("welcome.pl_4", 
		"URL=http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_29", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"d23683aa-e299-4481-b580-55f40bfd2827\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_30", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?page=menu&in=flights\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"d9a56c88-9f70-4daa-bbcf-e93cfc36a2d4\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_31", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEFwZt68lzLEXFpDn0Nt3F5rwACaFbDYoS81mxSgRajorWD3VoQg7TwGoL/dVThPKPue2+VTjatE/s2cPoHcAFbAd3k2uScrPDYSqZjywGy9bwtS9UFgfakhqHPEVn6+KMjVWb0nxUg51aYqYNRKkSvQKTLVqu/"
		"88S5VRbgDa28BwjXkEwOiZjzF5QTxnaLj3n99DGZPJcmb8644DirpkLeX7iNZHK9KUGDLV/b4OZ9345LWBPwGnYh9yU4dyp73BqvmtbEYZ5+25Iyh+raS5Dl5vS/7KRKIPLsDgpFu0Vt6l1tYiFd3zv6M6yXK2Y8ZHPoLAtqw0piMzCLQpHg5cfqol7B8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build"
		") \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638180393706412075\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/reservations.pl?page=welcome\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?page=search\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"beb6fcdd-91d0-44ba-b562-3d224caedd46\",\"synchronous\":false}", 
		LAST);

	lr_start_transaction("navigate flight");

	lr_end_transaction("navigate flight",LR_AUTO);

	lr_start_transaction("find flight");

	return 0;
}
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

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
		"URL=http://127.0.0.1:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("112.0.1722.58", 
		"URL=https://config.edge.skype.com/config/v1/Edge/112.0.1722.58?clientId=6921235004802684617&agents=Edge%2CEdgeConfig%2CEdgeServices%2CEdgeFirstRun%2CEdgeFirstRunConfig%2CEdgeDomainActions&osname=win&client=edge&channel=stable&scpfull=0&scpguard=0&scpfre=0&scpver=0&osarch=x86_64&osver=10.0.22621&wu=1&devicefamily=desktop&uma=0&sessionid=473&mngd=0&installdate=1661998981&edu=0&bphint=2&soobedate=1661998892", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEERFN8wpRYsVOVRQ0ucMOKLgAHGorpZBdP6waDKGC5TGutmHMniLH91zycr46shLhcFXbhkD+Is3CEmZyX+XVIxbCIT3Py0c3auStKV5VQKqv8AWNvgtUhJyARoWipRRQPxlM5BEbokVzVS1KGwhs69UDuKPYIN1i/IFvZbIWR7ZxbE6LPIoQ8iRJ+pQY/"
		"KRCbUWFwgJCbejd2eGOwcmAHB7KRggWYPDslru8gjZSWmU2hUjZ7mMa49InMfmk/EUmwKf3muhRcaHa8R0XTOeK873aDiqW/qrDJXvj4+RYAF6SgVlduRi/xbl147/aFC7TPUUHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build) \"},\"client\":{\"version\":281483717574665,\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638179965212160123\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"e6df0c47-40db-487a-9fe2-a675b4b11747\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEERFN8wpRYsVOVRQ0ucMOKLgAHGorpZBdP6waDKGC5TGutmHMniLH91zycr46shLhcFXbhkD+Is3CEmZyX+XVIxbCIT3Py0c3auStKV5VQKqv8AWNvgtUhJyARoWipRRQPxlM5BEbokVzVS1KGwhs69UDuKPYIN1i/IFvZbIWR7ZxbE6LPIoQ8iRJ+pQY/"
		"KRCbUWFwgJCbejd2eGOwcmAHB7KRggWYPDslru8gjZSWmU2hUjZ7mMa49InMfmk/EUmwKf3muhRcaHa8R0XTOeK873aDiqW/qrDJXvj4+RYAF6SgVlduRi/xbl147/aFC7TPUUHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build) \"},\"client\":{\"version\":281483717574665,\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638179965212160123\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/header.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"9a287170-25f0-4150-a3a4-4cc84577423a\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEERFN8wpRYsVOVRQ0ucMOKLgAHGorpZBdP6waDKGC5TGutmHMniLH91zycr46shLhcFXbhkD+Is3CEmZyX+XVIxbCIT3Py0c3auStKV5VQKqv8AWNvgtUhJyARoWipRRQPxlM5BEbokVzVS1KGwhs69UDuKPYIN1i/IFvZbIWR7ZxbE6LPIoQ8iRJ+pQY/"
		"KRCbUWFwgJCbejd2eGOwcmAHB7KRggWYPDslru8gjZSWmU2hUjZ7mMa49InMfmk/EUmwKf3muhRcaHa8R0XTOeK873aDiqW/qrDJXvj4+RYAF6SgVlduRi/xbl147/aFC7TPUUHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build) \"},\"client\":{\"version\":281483717574665,\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638179965212160123\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"9225e950-7c56-4893-8793-3df2046e1569\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEERFN8wpRYsVOVRQ0ucMOKLgAHGorpZBdP6waDKGC5TGutmHMniLH91zycr46shLhcFXbhkD+Is3CEmZyX+XVIxbCIT3Py0c3auStKV5VQKqv8AWNvgtUhJyARoWipRRQPxlM5BEbokVzVS1KGwhs69UDuKPYIN1i/IFvZbIWR7ZxbE6LPIoQ8iRJ+pQY/"
		"KRCbUWFwgJCbejd2eGOwcmAHB7KRggWYPDslru8gjZSWmU2hUjZ7mMa49InMfmk/EUmwKf3muhRcaHa8R0XTOeK873aDiqW/qrDJXvj4+RYAF6SgVlduRi/xbl147/aFC7TPUUHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build) \"},\"client\":{\"version\":281483717574665,\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638179965212160123\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?in=home\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"3456638f-c21a-4b8b-93e3-84f46353cb32\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_5", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.58\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEERFN8wpRYsVOVRQ0ucMOKLgAHGorpZBdP6waDKGC5TGutmHMniLH91zycr46shLhcFXbhkD+Is3CEmZyX+XVIxbCIT3Py0c3auStKV5VQKqv8AWNvgtUhJyARoWipRRQPxlM5BEbokVzVS1KGwhs69UDuKPYIN1i/IFvZbIWR7ZxbE6LPIoQ8iRJ+pQY/"
		"KRCbUWFwgJCbejd2eGOwcmAHB7KRggWYPDslru8gjZSWmU2hUjZ7mMa49InMfmk/EUmwKf3muhRcaHa8R0XTOeK873aDiqW/qrDJXvj4+RYAF6SgVlduRi/xbl147/aFC7TPUUHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1555.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.58 (Official build) \"},\"client\":{\"version\":281483717574665,\""
		"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638179965212160123\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/home.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"ee44c082-dc5d-4808-83dd-3b6864fe037e\",\"synchronous\":false}", 
		LAST);

	web_url("DomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/DomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("search", 
		"URL=https://www.bing.com/api/shopping/v1/item/search?appid=67220BD2169C2EA709984467C21494086DF8CA85&features=persnlcashback&sf=cashback1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"AgeGroup\":0,\"IsAADSignedIn\":false,\"IsBingSignedInUser\":false,\"IsMSASignedIn\":false,\"IsOffTheRecord\":true,\"IsPersonalizationDataConsentChanged\":true,\"IsPersonalizationDataConsentEnabled\":true,\"IsSSOEnabled\":true,\"LdClickData\":\"\",\"MsClickId\":\"\",\"ReturnedToCashbackActivatedDomain\":false,\"UClickData\":\"\",\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"112.0.1722.58\",\"enabledfeatures\":[{\"name\":\"msShoppingExp1\",\"params\":[]},{\"name\":\""
		"msShoppingExp7\",\"params\":[{\"key\":\"msEdgeShoppingAutoShowScenariosFirstMask\",\"value\":\"1\"},{\"key\":\"msEdgeShoppingAutoShowScenariosSecondMask\",\"value\":\"83890176\"},{\"key\":\"variant\",\"value\":\"ControlUserPref\"}]},{\"name\":\"msShoppingExp10\",\"params\":[]},{\"name\":\"msShoppingExp31\",\"params\":[]},{\"name\":\"msWebAssistQuery\",\"params\":[]},{\"name\":\"msAutofillAutoPopup\",\"params\":[]},{\"name\":\"msShoppingAutoShowAfterRender\",\"params\":[{\"key\":\"duration\",\""
		"value\":\"3\"}]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingGuestDomainCoupons\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]},{\"name\":\"msEdgeShoppingEncryptionKey\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingAutoShowControlForFeature\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingBackgroundAutoApply\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\"msEdgePwiloAsyncFallback\",\"params\":[]},{\"name\":\"msEdgeShoppingClarityEnabled\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingServerNotifications\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]},{\"name\":\"msShoppingEdgeTemplateAutomation\",\"params\":[]},{\"name\":\"msEdgeShoppingWebAssistForScript\",\"params\":[]},{\"name\":\"msEdgeShoppingProductPageScript\",\"params\":[]},{\"name\":\"msEdgeShoppingBackgroundAutoApplyForPDPAndHomePage\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingEnableAccelerateStrategyForBgaaWebContents\",\"params\":[]},{\"name\":\"msShoppingCheckoutMultiMessage\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoOpenControllerScript\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoOpenControllerOnCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotificationsProductTracking\",\"params\":[]},{\"name\":\"msEdgeShoppingRebatesAutoShowExistingUser\",\"params\":[]}],\""
		"enabledservicefeatures\":{},\"enabledserviceflights\":\"\",\"extractedpagelocale\":\"\",\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.22621\"},\"item\":{\"seller\":{\"IsEdgeRebatesFlow\":false,\"domain\":\"127.0.0.1\",\"path\":\"/WebTours/\"}},\"sourceTypes\":[\"deals\"]}", 
		LAST);

	lr_start_transaction("LOGIN");

	web_add_header("appInfoClientName", 
		"Edge");

	web_add_header("token", 
		"");

	web_custom_request("telemetry", 
		"URL=https://www.bing.com/api/shopping/v1/telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"JsonData\":\"{\\\"domain\\\":\\\"127.0.0.1\\\",\\\"validationReason\\\":\\\"EndOfScript\\\",\\\"time\\\":66.5,\\\"initializeTime\\\":45.899999998509884,\\\"preValidationTime\\\":8.200000002980232,\\\"path\\\":\\\"/WebTours/\\\",\\\"pageStatus\\\":\\\"\\\"}\",\"EventType\":\"AutoOpenControllerPerf\",\"LogLevel\":\"Information\",\"Message\":\"\",\"ClientContext\":{\"AppInfoClientName\":\"Edge\",\"JSVersion\":\"1.409\",\"BuildVersion\":\"112.0.1722.58\",\"EnabledServiceFlights\":\"\"},\""
		"ImpressionId\":\"D6252356A03F41D38B7E81CE7F035600\"}", 
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

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=136282.439125152HAVAAcHpQzcftcAzApVzHHHf", ENDITEM, 
		"Name=username", "Value=jojo1", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=login.x", "Value=39", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	return 0;
}
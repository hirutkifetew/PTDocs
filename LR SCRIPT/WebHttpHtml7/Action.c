Action()
{
"userSession" value="
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("MSA_DeviceTicket", 
		"t=EwC4AlN5BAAUx7kvJOvlZVsOh3du+AzMGpNViggAAdG5dxOg01V8eMQcscowaT54wQ8TKrHa6T1sCj0Koo++amOULgmIgketJY0wyOKfWjZyMr4A6n11h9D6DERNm/TqY7fhZlGv4a+7GY+hA6kVxTkEmsTRZ1420YOJLFYzDdHRqktVq905+MC8QsPDQSVwJ9Dh8CkMxkTK0fQkSqVqp6LZwvyBeWX7pw6bgvEu1r1Vyg+Yn0S2gkrlHr1zFKEEXmNGIAgjFEuscDfu7I6Uf9YSsJ4xjjr+5PQYYVOlyZSM0a6PLl440ji8/Iol8DwuGcAxNivl/sfpBa5YXHoKsRSxij7pwe8dJtIt+IMEQyn4KoSz5vpHVQz2HxvcUrEDZgAACM9fopn9tpqbiAGOKzwR/QYsOsMQURyyrlP/uE5g3cbZI3wFqN7qnaiQNKEK+6QHLdcbH5Pp5HD2EdVBIjf1KFDWkR/z4b4ZAxZxtYTS/"
		"jot6waXwEW95R+uWOM5vGMbraX30q3jdCCQhqnrVXet3fRJ9BXrWRpIVQty1o4knvsVJVaQdeh12ekiJW2ReZCNZt/pqMwlfkCV75Zg4/+laB5+LfB5rJ9tZjpFI0nXkcepDu0O1HuCprZsS/8ZNuQgsjNWVUbaTdlsI1jMyYHpK8vfeKo4TDlnVmfIxEjmr65jnbvqjYvcVqWaHe8oyCu2JoEhK1Bcn/72G9bNr0akGiL84NfaYz4kvo2UMl5oMNcpuojjKFXlGYaxUPU4CYien0kE0rr6Xni/svqZhxMucLgB0gBKKih7dVHwt2c8S121cAkm1Qub3NQ+1sq3uXJ/HNjMl6On019mxIkkwth6APf8LURNzF5vN5SXcKL76hhlXGjmaIDRaeTnl1j2Gp2gmufOwBzENXKl89zRzO5xMNag1bkB&p=");
	
	web_reg_save_param_ex("ParamName=c_userSession",
	                     "LB=userSession\" value=\"",
	                     "RB=\"/>",
	                     LAST);

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\xA0\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"22621\"/>\n      <arg nm=\"vercsdbld\" val=\"1702\"/>\n      <arg nm=\"verqfe\" val=\"1702\"/>\n      <arg nm=\"csdbld\" val=\"1702\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"39\"/>\n      <arg nm=\"sku\" val=\"101\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"14255\"/>\n      <arg nm=\"svolsz\" val=\"476\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"220506\"/>\n      <arg nm=\"bldtm\" val=\"1250\"/>\n      <arg nm=\"bldbrch\" val=\"ni_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.22621.1702.amd64fre.ni_release.220506-1250\"/"
		">\n      <arg nm=\"buildflightid\" val=\"BF0C001B-134C-4339-B0E2-ACA19BEB7787.1\"/>\n      <arg nm=\"expid\" val=\"RS:13F1A\"/>\n      <arg nm=\"edition\" val=\"Core\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"2\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"HP\"/>\n      <arg nm=\"syspro\" val=\"HP Laptop 15-ef1xxx\"/>\n      <arg nm=\"bv\" val=\"F.54\"/>\n      <arg nm=\"ram\" val=\"16384\"/>\n      "
		"<arg nm=\"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2396\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"AMD Athlon Gold 3150U with Radeon Graphics     \"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"2L7R6UA#ABL\"/>\n      <arg nm=\"chid\" val=\"{dc2408da-5161-57d1-bde4-047dcc1973b2}\"/>\n      <arg nm=\"sdksz\" val=\"476\"/>\n     </hw>\n     <ctrl>\n      "
		"<arg nm=\"tm\" val=\"133293921040421810\"/>\n      <arg nm=\"mid\" val=\"378D4F79-26F4-4FAC-A6EA-5A43C51D4A91\"/>\n      <arg nm=\"sample\" val=\"59206375\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Required\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app="
		"\"msedge.exe\">\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"0f0bf516-aedc-4ff4-b4a1-4a6da6d768a9\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     "
		"<arg nm=\"procmeta.MetricsClientId\" val=\"b2f25a6c-6acf-4be3-9a1a-8a3007ccdd40\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"6921235004802684617\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"760\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=\"/>\n     "
		"<arg nm=\"procmeta.VariationsSeedETag\" val=\"&quot;UnMaT4Wf6A4wsbIuBzgBlVkKuu1wjwM4xb96/Ufz138=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg "
		"nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"000010c8-0007-0023-72fd-1d681d8ed901\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"113.0.1774.50");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&scpfull=0&scpguard=0&scpver=0&osver=10.0.22621&devicefamily=desktop&clientversion=113.0.1774.50&experimentationmode=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36 Edg/113.0.1774.50\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEI+bNxkzGHR3Jo5BOv5s/6XwANoKOay9n+7FVVE/rkGHdrzweeZH1blW9E+zSuFpkbEQoZsR/LFoimI0P+7XcUWdNAsB3BQy14sqdjkWJ78EIMbUv1AkjGMRuJs5mmFGn0DeoIe2jXlCFjNa8uHWJs8uy1/3DziYqW5KfwQK6Lg7ERFdO5c957E7lRnmPI/"
		"VsTI8IaXunuNO7qlRs9eiUOsKaUwgZzobg+I4hhNbaKQ6sbHIIUdjL2gFCNJ+aF+JUNLHihjQxaHZWgbgiqZaFZ81CcfBw3LBC0VnAdoZTCvdEO2Medw1XFuCx3FV1whDbNpdfnMOTcZpoKUSA6iBMOtpYR8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1702.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"113.0.1774.50 (Official build) \"},\"client\":{\"version\""
		":281483717640200,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638205122991306426\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"5c2edc06-e506-45d9-a0c5-4778205e7ec5\",\"synchronous\":false}", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"Oyva2AetqEEU3qB+IA/ZRn");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=113.0.1774.50&lang=en-US&acceptformat=crx3&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.1.3%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MC1=GUID=ea96e8600fb244c0b76ff4f2faa0694d&HASH=ea96&LV=202210&V=4&LU=1666172924349; DOMAIN=edge.microsoft.com");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"113.0.1774.50");

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
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"f2b79207,a4d485be,b9528075,82a866e9,6c715cfb,e0075c8a,3f6a1a2,b70ce6c7,322c815,8ec5d1e1,b41122b5,dee07e4,95a29f90,603d2fd8,93277d03,b9047d,de7bc63a,eb936fc6,c0fc353a\",\"enable_features\":\"e8b8fc5b,ac1a31c6,b44b62e1,ddfd6cd3,eb6bda0a,b9d9753f,c073554e,15ee0d7f,8c56fcfe,3b92f82f,3915a3ff,209911b6,f6da9a29,49c628a9,f040bc88,3242f4fd,8918c4bc,9aec59c7,6159aa80,c428869,657a13f8,e54d9e38,708b58b0,ad874ecb,8ea1baf,c6e89c63,45ed8495,fe8f254,3d0c5d81,da54791,87e7bcb0,a47c71da"
		",8656b6b2,14666474,6918470a,dc7d21dd,473bc83f,a4c17ac,106e2e85,956f91b8,51d50e41,7930653d,8fb8c332,33cc9bc8,174bb60,bd8fc42a,61431c7,6e607227,15f0c840,24b90b43,13fe26d0,694dde77,41c26479,9cffea93,75b1b341,7b3b305b,60806046,7b1870e,8832ce78,fc1ff333,4d482915,732c732a,1207cc22,329d828e,3891021f,6286c2b2,12e2660f,3b76ae01,19857ae4,faf0abfc,9f191260,2373949a,5cfd95dc,8a2adb0,e7c29515,74a3abc1,56181917,6a07a97c,a49949fb,7de23af1,3a94d1fb,9c4f24cc,69a90326,6b9993b7,1cf10166,16649177,44f7971e,fbaa04bd,"
		"3e7788d0,58568926,4ed13a13,5727cfbf,f2c76ca4,8ebd6d8b,b547d3e4,382a708,6046b072,b217214c,1df7f9ab,5f000ce,926a891a,2442314,4fbc7741,bf8cde40,8b578039,9155bb95,d486bb42,b9ce036a,a6fd2304,12b79225,bf158d94,f658bba8,58e0343e,868da52a,caa6d356,10bc8c5b,57cfd418,3d95853,25ea7cff,b42e6705,4d578363,f26b1d9f,e16e3ae1,ace2c02,badd9207,20984807,686d65ac,5c793004,5fe48b97,15f16891,2d289c6b,dbac1097,313163e0,ff72c049,f8746649,8543db20,ec121b81,aa84b360,7aef631d,62fd93b7,6e775e3,65d7932b,ac6af412,d29e7da8,"
		"792fbf1a,43d8ef41,8c22a23,63f6405a,fba29c0,c2c703ac,8aacb961,5bb92a39,4b4c3b98,5b66afe0,6c0bf1c,72f1fc48,ce975dfa,be978d29,ebb2abb8,7c336ddf,ddcca13f,9b833520,cf74f1c0,6a0f795a,c38b4943,f7d05a59,da7b6509,bd8aded9,c07020b,609df054,1e558647,8a094058,2c3ab10f,1347160e,ce3a2f9b,f3a01dfe,10163b0d,50cbb1f,cd20ec4f,33a7e900,d7595bfb,11bc10fa,a052b118,b31e492c,3e1e1ad1,3061cce0,7c940d4b,39e38478,2e4fce77,710e2548,15a8d884,2949889c,60428d40,3e057f56,d8990b6c,5222cfba,ab6121a5,73176314,7499d66a,e3ce9af1,"
		"5605d13f,f34a4bc1,f276d9d,55248c83,9ba6613a,5182d9e4,3ffeaa11,b4627894,409df2a5,a606eeb4,834d14a,4bfc9256,66171647,9e0543aa,37ad8f9b,c256496d,2d6363e3,9feaf97a,5e47e9af,7d2dcff4\"}", 
		LAST);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36 Edg/113.0.1774.50\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEI+bNxkzGHR3Jo5BOv5s/6XwANoKOay9n+7FVVE/rkGHdrzweeZH1blW9E+zSuFpkbEQoZsR/LFoimI0P+7XcUWdNAsB3BQy14sqdjkWJ78EIMbUv1AkjGMRuJs5mmFGn0DeoIe2jXlCFjNa8uHWJs8uy1/3DziYqW5KfwQK6Lg7ERFdO5c957E7lRnmPI/"
		"VsTI8IaXunuNO7qlRs9eiUOsKaUwgZzobg+I4hhNbaKQ6sbHIIUdjL2gFCNJ+aF+JUNLHihjQxaHZWgbgiqZaFZ81CcfBw3LBC0VnAdoZTCvdEO2Medw1XFuCx3FV1whDbNpdfnMOTcZpoKUSA6iBMOtpYR8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1702.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"113.0.1774.50 (Official build) \"},\"client\":{\"version\""
		":281483717640200,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638205122991306426\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/header.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"68630262-b797-414c-876f-f7dcf76f889b\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36 Edg/113.0.1774.50\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEI+bNxkzGHR3Jo5BOv5s/6XwANoKOay9n+7FVVE/rkGHdrzweeZH1blW9E+zSuFpkbEQoZsR/LFoimI0P+7XcUWdNAsB3BQy14sqdjkWJ78EIMbUv1AkjGMRuJs5mmFGn0DeoIe2jXlCFjNa8uHWJs8uy1/3DziYqW5KfwQK6Lg7ERFdO5c957E7lRnmPI/"
		"VsTI8IaXunuNO7qlRs9eiUOsKaUwgZzobg+I4hhNbaKQ6sbHIIUdjL2gFCNJ+aF+JUNLHihjQxaHZWgbgiqZaFZ81CcfBw3LBC0VnAdoZTCvdEO2Medw1XFuCx3FV1whDbNpdfnMOTcZpoKUSA6iBMOtpYR8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1702.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"113.0.1774.50 (Official build) \"},\"client\":{\"version\""
		":281483717640200,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638205122991306426\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/WebTours/\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"9f99271c-5a2c-4538-b291-58075b45a68f\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"anid\":\"61DA64BFEC386413636BD286FFFFFFFF\"}", 
		LAST);

	web_url("DomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/DomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36 Edg/113.0.1774.50\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEI+bNxkzGHR3Jo5BOv5s/6XwANoKOay9n+7FVVE/rkGHdrzweeZH1blW9E+zSuFpkbEQoZsR/LFoimI0P+7XcUWdNAsB3BQy14sqdjkWJ78EIMbUv1AkjGMRuJs5mmFGn0DeoIe2jXlCFjNa8uHWJs8uy1/3DziYqW5KfwQK6Lg7ERFdO5c957E7lRnmPI/"
		"VsTI8IaXunuNO7qlRs9eiUOsKaUwgZzobg+I4hhNbaKQ6sbHIIUdjL2gFCNJ+aF+JUNLHihjQxaHZWgbgiqZaFZ81CcfBw3LBC0VnAdoZTCvdEO2Medw1XFuCx3FV1whDbNpdfnMOTcZpoKUSA6iBMOtpYR8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1702.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"113.0.1774.50 (Official build) \"},\"client\":{\"version\""
		":281483717640200,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638205122991306426\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/home.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"618a8c64-2526-4bb8-b9e8-6a1cdac35e75\",\"synchronous\":false}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("3_5", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36 Edg/113.0.1774.50\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEI+bNxkzGHR3Jo5BOv5s/6XwANoKOay9n+7FVVE/rkGHdrzweeZH1blW9E+zSuFpkbEQoZsR/LFoimI0P+7XcUWdNAsB3BQy14sqdjkWJ78EIMbUv1AkjGMRuJs5mmFGn0DeoIe2jXlCFjNa8uHWJs8uy1/3DziYqW5KfwQK6Lg7ERFdO5c957E7lRnmPI/"
		"VsTI8IaXunuNO7qlRs9eiUOsKaUwgZzobg+I4hhNbaKQ6sbHIIUdjL2gFCNJ+aF+JUNLHihjQxaHZWgbgiqZaFZ81CcfBw3LBC0VnAdoZTCvdEO2Medw1XFuCx3FV1whDbNpdfnMOTcZpoKUSA6iBMOtpYR8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1702.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"113.0.1774.50 (Official build) \"},\"client\":{\"version\""
		":281483717640200,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638205122991306426\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/nav.pl?in=home\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=true\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"3299a06e-d246-4612-9aaa-0d3691a14b77\",\"synchronous\":false}", 
		LAST);

	web_custom_request("search", 
		"URL=https://www.bing.com/api/shopping/v1/item/search?appid=67220BD2169C2EA709984467C21494086DF8CA85&features=persnlcashback&sf=cashback1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"AgeGroup\":0,\"IsAADSignedIn\":false,\"IsBingSignedInUser\":false,\"IsMSASignedIn\":false,\"IsOffTheRecord\":true,\"IsPersonalizationDataConsentChanged\":true,\"IsPersonalizationDataConsentEnabled\":true,\"IsSSOEnabled\":true,\"LdClickData\":\"\",\"MsClickId\":\"\",\"ReturnedToCashbackActivatedDomain\":false,\"UClickData\":\"\",\"clientContext\":{\"appname\":\"Edge\",\"buildversion\":\"113.0.1774.50\",\"enabledfeatures\":[{\"name\":\"msShoppingExp1\",\"params\":[]},{\"name\":\""
		"msShoppingExp6\",\"params\":[]},{\"name\":\"msShoppingExp7\",\"params\":[{\"key\":\"msEdgeShoppingAutoShowScenariosFirstMask\",\"value\":\"1\"},{\"key\":\"msEdgeShoppingAutoShowScenariosSecondMask\",\"value\":\"83890176\"},{\"key\":\"variant\",\"value\":\"ControlUserPref\"}]},{\"name\":\"msShoppingExp31\",\"params\":[]},{\"name\":\"msShoppingExp67\",\"params\":[]},{\"name\":\"msWebAssistQuery\",\"params\":[]},{\"name\":\"msAutofillAutoPopup\",\"params\":[]},{\"name\":\""
		"msShoppingAutoShowAfterRender\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]},{\"name\":\"msEdgeShoppingPriceHistory\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingGuestDomainCoupons\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]},{\"name\":\"msEdgeShoppingEncryptionKey\",\"params\":[]},{\"name\":\"msEdgeShoppingRewards\",\"params\":[]},{\"name\":\"msEdgeShoppingExpressCheckoutFillDetails\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingRebatesSignUp\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowControlForFeature\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoShowMuteForFeature\",\"params\":[]},{\"name\":\"msEdgePwiloPriceHistory\",\"params\":[]},{\"name\":\"msZipPayVirtualCard\",\"params\":[]},{\"name\":\"msEdgeShoppingBackgroundAutoApply\",\"params\":[]},{\"name\":\"msEdgeShoppingOtherSeller\",\"params\":[]},{\"name\":\"msEdgeShoppingWalmartOtherSeller\",\"params\":[]},{\"name\":\"msEdgePwiloAsyncFallback\","
		"\"params\":[]},{\"name\":\"msEdgeShoppingClarityEnabled\",\"params\":[]},{\"name\":\"msEdgeShoppingServerNotifications\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]},{\"name\":\"msEdgeShoppingPersistentStorage\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]},{\"name\":\"msShoppingEdgeTemplateAutomation\",\"params\":[]},{\"name\":\"msEdgeShoppingWebAssistForScript\",\"params\":[]},{\"name\":\"msEdgeShoppingProductPageScript\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingBackgroundAutoApplyForPDPAndHomePage\",\"params\":[]},{\"name\":\"msEdgeShoppingEnableAccelerateStrategyForBgaaWebContents\",\"params\":[]},{\"name\":\"msShoppingCheckoutMultiMessage\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoOpenControllerScript\",\"params\":[]},{\"name\":\"msEdgeShoppingAutoOpenControllerOnCheckout\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotifications\",\"params\":[]},{\"name\":\"msEdgeShoppingPwiloNotificationsProductTracking\",\"params\":[]},{\"name\""
		":\"msEdgeShoppingRebatesAutoShowExistingUser\",\"params\":[]},{\"name\":\"msEdgeShoppingOptimizeUrlSanitization\",\"params\":[{\"key\":\"duration\",\"value\":\"3\"}]}],\"enabledservicefeatures\":{},\"enabledserviceflights\":\"\",\"extractedpagelocale\":\"\",\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.22621\"},\"item\":{\"seller\":{\"IsEdgeRebatesFlow\":false,\"domain\":\"127.0.0.1\",\"path\":\"/WebTours/\"}},\"sourceTypes\":[\"deals\"]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"113.0.1774.50");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"kpfehajjjbbcifeehjgfgnabifknmdad,ndikpojcjlepofdkaaldkinkjbeeebkl,ojblfafjmiikbkepnnolpgbbhejhlcim,ahmaebgpfccdhgidjaidaoojjcijckba,alpjnmnfbgfkmmpcfpejmmoebdndedno,oankkpibpaokgecfckkdkgaoafllipag,mpicjakjneaggahlnmbojhjpnileolnb,lkkdlcloifjinapabfonaibjijloebfb,ohckeflnhegojcjlcpbfpciadgikcohk,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,jbfaflocpnkhbgcijpkiafdpbjkedane,omnckhpgfmaoelhddliebabpgblmmnjp,lfmeghnikdkbonehgjihjebgioakijgn,hjaimielcgmceiphgjjfddlgjklfpdei,"
		"cllppcmmlnkggcmljjfigkcigaajjmid,eeobbhfgfagbclfofmgbdfoicabjdbkn,mkcgfaeepibomfapiapjaceihcojnphg,fppmbhmldokgmleojlplaaodlkibgikh,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"4718");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-113.0.1774.50");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:En_tXQeZeKyrj6bBdHlI5YsuFM_US27T1uRtegcrvsA&cup2hreq=b09150992e4eaea1962a9e210aeddc65b979903bb3f58f81a981396c7d30e54f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.47,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.FDBBAED3B7A4C6AD0DB7ACEA2484CDCC8A836A1892B32451A2DA25150FDDC667\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.68,\"AppVersion\""
		":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"10.34.0.47\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\""
		":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.85,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.76\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.76,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\""
		"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F3CA7027E9AF306E210170760F05487A86C0C4F7C3B64C1E22B492A8EB31125\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.24,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority"
		"\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"6498.2023.3.1\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5633346E050C303EB0D2E75042E7829DF2C332259313B6AA872EE7CAD8ACAC0F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\":\""
		"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.0.0.1\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.BE80479D4481EBFC443482B0B23BE4C5762A254D6292FDE0F304D9D6DCAC0CFD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"113\",\""
		"AppRollout\":0.48,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.0.2.20\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.95\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.95\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.95,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2DBAE04013857E03A5A52EF0281FBFC638168B654C84FEDA7743031895C38FAE\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2960\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.84\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.CCDC479BC934E75FEF742F2DE99C9A8E00A2CC0A7F551D3E8E9B7B356C5505C1\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.84\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.84,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2.0.5081.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\"enabled\":true,\"lang\":\"en-US\",\""
		"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.69,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.23\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.43,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.94,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\""
		"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0A896B25442E25516B574F8632D6D38AFF3938B0E5F6502A6E5B16C2ADFFF2BD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.72,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.3\"},{\"appid\":\""
		"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8629D85AEAE763803AFF2497E37D269CC567886BB0C00276C89F6A368E6ECD3B\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.59,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\""
		"updatecheck\":{},\"version\":\"113.15417.15414.3\"},{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.81\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.81\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.81,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\""
		"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2F0CDE41A4FF73810239C650DC9B1769D6DE63D3562518F686AEAEBD56D591E0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.77,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,"
		"\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.3.163.19\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.11\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.11,\"AppVersion\":\""
		"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.01ABB1A14967FB06B48808C1FF9C7EE1FBEA741E3688997639BE0A5D428DDE66\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\""
		"AppMajorVersion\":\"113\",\"AppRollout\":0.91,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":14,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\""
		"desktop\",\"version\":\"10.0.22621.1702\"},\"prodversion\":\"113.0.1774.50\",\"protocol\":\"3.1\",\"requestid\":\"{b65a61d5-8700-452b-9582-22cf977e3a23}\",\"sessionid\":\"{3b575498-f862-4757-a79d-efc2b858bbdd}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.175.27\"},\"updaterversion\":\"113.0.1774.50\"}}", 
		LAST);

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
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"JsonData\":\"{\\\"domain\\\":\\\"127.0.0.1\\\",\\\"validationReason\\\":\\\"EndOfScript\\\",\\\"time\\\":74.69999998807907,\\\"initializeTime\\\":46,\\\"preValidationTime\\\":7.5999999940395355,\\\"path\\\":\\\"/WebTours/\\\",\\\"pageStatus\\\":\\\"\\\"}\",\"EventType\":\"AutoOpenControllerPerf\",\"LogLevel\":\"Information\",\"Message\":\"\",\"ClientContext\":{\"AppInfoClientName\":\"Edge\",\"JSVersion\":\"1.437\",\"BuildVersion\":\"113.0.1774.50\",\"EnabledServiceFlights\":\"\"},\""
		"ImpressionId\":\"9DD87101A3D94F958137D9E72A7B87A5\"}", 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=ACB19E7C638B460D931F4FD0161797CD&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("MSCCSC=1; DOMAIN=www.bing.com");

	web_add_cookie("MUID=08E2288EABF7645029433A9CAADD6558; DOMAIN=www.bing.com");

	web_add_cookie("ANON=A=61DA64BFEC386413636BD286FFFFFFFF&E=1b91&W=1; DOMAIN=www.bing.com");

	web_add_cookie("MMCASM=ID=27348DD9A19C45F88BDBA7AE4FCD9418; DOMAIN=www.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=11&MRNB=1682103964725&MRB=0; DOMAIN=www.bing.com");

	web_add_cookie("USRLOC=HS=1&ELOC=LAT=9.002052307128906|LON=38.77179718017578|N=Addis%20Ababa%2C%20Addis%20Ababa|ELT=6|; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20220901&T=1684869365000; DOMAIN=www.bing.com");

	web_add_cookie("_RwBf=W=0&ilt=28&ihpd=0&ispd=3&rc=55&rb=55&gb=0&rg=0&pc=52&mtu=0&rbb=0.0&g=0&cid=&clo=0&v=6&l=2023-05-23T07:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&o=0&p=BINGCOPILOTWAITLIST&c=MR000T&t=1166&s=2023-03-28T18:47:27.9431173+00:00&ts=2023-05-23T19:30:14.1956935+00:00&rwred=0&wls=2&lka=0&lkt=0&TH=&mta=0&mte=0&e=8FfM6KlArB-1aONrPGllAs3S1dcp7g2jBXyaldKLRThrHvQ0ZORx_slY47p0InR83284s__rh9OROG8lSRsWHER_12TYiC4uycUp4thzu3s; DOMAIN=www.bing.com");

	web_add_cookie("SUID=A; DOMAIN=www.bing.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://ntp.msn.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-MS-GEC", 
		"92C27DACCCA27FF61B22EEDD22DB026D746F335FF77CB1F276398F648EE43D59");

	web_add_header("Sec-MS-GEC-Version", 
		"1-113.0.1774.50");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("data", 
		"URL=https://www.bing.com/profile/history/data?do=2&userAccountType=0", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	lr_start_transaction("login");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("login.pl", 
		"Action=http://127.0.0.1:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://127.0.0.1:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=136485.909437019HAcAtQDpQzzzzzzHtcVccpQzDi", ENDITEM, 
		"Name=username", "Value=Jojo1", ENDITEM, 
		"Name=password", "Value=j2ee1", ENDITEM, 
		"Name=login.x", "Value=55", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("Navigate Flight");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(20);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t130.inf", 
		LAST);

	lr_end_transaction("Navigate Flight",LR_AUTO);

	lr_start_transaction("Find Flight");

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(21);

	web_submit_form("reservations.pl", 
		"Snapshot=t131.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=05/25/2023", ENDITEM, 
		"Name=arrive", "Value=Frankfurt", ENDITEM, 
		"Name=returnDate", "Value=06/26/2023", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		LAST);

	lr_end_transaction("Find Flight",LR_AUTO);

	lr_start_transaction("Choose Flight");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(15);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t132.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=011;343;05/25/2023", ENDITEM, 
		"Name=reserveFlights.x", "Value=30", ENDITEM, 
		"Name=reserveFlights.y", "Value=14", ENDITEM, 
		LAST);

	lr_end_transaction("Choose Flight",LR_AUTO);

	lr_start_transaction("Payment");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t133.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=hirutt", ENDITEM, 
		"Name=lastName", "Value=shenkutee", ENDITEM, 
		"Name=address1", "Value=ontario 21st", ENDITEM, 
		"Name=address2", "Value=1103", ENDITEM, 
		"Name=pass1", "Value=hirutt shenkutee", ENDITEM, 
		"Name=creditCard", "Value=123 456 7895", ENDITEM, 
		"Name=expDate", "Value=02/25", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		LAST);

	lr_end_transaction("Payment",LR_AUTO);

	lr_start_transaction("Sign Off");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Ordinal=1", 
		"Snapshot=t134.inf", 
		LAST);

	lr_end_transaction("Sign Off",LR_AUTO);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_6", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36 Edg/113.0.1774.50\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAmAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEI+bNxkzGHR3Jo5BOv5s/6XwANoKOay9n+7FVVE/rkGHdrzweeZH1blW9E+zSuFpkbEQoZsR/LFoimI0P+7XcUWdNAsB3BQy14sqdjkWJ78EIMbUv1AkjGMRuJs5mmFGn0DeoIe2jXlCFjNa8uHWJs8uy1/3DziYqW5KfwQK6Lg7ERFdO5c957E7lRnmPI/"
		"VsTI8IaXunuNO7qlRs9eiUOsKaUwgZzobg+I4hhNbaKQ6sbHIIUdjL2gFCNJ+aF+JUNLHihjQxaHZWgbgiqZaFZ81CcfBw3LBC0VnAdoZTCvdEO2Medw1XFuCx3FV1whDbNpdfnMOTcZpoKUSA6iBMOtpYR8B&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1702.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"113.0.1774.50 (Official build) \"},\"client\":{\"version\""
		":281483717640200,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638205122991306426\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\""
		"warn\"}}},\"destination\":{\"uri\":\"http://127.0.0.1:1080/WebTours/home.html\",\"ip\":\"127.0.0.1\"},\"referrer\":{\"uri\":\"http://127.0.0.1:1080/cgi-bin/welcome.pl?signOff=1\",\"ip\":\"127.0.0.1\"},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"f1620633-a1dc-425e-9253-921008245477\",\"synchronous\":false}", 
		LAST);

	return 0;
}
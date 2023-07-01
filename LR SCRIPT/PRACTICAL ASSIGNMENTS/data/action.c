Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("experiments", 
		"URL=https://api.edgeoffer.microsoft.com/edgeoffer/experiments?appId=edge-extensions&country=CA", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"qh7DuHT1+lk3vKMY3SZisL");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=112.0.1722.48&lang=en-US&acceptformat=crx3&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.1.2%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
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
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"4a945acb,b9528075,82a866e9,6c715cfb,e0075c8a,3f6a1a2,322c815,bc68d720,968aa160,dee07e4,95a29f90,603d2fd8,93277d03,b9047d,de7bc63a,eb936fc6\",\"enable_features\":\"9dfb2f9e,42f76cc4,ac1a31c6,b44b62e1,ddfd6cd3,eb6bda0a,2d23ba84,456fa8b5,b9d9753f,21004d55,f8ac8ec,c073554e,8c56fcfe,3b92f82f,3915a3ff,209911b6,49c628a9,f040bc88,3242f4fd,8918c4bc,7e84a6e5,8f5c2922,ec70e985,9aec59c7,c428869,657a13f8,bfd715c,e54d9e38,d0dc3263,8ea1baf,c6e89c63,45ed8495,fe8f254,da54791,ec7d8af9,"
		"87e7bcb0,3d47a1e6,aa9752f4,cd614abf,6d667393,e314f18e,3d52c6a2,a47c71da,6d39f62e,8656b6b2,14666474,6918470a,963f18b5,dc7d21dd,473bc83f,a4c17ac,106e2e85,956f91b8,51d50e41,7930653d,8fb8c332,33cc9bc8,174bb60,bd8fc42a,61431c7,6e607227,15f0c840,13fe26d0,694dde77,17178ab5,41c26479,9cffea93,75b1b341,60806046,7b1870e,8832ce78,fc1ff333,732c732a,1207cc22,329d828e,3891021f,6286c2b2,12e2660f,3b76ae01,19857ae4,faf0abfc,9f191260,2373949a,5cfd95dc,8a2adb0,e7c29515,56181917,6a07a97c,a49949fb,7de23af1,3a94d1fb,"
		"9c4f24cc,69a90326,6b9993b7,1cf10166,16649177,44f7971e,fbaa04bd,3e7788d0,58568926,4ed13a13,5727cfbf,f2c76ca4,8ebd6d8b,b547d3e4,382a708,6046b072,b217214c,1df7f9ab,5f000ce,926a891a,2442314,4fbc7741,bf8cde40,8b578039,9155bb95,d486bb42,b9ce036a,a6fd2304,39910341,f658bba8,58e0343e,6e71f66e,20072c82,868da52a,75cbe4fa,6099ff4d,caa6d356,10bc8c5b,57cfd418,3d95853,4d578363,8a1d22f,f26b1d9f,3d0bbd6,e16e3ae1,60ff3cac,71272018,ace2c02,badd9207,20984807,686d65ac,5c793004,5fe48b97,15f16891,2d289c6b,dbac1097,"
		"313163e0,ff72c049,f8746649,8543db20,ec121b81,cfea09b1,aa84b360,7aef631d,62fd93b7,6e775e3,ac6af412,d29e7da8,43d8ef41,a2f3a356,8c22a23,63f6405a,39aa9578,fba29c0,c2c703ac,5c82f28f,8aacb961,5bb92a39,4b4c3b98,5b66afe0,6c0bf1c,72f1fc48,ce975dfa,be978d29,59e7987a,beeacc0d,d8dbe509,4f50853c,53e63c76,ebb2abb8,7c336ddf,ddcca13f,9b833520,26a23df5,6a0f795a,c38b4943,b83652bc,f7d05a59,597842a0,c310ac47,609df054,1e558647,8a094058,2c3ab10f,1347160e,ce3a2f9b,55476aab,e4c29c54,50cbb1f,cd20ec4f,33a7e900,3693d98b,"
		"d7595bfb,b31e492c,3e1e1ad1,3061cce0,7c940d4b,39e38478,2e4fce77,710e2548,a85c2524,a1f2654e,15a8d884,c0fc353a,d5427798,60428d40,3e057f56,d8990b6c,5222cfba,ab6121a5,73176314,7499d66a,e3ce9af1,9b42372,f34a4bc1,f276d9d,55248c83,9ba6613a,5182d9e4,3ffeaa11,889d55da,a606eeb4,88c758b7,66171647,37ad8f9b,c256496d,bc5dfc53,e3cf7468,5e47e9af,9afb0488,bda73cc8,7d2dcff4\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"anid\":\"61DA64BFEC386413636BD286FFFFFFFF\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

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
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("DomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/DomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
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

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-PBGW9BF7P6&gtm=45je34c0&_p=1401160969&cid=2014109714.1681663887&ul=en-us&sr=1536x864&uaa=x86&uab=64&uafvl=Chromium%3B112.0.5615.121%7CMicrosoft%2520Edge%3B112.0.1722.48%7CNot%253AA-Brand%3B99.0.0.0&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&_s=1&sid=1681663886&sct=1&seg=0&dl=https%3A%2F%2Fjpetstore.aspectran.com%2Fcatalog%2F&dt=JPetStore%20Demo&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://jpetstore.aspectran.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_start_transaction("SIGN IN");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

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
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,oankkpibpaokgecfckkdkgaoafllipag,kpfehajjjbbcifeehjgfgnabifknmdad,ohckeflnhegojcjlcpbfpciadgikcohk,ndikpojcjlepofdkaaldkinkjbeeebkl,fppmbhmldokgmleojlplaaodlkibgikh,ojblfafjmiikbkepnnolpgbbhejhlcim,jbfaflocpnkhbgcijpkiafdpbjkedane,mkcgfaeepibomfapiapjaceihcojnphg,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,ahmaebgpfccdhgidjaidaoojjcijckba,alpjnmnfbgfkmmpcfpejmmoebdndedno,hjaimielcgmceiphgjjfddlgjklfpdei,lfmeghnikdkbonehgjihjebgioakijgn,"
		"mpicjakjneaggahlnmbojhjpnileolnb,lkkdlcloifjinapabfonaibjijloebfb,cllppcmmlnkggcmljjfigkcigaajjmid,omnckhpgfmaoelhddliebabpgblmmnjp,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"6029");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-112.0.1722.48");

	lr_think_time(9);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:8npiKoD2_XuKc-rL3QwO9Bv26-KXJeuuOrb0rr7wsak&cup2hreq=796897d5d5c272809711e363b0ea4bade7e1aa3ff340a78cf3d89c918bf92f0b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.81\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.81\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.81,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F3CA7027E9AF306E210170760F05487A86C0C4F7C3B64C1E22B492A8EB31125\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.24,\"AppVersion\":\""
		"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"6498.2023.3.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"112\""
		",\"AppRollout\":0.47,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.95\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.95\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.95,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.AE475A582EAEBD30A38C2EA870A9CF5EDDF5F653095B95B6612643795ED7A7F6\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.68,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"10.34.0.45\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.11\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.11,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\""
		"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\""
		"AppMajorVersion\":\"112\",\"AppRollout\":0.69,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.23\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2F0CDE41A4FF73810239C650DC9B1769D6DE63D3562518F686AEAEBD56D591E0\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.77,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.3.163.19\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.B1FD26DC8F8E5144EC540821F39951CF2C47B27B7E31FE469BDB38F0F5DF75A9\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2943\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.84\",\"enabled\":true,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.8A9B6CC94764207F979D168049924BDDFE4B8679D8E112F026BF4D5BDC5C18EC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.84\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.84,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2.0.4716.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\""
		"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.85,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.76\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.76,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\""
		"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0A896B25442E25516B574F8632D6D38AFF3938B0E5F6502A6E5B16C2ADFFF2BD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.72,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.3\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":"
		"\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.94,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\""
		"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.B310248F30249CE0887C7346EF05478A5E744C7482BC8B6CDF7555FD7260CCC6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.19,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\""
		"version\":\"3.0.0.9\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8DB8EE0201AAEE92134313B2CDF5C6EF621CC95B61F0817A056E5020111EF340\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.48,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.0.2.18\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.AEA4E29E4CA78F4BFBED8D97E40514EA3D5305D0316D41A1DB8B03A0C017A02D\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.59,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\""
		"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"112.15166.0.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.43,\"AppVersion\":\""
		"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.01ABB1A14967FB06B48808C1FF9C7EE1FBEA741E3688997639BE0A5D428DDE66\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\""
		"AppMajorVersion\":\"112\",\"AppRollout\":0.91,\"AppVersion\":\"112.0.1722.48\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":14,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\""
		"desktop\",\"version\":\"10.0.22621.1413\"},\"prodversion\":\"112.0.1722.48\",\"protocol\":\"3.1\",\"requestid\":\"{5b3a2238-8066-4e37-9fb2-f5c61489e286}\",\"sessionid\":\"{dbe6fbf0-a3c1-4685-990b-8892b9932451}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.173.55\"},\"updaterversion\":\"112.0.1722.48\"}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://jpetstore.aspectran.com");

	web_revert_auto_header("Origin");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("collect_2", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-PBGW9BF7P6&gtm=45je34c0&_p=1401160969&cid=2014109714.1681663887&ul=en-us&sr=1536x864&uaa=x86&uab=64&uafvl=Chromium%3B112.0.5615.121%7CMicrosoft%2520Edge%3B112.0.1722.48%7CNot%253AA-Brand%3B99.0.0.0&uamb=0&uam=&uap=Windows&uapv=15.0.0&uaw=0&_s=2&sid=1681663886&sct=1&seg=0&dl=https%3A%2F%2Fjpetstore.aspectran.com%2Fcatalog%2F&dt=JPetStore%20Demo&en=user_engagement&_et=6652", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://jpetstore.aspectran.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("SIGN IN",LR_AUTO);

	lr_start_transaction("LOGIN");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(11);

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEPtPSLNqWQARfF0tjcyARmXgACF/08Y3zQF4aH8ZoOdpVU8PEqI/3hlUp127GyvPlDiR1xGV6z4+NHNAZu6SqjwBdg7Jr0ZXUybLN4hl5tmOkGZda/GeG4oTsUGj6aKfC5/99tl3ZDY2TAPJ+NnJedtgBkNsvg0oDjMo64cFV9zjazpt/OyOWRMHo6gzImx+"
		"XG6rFZWN6urxSbRQLzQb+QoKonsrkiaab5gfgb46+gAIqAagHcQ9jpI7wKZHSqCFCBxW6KdQ8ed5b2y333K4Huz3+AUl4IFahKCoN4O5HEjkIOuyAwZLB2CYWTSqQTXCt8giHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1413.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638172579895638033\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm?retry=true\",\"ip\":\"172.67.146.56\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm\",\"ip\":\"172.67.146.56\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"cf232498-9acc-4540-a02f-32ece9a465c5\",\"synchronous\":false}", 
		LAST);

	lr_end_transaction("LOGIN",LR_AUTO);

	lr_think_time(11);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEPtPSLNqWQARfF0tjcyARmXgACF/08Y3zQF4aH8ZoOdpVU8PEqI/3hlUp127GyvPlDiR1xGV6z4+NHNAZu6SqjwBdg7Jr0ZXUybLN4hl5tmOkGZda/GeG4oTsUGj6aKfC5/99tl3ZDY2TAPJ+NnJedtgBkNsvg0oDjMo64cFV9zjazpt/OyOWRMHo6gzImx+"
		"XG6rFZWN6urxSbRQLzQb+QoKonsrkiaab5gfgb46+gAIqAagHcQ9jpI7wKZHSqCFCBxW6KdQ8ed5b2y333K4Huz3+AUl4IFahKCoN4O5HEjkIOuyAwZLB2CYWTSqQTXCt8giHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1413.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638172579895638033\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm?retry=true\",\"ip\":\"172.67.146.56\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/account/signonForm?retry=true\",\"ip\":\"172.67.146.56\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"a9e7a670-b4f7-4174-8f3b-b8cc4bccf057\",\"synchronous\":false}", 
		LAST);

	lr_start_transaction("Fish");

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

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"6029");

	lr_think_time(38);

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"event\":[{\"download_time_ms\":145030,\"downloaded\":387365,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"3.0.0.0\",\"previousversion\":\"0.0.0.0\",\"total\":387365,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"f08b21db-8a96-416f-86dc-4301cb9925a1?P1=1682149028&P2=404&P3=2&P4=JIPefdtZTscjSslNkROhYFIyCowxbtAOwMV5FJX8r4oYpxyR16Pe5WXlE8yOJ7FMk%2fijVBSg3ggJpIz2hWAHRw%3d%3d\"},{\"errorcat\":3,\"errorcode\":16,\"eventresult\":0,\"eventtype\":3,\"install_time_ms\":465,\"nextfp\":\"1.82497265352E024349DF20FCB72104978E8835933BF7497E11D8B1E0A8617AAE\",\"nextversion\":\"3.0.0.0\",\"previousversion\":\"0.0.0.0\"}],\"lang\":\"en-US\",\"version\":\"0.0.0.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,"
		"\"hw\":{\"avx\":1,\"physmemory\":14,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.1413\"},\"prodversion\":\"112.0.1722.48\",\"protocol\":\"3.1\",\"requestid\":\"{12114940-8b40-490c-bc0e-7617a2436059}\",\"sessionid\":\"{dbe6fbf0-a3c1-4685-990b-8892b9932451}\",\"updaterversion\":\"112.0.1722.48\"}}", 
		LAST);

	lr_end_transaction("Fish",LR_AUTO);

	lr_start_transaction("product id");

	lr_end_transaction("product id",LR_AUTO);

	web_add_header("X-FDT-Get", 
		"all");

	web_add_header("X-MSEdge-AddLogInResponse", 
		"1");

	lr_think_time(21);

	web_custom_request("search", 
		"URL=https://www.bing.com/api/shopping/v1/item/search?appid=45EBD043982A03A4CA6B8962005A06F2B1FED569&mkt=en-us&uapimkt=en-us&features=enuapimkt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"AgeGroup\":3,\"EnabledServiceFeatures\":{},\"EnabledServiceFlights\":\"\",\"IsAADSignedIn\":false,\"IsEdgeProfileRebatesUser\":false,\"IsPersonalizationDataConsentEnabled\":true,\"IsRebatesEnabled\":false,\"IsRebatesUser\":false,\"IsRewardsUser\":true,\"IsSSOEnabled\":false,\"clientContext\":{\"PaRequestFeatureMask\":1,\"appname\":\"Edge\",\"buildversion\":\"112.0.1722.48\",\"dynamic_picl_model_id\":\"extraction.proactiveProduct.en-us\",\"enabledfeatures\":[{\"name\":\"msShoppingExp1\",\""
		"params\":[]},{\"name\":\"msShoppingExp7\",\"params\":[{\"key\":\"msEdgeShoppingAutoShowScenariosFirstMask\",\"value\":\"1\"},{\"key\":\"msEdgeShoppingAutoShowScenariosSecondMask\",\"value\":\"83890176\"},{\"key\":\"variant\",\"value\":\"ControlUserPref\"}]},{\"name\":\"msShoppingExp10\",\"params\":[]},{\"name\":\"msShoppingExp31\",\"params\":[]},{\"name\":\"msShoppingUapiExp1\",\"params\":[]},{\"name\":\"msShoppingUapiExp3\",\"params\":[]},{\"name\":\""
		"msEdgeShoppingPriceComparisonSponsoredTreatment\",\"params\":[{\"key\":\"tied_flight\",\"value\":\"LineIG1\"}]}],\"entity_extraction_engine\":\"PICL\",\"error\":\"ENTITY_NOT_PRODUCT\",\"extraction_context\":\"PRODUCT_PICL_FAILED\",\"impressionId\":\"\",\"isShoppingPersonalizationEnabled\":true,\"ismobile\":false,\"osname\":\"Windows NT\",\"osversion\":\"10.0.22621\",\"picl_model_version\":\"5.9.0\"},\"item\":{\"page_title\":\"JPetStore Demo\",\"seller\":{\"domain\":\"aspectran.com\"},\"url\":\""
		"jpetstore.aspectran.com/catalog/products/FI-SW-01\"},\"sourceTypes\":[\"itemizedCashBack\"]}", 
		LAST);

	lr_start_transaction("Add to cart");

	lr_end_transaction("Add to cart",LR_AUTO);

	lr_start_transaction("Proceed to Checkout");

	lr_end_transaction("Proceed to Checkout",LR_AUTO);

	lr_start_transaction("Paymnet");

	lr_end_transaction("Paymnet",LR_AUTO);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Origin", 
		"https://jpetstore.aspectran.com");

	lr_think_time(32);

	web_custom_request("v3", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=RS0c8b8esofmIvCKID6%2Fp2Z%2Bv7w7%2FyQw8b9GA2yjsogcmuZhAuWo8EuYpZFJRkgrQKnCkl%2BKtqjLGJhC0esRzQ3bCxHDEC1q%2BdcPeqJTdU2JkUkC9NoFMEyKYcWACTyXOdM0rQ4lF0hAeg%3D%3D", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("v3_2", 
		"URL=https://a.nel.cloudflare.com/report/v3?s=RS0c8b8esofmIvCKID6%2Fp2Z%2Bv7w7%2FyQw8b9GA2yjsogcmuZhAuWo8EuYpZFJRkgrQKnCkl%2BKtqjLGJhC0esRzQ3bCxHDEC1q%2BdcPeqJTdU2JkUkC9NoFMEyKYcWACTyXOdM0rQ4lF0hAeg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":2,\"body\":{\"elapsed_time\":825,\"method\":\"POST\",\"phase\":\"application\",\"protocol\":\"h3\",\"referrer\":\"https://jpetstore.aspectran.com/order/newOrderForm\",\"sampling_fraction\":1.0,\"server_ip\":\"172.67.146.56\",\"status_code\":400,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://jpetstore.aspectran.com/order/newOrder\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 "
		"Edg/112.0.1722.48\"}]", 
		LAST);

	lr_start_transaction("payment");

	lr_end_transaction("payment",LR_AUTO);

	lr_start_transaction("confirm");

	lr_end_transaction("confirm",LR_AUTO);

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	lr_think_time(64);

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.48\",\"identity\":{\"user\":{\"locale\":\"en-US\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEPtPSLNqWQARfF0tjcyARmXgACF/08Y3zQF4aH8ZoOdpVU8PEqI/3hlUp127GyvPlDiR1xGV6z4+NHNAZu6SqjwBdg7Jr0ZXUybLN4hl5tmOkGZda/GeG4oTsUGj6aKfC5/99tl3ZDY2TAPJ+NnJedtgBkNsvg0oDjMo64cFV9zjazpt/OyOWRMHo6gzImx+"
		"XG6rFZWN6urxSbRQLzQb+QoKonsrkiaab5gfgb46+gAIqAagHcQ9jpI7wKZHSqCFCBxW6KdQ8ed5b2y333K4Huz3+AUl4IFahKCoN4O5HEjkIOuyAwZLB2CYWTSqQTXCt8giHgE=&p=\",\"family\":3,\"locale\":\"en-US\",\"osVersion\":\"10.0.22621.1413.ni_release\",\"browser\":{\"internet_explorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-US\",\"name\":\"anaheim\",\"version\":\"112.0.1722.48 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\""
		":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638172579895638033\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":"
		"{\"uri\":\"https://jpetstore.aspectran.com/order/viewOrder?orderId=66288&submitted=true\",\"ip\":\"104.21.95.169\"},\"referrer\":{\"uri\":\"https://jpetstore.aspectran.com/order/newOrder\",\"ip\":\"104.21.95.169\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"29f47d3f-2d52-408f-b2d1-2dfbd2b90adf\",\"synchronous\":false}", 
		LAST);

	lr_start_transaction("signout");

	lr_end_transaction("signout",LR_AUTO);

	return 0;
}
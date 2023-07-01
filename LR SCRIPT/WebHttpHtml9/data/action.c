Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("MSA_DeviceTicket", 
		"t=EwC4AlN5BAAUx7kvJOvlZVsOh3du+AzMGpNViggAAafqwhVbbuQvOWQ2+jV/RZPk8ud3YeS/SscztVKbGj5gNaH3ldL6W87MyLr7VpzkaODq8C3BrJKmmh5QWHBWfp7mMJVVnxv9SoLXbq827bUJmKkqycOW7LRXRI9RqqGv0dd3UscA8+ERR6SJOeyFGT3BV1lqNwYSl178EVTqjo0dxic08D8rZXDBYm5JyYqtDCJnUkZ4ccHJMEePao0cDRvU6S0/jl6O2Qu/dYM7o6L3yVS5uB6+3P8IrP/7aH7EsXU7vrqbfHDBOFLbNGdBylehSvxYJPntRf4YgXI5zAEz22sH71GD1fX8uW5W5itK92SqYv1c1r586Q9N+2hmIa0DZgAACCf5cQECWMSjiAGAUezITlSrShBwDPbOyy2BSCIhUwk1u908WyCZ3ras4sJrvQV0eL0wDqLJtVpBDKWVWfE2EMKLHzQtgvncusClgGQdq9+"
		"HO5vt9/d6COQk0gB+IWxUFzs1Vnu9q7SFoMIFukClTQ5IvFub6ylN/f/miEzNfmrqqLWawp67ZCiRRvt3pgJ5RuraxcSZl40sQwQC0ETF3GdmKgiGTZgE1eu4MzE3uk/aWsXnQd9uYnWIkux8vvzH0vH2fHZeFfZapiXJrCwb7zIu0mSeEyqzdoOG4t9XM3YWozTC6OXv19sQIG2sQDCv0uQef+vU0Oqe6uf3LCcC7EzzVjUIVWNh2NXl3qFhHR5+NE+5nG/gW2wAvbvQ9qAnUpElOXqqMIqimmFcy06inn/TCbPn0uKdkhNo5830G6NLtKmwUg0QrYydQFNO71fkg1F8q/hX6gVYgzR/qg3UtZqKr+jFVFuxZLN9chYaGrLhmQUCXNtEoMy+fo08scj9Gsb2Ot4nHPEsQaB9kFIv1Kw0GbgB&p=");

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\xA0\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"22621\"/>\n      <arg nm=\"vercsdbld\" val=\"1702\"/>\n      <arg nm=\"verqfe\" val=\"1702\"/>\n      <arg nm=\"csdbld\" val=\"1702\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"39\"/>\n      <arg nm=\"sku\" val=\"101\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"14255\"/>\n      <arg nm=\"svolsz\" val=\"476\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"220506\"/>\n      <arg nm=\"bldtm\" val=\"1250\"/>\n      <arg nm=\"bldbrch\" val=\"ni_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.22621.1702.amd64fre.ni_release.220506-1250\"/"
		">\n      <arg nm=\"buildflightid\" val=\"BF0C001B-134C-4339-B0E2-ACA19BEB7787.1\"/>\n      <arg nm=\"expid\" val=\"RS:13F1A\"/>\n      <arg nm=\"edition\" val=\"Core\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"2\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"HP\"/>\n      <arg nm=\"syspro\" val=\"HP Laptop 15-ef1xxx\"/>\n      <arg nm=\"bv\" val=\"F.54\"/>\n      <arg nm=\"ram\" val=\"16384\"/>\n      "
		"<arg nm=\"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2396\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"AMD Athlon Gold 3150U with Radeon Graphics     \"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"2L7R6UA#ABL\"/>\n      <arg nm=\"chid\" val=\"{dc2408da-5161-57d1-bde4-047dcc1973b2}\"/>\n      <arg nm=\"sdksz\" val=\"476\"/>\n     </hw>\n     <ctrl>\n      "
		"<arg nm=\"tm\" val=\"133292358837866030\"/>\n      <arg nm=\"mid\" val=\"378D4F79-26F4-4FAC-A6EA-5A43C51D4A91\"/>\n      <arg nm=\"sample\" val=\"59206375\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Required\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app="
		"\"msedge.exe\">\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"5b097e15-be04-4069-8077-26ff13263435\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     "
		"<arg nm=\"procmeta.MetricsClientId\" val=\"b2f25a6c-6acf-4be3-9a1a-8a3007ccdd40\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"6921235004802684617\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"719\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=\"/>\n     "
		"<arg nm=\"procmeta.VariationsSeedETag\" val=\"&quot;bpO8td1Lze1n/8ryvE2+SC6mqtDH1CaehGmAvKQm7Hk=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg "
		"nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"00000b54-0003-0023-7fe6-d8aeb18cd901\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"5Rd3ZQZymPMXJsoL3U/4GW");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=113.0.1774.50&lang=en-US&acceptformat=crx3&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.1.3%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"113.0.1774.50");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"ohckeflnhegojcjlcpbfpciadgikcohk,eeobbhfgfagbclfofmgbdfoicabjdbkn,fppmbhmldokgmleojlplaaodlkibgikh,ndikpojcjlepofdkaaldkinkjbeeebkl,ojblfafjmiikbkepnnolpgbbhejhlcim,ahmaebgpfccdhgidjaidaoojjcijckba,alpjnmnfbgfkmmpcfpejmmoebdndedno,mkcgfaeepibomfapiapjaceihcojnphg,lkkdlcloifjinapabfonaibjijloebfb,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,lfmeghnikdkbonehgjihjebgioakijgn,cllppcmmlnkggcmljjfigkcigaajjmid,mpicjakjneaggahlnmbojhjpnileolnb,omnckhpgfmaoelhddliebabpgblmmnjp,"
		"jbfaflocpnkhbgcijpkiafdpbjkedane,kpfehajjjbbcifeehjgfgnabifknmdad,oankkpibpaokgecfckkdkgaoafllipag,hjaimielcgmceiphgjjfddlgjklfpdei,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"1009");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-113.0.1774.50");

	lr_think_time(34);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:YPep6gBPIk5wRff3X001_7W4mb7Ahhpnul1ORJleWoc&cup2hreq=6b08a1cacc8f2a1d61ffb4b2c878f6eea73d7f69180090090d2613f983b27e81", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.95\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.95\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.95,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.81\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.81\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.81,\"AppVersion\":\""
		"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.11\",\"AppMajorVersion\":\"113\",\""
		"AppRollout\":0.11,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.FDBBAED3B7A4C6AD0DB7ACEA2484CDCC8A836A1892B32451A2DA25150FDDC667\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.68\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.68,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"10.34.0.47\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\""
		":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.85,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater"
		"\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.76\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.76,\"AppVersion\":\"113.0.1774.50\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2F0CDE41A4FF73810239C650DC9B1769D6DE63D3562518F686AEAEBD56D591E0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.77,\""
		"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.3.163.19\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.BE80479D4481EBFC443482B0B23BE4C5762A254D6292FDE0F304D9D6DCAC0CFD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\""
		"AppMajorVersion\":\"113\",\"AppRollout\":0.48,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.0.2.20\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2DBAE04013857E03A5A52EF0281FBFC638168B654C84FEDA7743031895C38FAE\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2960\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.84\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.B1576404380846E5BBF314E95BCEF0FB74910ABE137C18E88A3F0953936376B0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.84\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.84,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2.0.5030.0\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.94,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.59\",\""
		"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.692DE3457BB908233A6602919B5FA7F2CB58DBE0013DD3FB961AF683D8ED3AB8\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.59,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"113.15392.15372.8\"},{\"appid\":\""
		"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5633346E050C303EB0D2E75042E7829DF2C332259313B6AA872EE7CAD8ACAC0F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\""
		"version\":\"4.0.0.1\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.43,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.69,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.23\"},{\"appid\":\""
		"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.47,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\""
		"version\":\"101.0.4906.0\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F3CA7027E9AF306E210170760F05487A86C0C4F7C3B64C1E22B492A8EB31125\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.24,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\""
		":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"6498.2023.3.1\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.0A896B25442E25516B574F8632D6D38AFF3938B0E5F6502A6E5B16C2ADFFF2BD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.72,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\""
		"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.3\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.01ABB1A14967FB06B48808C1FF9C7EE1FBEA741E3688997639BE0A5D428DDE66\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.91,\""
		"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":14,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.1702\"},\""
		"prodversion\":\"113.0.1774.50\",\"protocol\":\"3.1\",\"requestid\":\"{92e59504-3006-43b0-a437-65946d263b5e}\",\"sessionid\":\"{e04cbca7-c271-43ea-833d-258c131f51b3}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.175.27\"},\"updaterversion\":\"113.0.1774.50\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("MC1=GUID=ea96e8600fb244c0b76ff4f2faa0694d&HASH=ea96&LV=202210&V=4&LU=1666172924349; DOMAIN=edge.microsoft.com");

	lr_think_time(7);

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"f2b79207,a4d485be,b9528075,82a866e9,6c715cfb,e0075c8a,3f6a1a2,b70ce6c7,322c815,8ec5d1e1,b41122b5,dee07e4,95a29f90,603d2fd8,93277d03,b9047d,de7bc63a,eb936fc6\",\"enable_features\":\"e8b8fc5b,ac1a31c6,b44b62e1,ddfd6cd3,eb6bda0a,b9d9753f,c073554e,15ee0d7f,8c56fcfe,3b92f82f,3915a3ff,209911b6,f6da9a29,49c628a9,f040bc88,3242f4fd,8918c4bc,a7515176,4862aa13,8f5c2922,9aec59c7,6159aa80,c428869,657a13f8,e54d9e38,708b58b0,ad874ecb,8ea1baf,c6e89c63,45ed8495,fe8f254,3d0c5d81,da54791"
		",87e7bcb0,6d667393,a47c71da,8656b6b2,14666474,6918470a,dc7d21dd,473bc83f,a4c17ac,106e2e85,956f91b8,51d50e41,7930653d,8fb8c332,33cc9bc8,174bb60,bd8fc42a,61431c7,6e607227,15f0c840,24b90b43,13fe26d0,694dde77,41c26479,9cffea93,75b1b341,7b3b305b,60806046,7b1870e,8832ce78,fc1ff333,4d482915,732c732a,1207cc22,329d828e,3891021f,6286c2b2,12e2660f,3b76ae01,19857ae4,faf0abfc,9f191260,2373949a,5cfd95dc,8a2adb0,e7c29515,74a3abc1,56181917,6a07a97c,a49949fb,7de23af1,3a94d1fb,9c4f24cc,69a90326,6b9993b7,1cf10166,"
		"16649177,44f7971e,fbaa04bd,3e7788d0,58568926,4ed13a13,5727cfbf,f2c76ca4,8ebd6d8b,b547d3e4,382a708,6046b072,b217214c,1df7f9ab,5f000ce,926a891a,2442314,4fbc7741,bf8cde40,8b578039,9155bb95,d486bb42,b9ce036a,a6fd2304,12b79225,bf158d94,f658bba8,58e0343e,868da52a,caa6d356,10bc8c5b,57cfd418,3d95853,25ea7cff,b42e6705,4d578363,f26b1d9f,e16e3ae1,ace2c02,badd9207,20984807,686d65ac,5c793004,5fe48b97,15f16891,2d289c6b,dbac1097,313163e0,ff72c049,f8746649,8543db20,ec121b81,aa84b360,7aef631d,62fd93b7,6e775e3,"
		"ac6af412,d29e7da8,43d8ef41,8c22a23,63f6405a,fba29c0,c2c703ac,8aacb961,5bb92a39,4b4c3b98,5b66afe0,6c0bf1c,72f1fc48,ce975dfa,be978d29,ebb2abb8,7c336ddf,ddcca13f,9b833520,cf74f1c0,6a0f795a,c38b4943,f7d05a59,da7b6509,bd8aded9,c07020b,609df054,1e558647,8a094058,2c3ab10f,1347160e,ce3a2f9b,f3a01dfe,10163b0d,50cbb1f,cd20ec4f,33a7e900,d52f7bea,d7595bfb,11bc10fa,a052b118,b31e492c,3e1e1ad1,3061cce0,7c940d4b,39e38478,2e4fce77,710e2548,15a8d884,c0fc353a,2949889c,60428d40,3e057f56,d8990b6c,5222cfba,ab6121a5,"
		"73176314,7499d66a,e3ce9af1,5605d13f,f34a4bc1,f276d9d,55248c83,9ba6613a,5182d9e4,3ffeaa11,b4627894,409df2a5,a606eeb4,c73eee2f,6781e032,60c8e261,834d14a,4bfc9256,66171647,9e0543aa,37ad8f9b,c256496d,2d6363e3,9feaf97a,e3cf7468,5e47e9af,9afb0488,7d2dcff4\"}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_add_header("MSA_DeviceTicket", 
		"t=EwC4AlN5BAAUx7kvJOvlZVsOh3du+AzMGpNViggAAafqwhVbbuQvOWQ2+jV/RZPk8ud3YeS/SscztVKbGj5gNaH3ldL6W87MyLr7VpzkaODq8C3BrJKmmh5QWHBWfp7mMJVVnxv9SoLXbq827bUJmKkqycOW7LRXRI9RqqGv0dd3UscA8+ERR6SJOeyFGT3BV1lqNwYSl178EVTqjo0dxic08D8rZXDBYm5JyYqtDCJnUkZ4ccHJMEePao0cDRvU6S0/jl6O2Qu/dYM7o6L3yVS5uB6+3P8IrP/7aH7EsXU7vrqbfHDBOFLbNGdBylehSvxYJPntRf4YgXI5zAEz22sH71GD1fX8uW5W5itK92SqYv1c1r586Q9N+2hmIa0DZgAACCf5cQECWMSjiAGAUezITlSrShBwDPbOyy2BSCIhUwk1u908WyCZ3ras4sJrvQV0eL0wDqLJtVpBDKWVWfE2EMKLHzQtgvncusClgGQdq9+"
		"HO5vt9/d6COQk0gB+IWxUFzs1Vnu9q7SFoMIFukClTQ5IvFub6ylN/f/miEzNfmrqqLWawp67ZCiRRvt3pgJ5RuraxcSZl40sQwQC0ETF3GdmKgiGTZgE1eu4MzE3uk/aWsXnQd9uYnWIkux8vvzH0vH2fHZeFfZapiXJrCwb7zIu0mSeEyqzdoOG4t9XM3YWozTC6OXv19sQIG2sQDCv0uQef+vU0Oqe6uf3LCcC7EzzVjUIVWNh2NXl3qFhHR5+NE+5nG/gW2wAvbvQ9qAnUpElOXqqMIqimmFcy06inn/TCbPn0uKdkhNo5830G6NLtKmwUg0QrYydQFNO71fkg1F8q/hX6gVYgzR/qg3UtZqKr+jFVFuxZLN9chYaGrLhmQUCXNtEoMy+fo08scj9Gsb2Ot4nHPEsQaB9kFIv1Kw0GbgB&p=");

	web_custom_request("Telemetry.Request_2", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\xA0\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"22621\"/>\n      <arg nm=\"vercsdbld\" val=\"1702\"/>\n      <arg nm=\"verqfe\" val=\"1702\"/>\n      <arg nm=\"csdbld\" val=\"1702\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"39\"/>\n      <arg nm=\"sku\" val=\"101\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"14255\"/>\n      <arg nm=\"svolsz\" val=\"476\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"220506\"/>\n      <arg nm=\"bldtm\" val=\"1250\"/>\n      <arg nm=\"bldbrch\" val=\"ni_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.22621.1702.amd64fre.ni_release.220506-1250\"/"
		">\n      <arg nm=\"buildflightid\" val=\"BF0C001B-134C-4339-B0E2-ACA19BEB7787.1\"/>\n      <arg nm=\"expid\" val=\"RS:13F1A\"/>\n      <arg nm=\"edition\" val=\"Core\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"2\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"HP\"/>\n      <arg nm=\"syspro\" val=\"HP Laptop 15-ef1xxx\"/>\n      <arg nm=\"bv\" val=\"F.54\"/>\n      <arg nm=\"ram\" val=\"16384\"/>\n      "
		"<arg nm=\"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2396\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"AMD Athlon Gold 3150U with Radeon Graphics     \"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"2L7R6UA#ABL\"/>\n      <arg nm=\"chid\" val=\"{dc2408da-5161-57d1-bde4-047dcc1973b2}\"/>\n      <arg nm=\"sdksz\" val=\"476\"/>\n     </hw>\n     <ctrl>\n      "
		"<arg nm=\"tm\" val=\"133292360160613330\"/>\n      <arg nm=\"mid\" val=\"378D4F79-26F4-4FAC-A6EA-5A43C51D4A91\"/>\n      <arg nm=\"sample\" val=\"59206375\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Required\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app="
		"\"msedge.exe\">\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"8b7603c9-dc2a-4f4c-902f-bae286919121\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     "
		"<arg nm=\"procmeta.MetricsClientId\" val=\"b2f25a6c-6acf-4be3-9a1a-8a3007ccdd40\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"6921235004802684617\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"720\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=\"/>\n     "
		"<arg nm=\"procmeta.VariationsSeedETag\" val=\"&quot;bpO8td1Lze1n/8ryvE2+SC6mqtDH1CaehGmAvKQm7Hk=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg "
		"nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"00001238-0003-0023-c778-85fbb18cd901\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"3Fr1mqjtCc6YabS9J1eoVB");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Update-Interactivity", 
		"bg");

	lr_think_time(53);

	web_url("crx_2", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=113.0.1774.50&lang=en-US&acceptformat=crx3&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.1.3%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"113.0.1774.50");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22621");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Client-Data", 
		"CPuUywE=");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,oankkpibpaokgecfckkdkgaoafllipag,kpfehajjjbbcifeehjgfgnabifknmdad,fppmbhmldokgmleojlplaaodlkibgikh,ojblfafjmiikbkepnnolpgbbhejhlcim,alpjnmnfbgfkmmpcfpejmmoebdndedno,ahmaebgpfccdhgidjaidaoojjcijckba,jbfaflocpnkhbgcijpkiafdpbjkedane,mpicjakjneaggahlnmbojhjpnileolnb,lkkdlcloifjinapabfonaibjijloebfb,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,lfmeghnikdkbonehgjihjebgioakijgn,hjaimielcgmceiphgjjfddlgjklfpdei,mkcgfaeepibomfapiapjaceihcojnphg,"
		"ndikpojcjlepofdkaaldkinkjbeeebkl,cllppcmmlnkggcmljjfigkcigaajjmid,ohckeflnhegojcjlcpbfpciadgikcohk,omnckhpgfmaoelhddliebabpgblmmnjp,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"3505");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-113.0.1774.50");

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:t9U4c3qGvgL4_WJIo1JcIo7vyT_B0qrCGdEEnSlxxjY&cup2hreq=5aa4e2599b8feefa0e78bcbafcc078bf9b526f6886867fd0da0419c7e900bff1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.81\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.81\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.81,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\""
		":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F3CA7027E9AF306E210170760F05487A86C0C4F7C3B64C1E22B492A8EB31125\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.24,\"AppVersion\":\""
		"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"6498.2023.3.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"113\""
		",\"AppRollout\":0.47,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.11\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\""
		"rrf@0.11\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.11,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\":\""
		"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.76\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\""
		"AppMajorVersion\":\"113\",\"AppRollout\":0.76,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.85,\"AppVersion\":\"113.0.1774.50"
		"\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.69\",\"enabled\":true,\"lang\":\"en-US\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.69\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.69,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\""
		"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.23\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.5633346E050C303EB0D2E75042E7829DF2C332259313B6AA872EE7CAD8ACAC0F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.19,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\""
		"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.0.0.1\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.48\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.BE80479D4481EBFC443482B0B23BE4C5762A254D6292FDE0F304D9D6DCAC0CFD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.48\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.48,\"AppVersion\":\""
		"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"4.0.2.20\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.19\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.2DBAE04013857E03A5A52EF0281FBFC638168B654C84FEDA7743031895C38FAE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.19\",\"AppMajorVersion\":\"113\",\""
		"AppRollout\":0.19,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2960\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.84\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.B1576404380846E5BBF314E95BCEF0FB74910ABE137C18E88A3F0953936376B0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.84\","
		"\"AppMajorVersion\":\"113\",\"AppRollout\":0.84,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2.0.5030.0\"},{\"appid\":\"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.94\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.94,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.0A896B25442E25516B574F8632D6D38AFF3938B0E5F6502A6E5B16C2ADFFF2BD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.72,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.3\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.2F0CDE41A4FF73810239C650DC9B1769D6DE63D3562518F686AEAEBD56D591E0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.77,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.3.163.19\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.68\",\""
		"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.FDBBAED3B7A4C6AD0DB7ACEA2484CDCC8A836A1892B32451A2DA25150FDDC667\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.68\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.68,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"10.34.0.47\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\""
		":\"INBX\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.692DE3457BB908233A6602919B5FA7F2CB58DBE0013DD3FB961AF683D8ED3AB8\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.59,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\""
		"113.15392.15372.8\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.95\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.95\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.95,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\""
		"1.3.175.27\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.43\",\"enabled\":true,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.43\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.43,\"AppVersion\":\"113.0.1774.50\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\""
		":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.01ABB1A14967FB06B48808C1FF9C7EE1FBEA741E3688997639BE0A5D428DDE66\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"113\",\"AppRollout\":0.91,\"AppVersion\":\"113.0.1774.50\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.175.27\"},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":14,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.22621.1702\"},\"prodversion\":\"113.0.1774.50\",\"protocol"
		"\":\"3.1\",\"requestid\":\"{67bf531e-6260-4865-98ed-6bfc82bad658}\",\"sessionid\":\"{4fc19bc8-d41e-4cca-966f-a92e9a8ae464}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.175.27\"},\"updaterversion\":\"113.0.1774.50\"}}", 
		LAST);

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&scpfull=0&scpguard=0&scpver=0&osver=10.0.22621&devicefamily=desktop&clientversion=113.0.1774.50&experimentationmode=2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(30);

	web_custom_request("msa_2", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"f2b79207,a4d485be,b9528075,82a866e9,6c715cfb,e0075c8a,3f6a1a2,b70ce6c7,322c815,8ec5d1e1,b41122b5,dee07e4,95a29f90,603d2fd8,93277d03,b9047d,de7bc63a,eb936fc6\",\"enable_features\":\"e8b8fc5b,ac1a31c6,b44b62e1,ddfd6cd3,eb6bda0a,b9d9753f,c073554e,15ee0d7f,8c56fcfe,3b92f82f,3915a3ff,209911b6,f6da9a29,49c628a9,f040bc88,3242f4fd,8918c4bc,a7515176,4862aa13,8f5c2922,9aec59c7,6159aa80,c428869,657a13f8,e54d9e38,708b58b0,ad874ecb,8ea1baf,c6e89c63,45ed8495,fe8f254,3d0c5d81,da54791"
		",87e7bcb0,6d667393,a47c71da,8656b6b2,14666474,6918470a,dc7d21dd,473bc83f,a4c17ac,106e2e85,956f91b8,51d50e41,7930653d,8fb8c332,33cc9bc8,174bb60,bd8fc42a,61431c7,6e607227,15f0c840,24b90b43,13fe26d0,694dde77,41c26479,9cffea93,75b1b341,7b3b305b,60806046,7b1870e,8832ce78,fc1ff333,4d482915,732c732a,1207cc22,329d828e,3891021f,6286c2b2,12e2660f,3b76ae01,19857ae4,faf0abfc,9f191260,2373949a,5cfd95dc,8a2adb0,e7c29515,74a3abc1,56181917,6a07a97c,a49949fb,7de23af1,3a94d1fb,9c4f24cc,69a90326,6b9993b7,1cf10166,"
		"16649177,44f7971e,fbaa04bd,3e7788d0,58568926,4ed13a13,5727cfbf,f2c76ca4,8ebd6d8b,b547d3e4,382a708,6046b072,b217214c,1df7f9ab,5f000ce,926a891a,2442314,4fbc7741,bf8cde40,8b578039,9155bb95,d486bb42,b9ce036a,a6fd2304,12b79225,bf158d94,f658bba8,58e0343e,868da52a,caa6d356,10bc8c5b,57cfd418,3d95853,25ea7cff,b42e6705,4d578363,f26b1d9f,e16e3ae1,ace2c02,badd9207,20984807,686d65ac,5c793004,5fe48b97,15f16891,2d289c6b,dbac1097,313163e0,ff72c049,f8746649,8543db20,ec121b81,aa84b360,7aef631d,62fd93b7,6e775e3,"
		"ac6af412,d29e7da8,43d8ef41,8c22a23,63f6405a,fba29c0,c2c703ac,8aacb961,5bb92a39,4b4c3b98,5b66afe0,6c0bf1c,72f1fc48,ce975dfa,be978d29,ebb2abb8,7c336ddf,ddcca13f,9b833520,cf74f1c0,6a0f795a,c38b4943,f7d05a59,da7b6509,bd8aded9,c07020b,609df054,1e558647,8a094058,2c3ab10f,1347160e,ce3a2f9b,f3a01dfe,10163b0d,50cbb1f,cd20ec4f,33a7e900,d52f7bea,d7595bfb,11bc10fa,a052b118,b31e492c,3e1e1ad1,3061cce0,7c940d4b,39e38478,2e4fce77,710e2548,15a8d884,c0fc353a,2949889c,60428d40,3e057f56,d8990b6c,5222cfba,ab6121a5,"
		"73176314,7499d66a,e3ce9af1,5605d13f,f34a4bc1,f276d9d,55248c83,9ba6613a,5182d9e4,3ffeaa11,b4627894,409df2a5,a606eeb4,c73eee2f,6781e032,60c8e261,834d14a,4bfc9256,66171647,9e0543aa,37ad8f9b,c256496d,2d6363e3,9feaf97a,e3cf7468,5e47e9af,9afb0488,7d2dcff4\"}", 
		LAST);

	return 0;
}
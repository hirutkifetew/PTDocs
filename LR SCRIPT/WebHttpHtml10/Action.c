Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("MSA_DeviceTicket", 
		"t=EwC4AlN5BAAUx7kvJOvlZVsOh3du+AzMGpNViggAAafqwhVbbuQvOWQ2+jV/RZPk8ud3YeS/SscztVKbGj5gNaH3ldL6W87MyLr7VpzkaODq8C3BrJKmmh5QWHBWfp7mMJVVnxv9SoLXbq827bUJmKkqycOW7LRXRI9RqqGv0dd3UscA8+ERR6SJOeyFGT3BV1lqNwYSl178EVTqjo0dxic08D8rZXDBYm5JyYqtDCJnUkZ4ccHJMEePao0cDRvU6S0/jl6O2Qu/dYM7o6L3yVS5uB6+3P8IrP/7aH7EsXU7vrqbfHDBOFLbNGdBylehSvxYJPntRf4YgXI5zAEz22sH71GD1fX8uW5W5itK92SqYv1c1r586Q9N+2hmIa0DZgAACCf5cQECWMSjiAGAUezITlSrShBwDPbOyy2BSCIhUwk1u908WyCZ3ras4sJrvQV0eL0wDqLJtVpBDKWVWfE2EMKLHzQtgvncusClgGQdq9+"
		"HO5vt9/d6COQk0gB+IWxUFzs1Vnu9q7SFoMIFukClTQ5IvFub6ylN/f/miEzNfmrqqLWawp67ZCiRRvt3pgJ5RuraxcSZl40sQwQC0ETF3GdmKgiGTZgE1eu4MzE3uk/aWsXnQd9uYnWIkux8vvzH0vH2fHZeFfZapiXJrCwb7zIu0mSeEyqzdoOG4t9XM3YWozTC6OXv19sQIG2sQDCv0uQef+vU0Oqe6uf3LCcC7EzzVjUIVWNh2NXl3qFhHR5+NE+5nG/gW2wAvbvQ9qAnUpElOXqqMIqimmFcy06inn/TCbPn0uKdkhNo5830G6NLtKmwUg0QrYydQFNO71fkg1F8q/hX6gVYgzR/qg3UtZqKr+jFVFuxZLN9chYaGrLhmQUCXNtEoMy+fo08scj9Gsb2Ot4nHPEsQaB9kFIv1Kw0GbgB&p=");

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\xA0\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"22621\"/>\n      <arg nm=\"vercsdbld\" val=\"1702\"/>\n      <arg nm=\"verqfe\" val=\"1702\"/>\n      <arg nm=\"csdbld\" val=\"1702\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"39\"/>\n      <arg nm=\"sku\" val=\"101\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"14255\"/>\n      <arg nm=\"svolsz\" val=\"476\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"220506\"/>\n      <arg nm=\"bldtm\" val=\"1250\"/>\n      <arg nm=\"bldbrch\" val=\"ni_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.22621.1702.amd64fre.ni_release.220506-1250\"/"
		">\n      <arg nm=\"buildflightid\" val=\"BF0C001B-134C-4339-B0E2-ACA19BEB7787.1\"/>\n      <arg nm=\"expid\" val=\"RS:13F1A\"/>\n      <arg nm=\"edition\" val=\"Core\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"2\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"HP\"/>\n      <arg nm=\"syspro\" val=\"HP Laptop 15-ef1xxx\"/>\n      <arg nm=\"bv\" val=\"F.54\"/>\n      <arg nm=\"ram\" val=\"16384\"/>\n      "
		"<arg nm=\"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2396\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"AMD Athlon Gold 3150U with Radeon Graphics     \"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"2L7R6UA#ABL\"/>\n      <arg nm=\"chid\" val=\"{dc2408da-5161-57d1-bde4-047dcc1973b2}\"/>\n      <arg nm=\"sdksz\" val=\"476\"/>\n     </hw>\n     <ctrl>\n      "
		"<arg nm=\"tm\" val=\"133292464184632400\"/>\n      <arg nm=\"mid\" val=\"378D4F79-26F4-4FAC-A6EA-5A43C51D4A91\"/>\n      <arg nm=\"sample\" val=\"59206375\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Required\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app="
		"\"msedge.exe\">\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"0775edce-d8d3-47e8-a435-1aa425b2566a\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     "
		"<arg nm=\"procmeta.MetricsClientId\" val=\"b2f25a6c-6acf-4be3-9a1a-8a3007ccdd40\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"6921235004802684617\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"721\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=\"/>\n     "
		"<arg nm=\"procmeta.VariationsSeedETag\" val=\"&quot;bpO8td1Lze1n/8ryvE2+SC6mqtDH1CaehGmAvKQm7Hk=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg "
		"nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"0000014c-0003-0023-ae95-0233ca8cd901\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	lr_think_time(10);

	web_custom_request("Telemetry.Request_2", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\xA0\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"22621\"/>\n      <arg nm=\"vercsdbld\" val=\"1702\"/>\n      <arg nm=\"verqfe\" val=\"1702\"/>\n      <arg nm=\"csdbld\" val=\"1702\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"39\"/>\n      <arg nm=\"sku\" val=\"101\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"14255\"/>\n      <arg nm=\"svolsz\" val=\"476\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"220506\"/>\n      <arg nm=\"bldtm\" val=\"1250\"/>\n      <arg nm=\"bldbrch\" val=\"ni_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.22621.1702.amd64fre.ni_release.220506-1250\"/"
		">\n      <arg nm=\"buildflightid\" val=\"BF0C001B-134C-4339-B0E2-ACA19BEB7787.1\"/>\n      <arg nm=\"expid\" val=\"RS:13F1A\"/>\n      <arg nm=\"edition\" val=\"Core\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"2\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"HP\"/>\n      <arg nm=\"syspro\" val=\"HP Laptop 15-ef1xxx\"/>\n      <arg nm=\"bv\" val=\"F.54\"/>\n      <arg nm=\"ram\" val=\"16384\"/>\n      "
		"<arg nm=\"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2396\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"AMD Athlon Gold 3150U with Radeon Graphics     \"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"2L7R6UA#ABL\"/>\n      <arg nm=\"chid\" val=\"{dc2408da-5161-57d1-bde4-047dcc1973b2}\"/>\n      <arg nm=\"sdksz\" val=\"476\"/>\n     </hw>\n     <ctrl>\n      "
		"<arg nm=\"tm\" val=\"133292464782090460\"/>\n      <arg nm=\"mid\" val=\"378D4F79-26F4-4FAC-A6EA-5A43C51D4A91\"/>\n      <arg nm=\"sample\" val=\"59206375\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Required\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app="
		"\"msedge.exe\">\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"cf10eabe-456b-4a9e-9722-1f7261809f03\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     "
		"<arg nm=\"procmeta.MetricsClientId\" val=\"b2f25a6c-6acf-4be3-9a1a-8a3007ccdd40\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"6921235004802684617\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"721\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"47DEQpj8HBSa+/TImW+5JCeuQeRkm5NMpJWZG3hSuFU=\"/>\n     "
		"<arg nm=\"procmeta.VariationsSeedETag\" val=\"&quot;bpO8td1Lze1n/8ryvE2+SC6mqtDH1CaehGmAvKQm7Hk=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"113.0.1774.50\"/>\n     <arg nm=\"p5\" val=\"2374807\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg "
		"nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"00001af8-0003-0023-1e7c-ae58ca8cd901\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	web_revert_auto_header("MSA_DeviceTicket");

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"EHXGIQMrUntCRgJEfyCmeP");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Update-Interactivity", 
		"bg");

	lr_think_time(4);

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=113.0.1774.50&lang=en-US&acceptformat=crx3&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.1.3%26installedby%3Dother%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
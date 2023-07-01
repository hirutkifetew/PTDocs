Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("USER_CLIENT_APP", 
		lr_unmask("63c94d27d7857cb4b8b9fc4d"), 
		"www.ishatrainingsolutions.com:443");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.ishatrainingsolutions.com", 
		"URL=https://www.ishatrainingsolutions.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	lr_start_transaction("login");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(4);

	web_custom_request("token", 
		"URL=https://www.ishatrainingsolutions.com/oauth/token?grant_type=password&username=ishatrainingsolution&password=ishatrainingsolution", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/login?returnUrl=%2Fvalidate", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("secQue", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/secQue", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/validate", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("sequrity question");

	web_add_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	lr_think_time(54);

	web_custom_request("secVal", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/secVal", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/validate", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":1,\"question\":\"What is Your Father Name\",\"answer\":\"father\"}", 
		LAST);

	lr_end_transaction("sequrity question",LR_AUTO);

	lr_think_time(22);

	lr_start_transaction("NavigateMerchantTab");

	web_url("getAllLanguages", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllLanguages", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllType", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllType", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getHolderType/4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllPortalVersion", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllPortalVersion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllStatus", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllStatus", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("NavigateMerchantTab",LR_AUTO);

	lr_think_time(31);
	
	lr_rendezvous("SaveMerchant");

	lr_start_transaction("Savemerchant");

	web_url("genReference", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/genReference", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Savemerchant",LR_AUTO);

	lr_start_transaction("Click Process");

	web_add_auto_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	lr_think_time(58);

	web_custom_request("registerMerchant", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/registerMerchant", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"msisdn\":\"202301198425\",\"name\":\"ctrltab\",\"emailAddress\":\"ctrltab@abc.com\",\"language\":\"English\",\"protocolVersion\":\"\",\"serviceUri\":\"\",\"walletStatus\":\"1\",\"dfsWalletBank\":[{\"bankwalletid\":\"154\",\"bankAccount\":null,\"bankAccountHashCode\":null,\"walletBankId\":null}],\"dfsRegisterAgent\":{\"companyName\":\"ctrltab\",\"alternativeEmailAddress1\":\"\",\"alternativeEmailAddress2\":\"\",\"smsAddress\":\"\",\"kvkId\":\"\",\"contactNo\":\"\",\"locality\":\""
		"Bengaluru-South\",\"companyAddress\":\"\",\"type_id\":\"1\",\"registerAgentId\":\"\"},\"dfsProfilePictureDto\":{\"profilePicture\":\"\"},\"walletId\":\"\",\"file\":\"\",\"date\":\"2023-01-19T13:51:52.030Z\"}", 
		LAST);

	lr_end_transaction("Click Process",LR_AUTO);

	lr_think_time(68);

	lr_start_transaction("click_process");

	web_custom_request("registerMerchant_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/registerMerchant", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"msisdn\":\"202301198425\",\"name\":\"ctrltab\",\"emailAddress\":\"ctrltab@abc.com\",\"language\":\"English\",\"protocolVersion\":\"\",\"serviceUri\":\"\",\"walletStatus\":\"1\",\"dfsWalletBank\":[{\"bankwalletid\":\"154\",\"bankAccount\":null,\"bankAccountHashCode\":null,\"walletBankId\":null}],\"dfsRegisterAgent\":{\"companyName\":\"ctrltab\",\"alternativeEmailAddress1\":\"\",\"alternativeEmailAddress2\":\"\",\"smsAddress\":\"\",\"kvkId\":\"\",\"contactNo\":\"\",\"locality\":\""
		"Bengaluru-South\",\"companyAddress\":\"\",\"type_id\":\"1\",\"registerAgentId\":\"\"},\"dfsProfilePictureDto\":{\"profilePicture\":\"\"},\"walletId\":\"\",\"file\":\"\",\"date\":\"2023-01-19T13:53:39.070Z\"}", 
		LAST);

	lr_end_transaction("click_process",LR_AUTO);

	lr_think_time(46);

	lr_start_transaction("clickprocess");

	lr_end_transaction("clickprocess",LR_AUTO);

	lr_start_transaction("click process");

	web_custom_request("registerMerchant_3", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/registerMerchant", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"msisdn\":\"202301198425\",\"name\":\"alttab\",\"emailAddress\":\"alttab@abc.com\",\"language\":\"English\",\"protocolVersion\":\"\",\"serviceUri\":\"\",\"walletStatus\":\"1\",\"dfsWalletBank\":[{\"bankwalletid\":\"154\",\"bankAccount\":\"1234567895\",\"bankAccountHashCode\":null,\"walletBankId\":null}],\"dfsRegisterAgent\":{\"companyName\":\"alttab\",\"alternativeEmailAddress1\":\"\",\"alternativeEmailAddress2\":\"\",\"smsAddress\":\"\",\"kvkId\":\"\",\"contactNo\":\"\",\"locality\":\""
		"Bengaluru-South\",\"companyAddress\":\"\",\"type_id\":\"1\",\"registerAgentId\":\"\"},\"dfsProfilePictureDto\":{\"profilePicture\":\"\"},\"walletId\":\"\",\"file\":\"\",\"date\":\"2023-01-19T13:55:38.108Z\"}", 
		LAST);

	web_submit_data("202301198425", 
		"Action=https://www.ishatrainingsolutions.com/adminPortal/merchantVal/202301198425", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=token", "Value=xSPbIVyA8DIFxMgyF82D4A==", ENDITEM, 
		"Name=file", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("click process",LR_AUTO);

	lr_think_time(34);

	lr_start_transaction("Searchmerchants");

	web_custom_request("showDetails", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=alt", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_3", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altd", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_4", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altde", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_5", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altdel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_revert_auto_header("Origin");

	lr_think_time(7);

	web_url("getAllLanguages_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllLanguages", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllType_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllType", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllStatus_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllStatus", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getHolderType/4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllPortalVersion_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllPortalVersion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	web_custom_request("showDetails_6", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_think_time(27);

	web_url("getAllLanguages_3", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllLanguages", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllType_3", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllType", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4_3", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getHolderType/4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllPortalVersion_3", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllPortalVersion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllStatus_3", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllStatus", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	lr_think_time(11);

	web_custom_request("showDetails_7", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_think_time(8);

	web_custom_request("showDetails_8", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=a", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_9", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=al", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_10", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=alt", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_11", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altd", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_12", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altde", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_13", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altdel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_14", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altde", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_15", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altd", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_think_time(16);

	web_custom_request("showDetails_16", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altdel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_end_transaction("Searchmerchants",LR_AUTO);

	lr_think_time(56);

	web_custom_request("showDetails_17", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_start_transaction("searchmerchants");

	web_custom_request("showDetails_18", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_think_time(13);

	web_custom_request("showDetails_19", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=alt", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_think_time(4);

	web_custom_request("showDetails_20", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altd", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_21", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altde", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_22", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=altdel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_end_transaction("searchmerchants",LR_AUTO);

	lr_think_time(27);

	lr_start_transaction("signoff");

	web_custom_request("showDetails_23", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_end_transaction("signoff",LR_AUTO);

	return 0;
}
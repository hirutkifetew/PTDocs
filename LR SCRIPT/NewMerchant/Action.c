Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_set_user("USER_CLIENT_APP", 
		lr_unmask("63cbbea19b5405b7705ed82c"), 
		"www.ishatrainingsolutions.com:443");

	
	web_url("www.ishatrainingsolutions.com", 
		"URL=https://www.ishatrainingsolutions.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);
	
lr_start_transaction("login");

	
	lr_think_time(5);

	web_custom_request("token", 
		"URL=https://www.ishatrainingsolutions.com/oauth/token?grant_type=password&username=ishatrainingsolution&password=ishatrainingsolution", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/login?returnUrl=%2Fvalidate", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);
	
	web_url("secQue", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/secQue", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/validate", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("login",LR_AUTO);
	

lr_start_transaction("sequrity_question");

	web_add_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	lr_think_time(39);

	web_custom_request("secVal", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/secVal", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/validate", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":1,\"question\":\"What is Your Father Name\",\"answer\":\"father\"}", 
		LAST);

lr_end_transaction("sequrity_question",LR_AUTO);


	lr_think_time(5);
	

lr_start_transaction("NavigateMerchantTab");

	web_url("getAllLanguages", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllLanguages", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllType", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllType", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getHolderType/4", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllPortalVersion", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllPortalVersion", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getAllStatus", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getAllStatus", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("NavigateMerchantTab",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("Savemerchant");

	web_url("genReference", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/genReference", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("Savemerchant",LR_AUTO);

       lr_think_time(5);
       

lr_start_transaction("Click_Process");

	web_add_auto_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	web_custom_request("registerMerchant", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/registerMerchant", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"msisdn\":\"2023012181499\",\"name\":\"Ayemerchant\",\"emailAddress\":\"ayemerchant@abc.com\",\"language\":\"English\",\"protocolVersion\":\"\",\"serviceUri\":\"\",\"walletStatus\":\"1\",\"dfsWalletBank\":[{\"bankwalletid\":\"154\",\"bankAccount\":\"2244785599\",\"bankAccountHashCode\":null,\"walletBankId\":null}],\"dfsRegisterAgent\":{\"companyName\":\"Ayemerchant\",\"alternativeEmailAddress1\":\"\",\"alternativeEmailAddress2\":\"\",\"smsAddress\":\"\",\"kvkId\":\"\",\"contactNo\":\"\",\""
		"locality\":\"Bengaluru-South\",\"companyAddress\":\"\",\"type_id\":\"1\",\"registerAgentId\":\"\"},\"dfsProfilePictureDto\":{\"profilePicture\":\"\"},\"walletId\":\"\",\"file\":\"\",\"date\":\"2023-01-21T10:26:21.333Z\"}", 
		LAST);

	web_submit_data("2023012181499", 
		"Action=https://www.ishatrainingsolutions.com/adminPortal/merchantVal/2023012181499", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/merchants", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=token", "Value=8MSz8fm7ZBD2K76x6nmfAg==", ENDITEM, 
		"Name=file", "Value=", ENDITEM, 
		LAST);

	web_custom_request("showDetails", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_think_time(4);


	web_reg_async_attributes("ID=LongPoll_2", 
		"Pattern=LongPoll", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=Aye", 
		"RequestCB=LongPoll_2_RequestCB", 
		"ResponseCB=LongPoll_2_ResponseCB", 
		LAST);

	web_custom_request("showDetails_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=Aye", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_url("getWallet", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getWallet?value=2023012181499", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);


	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"PollIntervalMs=18200", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	web_custom_request("showDetails_6", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);


lr_end_transaction("Click_Process",LR_AUTO);


	lr_think_time(5);
	

lr_start_transaction("Searchmerchants");


	web_custom_request("showDetails_9", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=A", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_custom_request("showDetails_10", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=Aye", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);


	web_reg_async_attributes("ID=Poll_1", 
		"Pattern=Poll", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=Ayem", 
		"PollIntervalMs=100", 
		"RequestCB=Poll_1_RequestCB", 
		"ResponseCB=Poll_1_ResponseCB", 
		LAST);

	web_custom_request("showDetails_11", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=Ayem", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	web_url("getWallet_2", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/getWallet?value=2023012181499", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.ishatrainingsolutions.com");

	web_custom_request("showDetails_14", 
		"URL=https://www.ishatrainingsolutions.com/adminPortal/showDetails?value=", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.ishatrainingsolutions.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[1,2,3,4,5,6]", 
		LAST);

	lr_end_transaction("Searchmerchants",LR_AUTO);

	lr_start_transaction("Logoff");

	lr_end_transaction("Logoff",LR_AUTO);

	return 0;
}
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1674464233145\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_start_transaction("Login");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(10);

	web_link("Sign In", 
		"Text=Sign In", 
		"Snapshot=t41.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_form("Account.action", 
		"Snapshot=t42.inf", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("Navigate_Petanimals");

	web_image("sm_dogs.gif", 
		"Src=../images/sm_dogs.gif", 
		"Snapshot=t43.inf", 
		LAST);

	lr_end_transaction("Navigate_Petanimals",LR_AUTO);

	lr_think_time(32);

	lr_start_transaction("Select ProductId");

	web_link("K9-BD-01", 
		"Text=K9-BD-01", 
		"Snapshot=t44.inf", 
		LAST);

	lr_end_transaction("Select ProductId",LR_AUTO);

	lr_start_transaction("Select_ItemID");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(27);

	web_link("EST-6", 
		"Text=EST-6", 
		"Snapshot=t45.inf", 
		LAST);

	lr_end_transaction("Select_ItemID",LR_AUTO);

	lr_start_transaction("Addtocart");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t46.inf", 
		LAST);

	lr_end_transaction("Addtocart",LR_AUTO);

	lr_think_time(25);

	lr_start_transaction("Procceedtocheckout");

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t47.inf", 
		LAST);

	lr_end_transaction("Procceedtocheckout",LR_AUTO);

	lr_start_transaction("Click_continue");

	web_add_header("Origin", 
		"https://petstore.octoperf.com");

	lr_think_time(23);

	web_submit_form("Order.action", 
		"Snapshot=t48.inf", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=ABC", ENDITEM, 
		"Name=order.billToLastName", "Value=XYX", ENDITEM, 
		"Name=order.billAddress1", "Value=901 San Antonio Road", ENDITEM, 
		"Name=order.billAddress2", "Value=MS UCUP02-206", ENDITEM, 
		"Name=order.billCity", "Value=Palo Alto", ENDITEM, 
		"Name=order.billState", "Value=CA", ENDITEM, 
		"Name=order.billZip", "Value=94303", ENDITEM, 
		"Name=order.billCountry", "Value=USA", ENDITEM, 
		"Name=shippingAddressRequired", "Value=<OFF>", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		LAST);

	lr_end_transaction("Click_continue",LR_AUTO);

	lr_start_transaction("SignOff");

	web_link("Sign Out", 
		"Text=Sign Out", 
		"Snapshot=t49.inf", 
		LAST);

	lr_end_transaction("SignOff",LR_AUTO);

	return 0;
}
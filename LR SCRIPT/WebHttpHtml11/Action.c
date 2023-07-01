Action()
{

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("login");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(82);

	web_submit_form("login.pl", 
		"Snapshot=t9.inf", 
		ITEMDATA, 
		"Name=username", "Value=Jojo1", ENDITEM, 
		"Name=password", "Value=j2ee1", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("navigate flights");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(16);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t10.inf", 
		LAST);

	lr_end_transaction("navigate flights",LR_AUTO);

	lr_start_transaction("find flights");

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

	lr_think_time(25);

	web_submit_form("reservations.pl", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=05/23/2023", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=06/24/2023", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		LAST);

	lr_end_transaction("find flights",LR_AUTO);

	lr_think_time(14);

	lr_start_transaction("find flights");

	web_submit_form("reservations.pl_2", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=020;338;05/23/2023", ENDITEM, 
		"Name=reserveFlights.x", "Value=68", ENDITEM, 
		"Name=reserveFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_end_transaction("find flights",LR_AUTO);

	lr_start_transaction("payment");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	lr_think_time(13);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t13.inf", 
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

	lr_end_transaction("payment",LR_AUTO);

	lr_start_transaction("sign off");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(13);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t14.inf", 
		LAST);

	lr_end_transaction("sign off",LR_AUTO);

	return 0;
}
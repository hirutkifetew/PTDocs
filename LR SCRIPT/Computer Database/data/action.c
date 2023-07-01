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

	web_url("computers", 
		"URL=https://computer-database.gatling.io/computers", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Pagination 1");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(8);

	web_url("Next →", 
		"URL=https://computer-database.gatling.io/computers?p=1&n=10&s=name&d=asc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://computer-database.gatling.io/computers", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Pagination 1",LR_AUTO);

	lr_start_transaction("Pagination 2");

	lr_end_transaction("Pagination 2",LR_AUTO);

	lr_start_transaction("Pagination 3");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(25);

	web_url("Next →_2", 
		"URL=https://computer-database.gatling.io/computers?p=2&n=10&s=name&d=asc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://computer-database.gatling.io/computers?p=1&n=10&s=name&d=asc", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Pagination 3",LR_AUTO);

	lr_start_transaction("Search_ computer");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(27);

	web_submit_data("computers_2", 
		"Action=https://computer-database.gatling.io/computers", 
		"Method=GET", 
		"EncType=", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://computer-database.gatling.io/computers?p=2&n=10&s=name&d=asc", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=f", "Value=ACE", ENDITEM, 
		LAST);

	lr_end_transaction("Search_ computer",LR_AUTO);

	lr_start_transaction("Click_Computer");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(42);

	web_url("ACE", 
		"URL=https://computer-database.gatling.io/computers/381", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://computer-database.gatling.io/computers?f=ACE", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click_Computer",LR_AUTO);

	lr_start_transaction("Save_C0mputer");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"https://computer-database.gatling.io");

	web_submit_data("381", 
		"Action=https://computer-database.gatling.io/computers/381", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://computer-database.gatling.io/computers/381", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=name", "Value=ACE", ENDITEM, 
		"Name=introduced", "Value=", ENDITEM, 
		"Name=discontinued", "Value=", ENDITEM, 
		"Name=company", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("Save_C0mputer",LR_AUTO);

	return 0;
}
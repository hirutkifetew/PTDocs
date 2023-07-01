Action()
{
 	
	lr_start_transaction("Launch");

	web_url("computers", 
		"URL=https://computer-database.gatling.io/computers", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Launch",LR_AUTO);
 
 lr_think_time(8);
 
 for(i=1;i<=5;i++)
 
 {
 	lr_save_int(i,"i");
 	
 	sprintf(strTransactionName,lr_eval_string("pagination_{i}"));
	                   
 	//lr_start_transaction(lr_eval_string("pagination_{i}"));
    lr_start_transaction(strTransactionName);
    
    
	web_url("Next →", 
		"URL=https://computer-database.gatling.io/computers?p={i}&n=10&s=name&d=asc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://computer-database.gatling.io/computers", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	//lr_end_transaction(lr_eval_string("pagination_{i}"),LR_AUTO);
	lr_end_transaction(strTransactionName,LR_AUTO);
 }

	lr_think_time(8);
	
 
	lr_start_transaction("Pagination 3");

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
	
	lr_think_time(25);
	
	web_rag_save_param_ex("paramName=c_computerId",LB="action=\"/computers/", RB=\"delete","Ordinal=All",LAST);
	lr_start_transaction("Search_ computer");

	 
 
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
		"Name=f", "Value={p_computerName}", ENDITEM, 
		LAST);

	lr_end_transaction("Search_ computer",LR_AUTO);
	
	lr_think_time(42);

	lr_start_transaction("Click_Computer");

	 
	

	web_url("{p_computerName}", 
		"URL=https://computer-database.gatling.io/computers/381", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://computer-database.gatling.io/computers?f={p_computerName}", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Click_Computer",LR_AUTO);
	
	lr_think_time(42);

	lr_start_transaction("Save_C0mputer");

	 
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
		"Name=name", "Value={p_computerName}", ENDITEM, 
		"Name=introduced", "Value=", ENDITEM, 
		"Name=discontinued", "Value=", ENDITEM, 
		"Name=company", "Value=", ENDITEM, 
		LAST);

	lr_end_transaction("Save_C0mputer",LR_AUTO);

	return 0;
} 
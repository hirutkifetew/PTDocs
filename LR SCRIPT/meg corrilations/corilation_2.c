corilation_2()
{
//input type="hidden" name="userSession" value="135542.932604293zQHVQiQpfQfiDDDDtViDVpQDHfHf"/
							//"c_userSession = 135543.638801134zQHcAcfpQcAiDDDDtViDcpVfffcf"
							//"c_userSession = 135543.66164439zQHcAcHpAQfiDDDDtViDcpVzcfHf".
											

web_reg_save_param_ex("ParamName=c_userSession",
                      "LB=userSession\" value=\"",
                      "RB=\"/>",
                      LAST);

web_url("index.htm",
		"URL=http://localhost:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("login");
 
	//web_reg_find("Text=welcome, LAST");
	             
	lr_think_time(80);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={C_userSession}", ENDITEM, 
		"Name=username", "Value={p_username}", ENDITEM, 
		"Name=password", "Value={p_password}", ENDITEM, 
		"Name=login.x", "Value=57", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("Navigate Flight");
	
	/*<option value="Paris">Paris</option>
<option value="Portland">Portland</option>
<option value="San Francisco">San Francisco</option>
<option value="Seattle">Seattle</option>
<option value="Sydney">Sydney</option>
<option value="Zurich">Zurich</option>*/
	
web_reg_save_param_ex("ParamName=c_City","LB=option value=\"","RB=\">","Ordinal=ALL",LAST);

	
	
	lr_think_time(15);
	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Navigate Flight",LR_AUTO);
	
	cityCount=atoi(lr_eval_string("{c_City_count}"));
	
	for(i=1;i<=cityCount;i++)
	{
		strCity=lr_paramarr_idx("c_City",i);
		if(strcmp(strCity, "London")==0)
		{
		icount=1;
		break;
		}
		if(icount==1)
		{
		   	lr_output_message ("London is found");
		   	break;
		   }
	}
	
	FromCity=lr_paramarr_random("c_City");
	lr_save_string(FromCity,"FromCity");
	
	//ToCity=lr_paramarr_random("c_City");
	//lr_save_string(ToCity,"ToCity");
	
	/*if(strcmp (Fromcity, ToCity)==0)
	{
	
	ToCity=lr_paramarr_random("c_City");
	lr_save_string(ToCity,"ToCity");
	
	}*/
	do	
	{	
	ToCity=lr_paramarr_random("c_City");
	lr_save_string(ToCity,"ToCity");
	} while (strcmp (FromCity,ToCity)==0);
	
	
	//outboundFlight" value="{strFlight}"
	lr_output_message((%s,lr_eval_string("{P_groupName}"));
	
web_reg_save_param_ex("ParamName=C_Flight",
                      "LB=outboundFlight\" value=\"",
                      "RB=\"",
                      "Ordinal=ALL",
                      LAST);


	lr_start_transaction("Find Flight");

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(142);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={FromCity}", ENDITEM, 
		"Name=departDate", "Value={P_deprtDate}", ENDITEM, 
		"Name=arrive", "Value={ToCity}", ENDITEM, 
		"Name=returnDate", "Value={P_returndate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value={Seating_options}", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=28", ENDITEM, 
		"Name=findFlights.y", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("Find Flight",LR_AUTO);
	
	
strFlight=lr_paramarr_random("c_Flight");
	lr_save_string(strFlight,"strFlight");
	
	//593;378;01/10/2023"
	
	strFlightCity=lr_eval_string("{strFlight}");
	
	Token1=(char *)strtok(strFlightCity,";");
	Token2=(char *)strtok(NULL,";");
	Token3=(char *)strtok(NULL,";");
	

	lr_think_time(38);

	lr_start_transaction("Choose Flight");

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={strFlight}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=56", ENDITEM, 
		"Name=reserveFlights.y", "Value=1", ENDITEM, 
		LAST);

	lr_end_transaction("Choose Flight",LR_AUTO);

	lr_start_transaction("Payment ");

	 
	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(57);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value={P_RandomNumber},{P_RandomNumber}", ENDITEM,
		"Name=expDate", "Value={P_ExpDate}", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value={strFlight}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=56", ENDITEM, 
		"Name=buyFlights.y", "Value=5", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_end_transaction("Payment ",LR_AUTO);

	lr_start_transaction("log off");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(25);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("log off",LR_AUTO);

	return 0;
}
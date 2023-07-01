Action()
{

web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");
	
lr_start_transaction("Launch");

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);
	
lr_end_transaction("Launch",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("Login");

	web_url("Sign In", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=FC23D1B501BA098DD9FCD6070E66DF4E?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=FC23D1B501BA098DD9FCD6070E66DF4E?signonForm=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=ErUoGM3ASnmtrRt8mhh3jF3qh4PwM7ibBQj-6DuOXYPe233divs6PIwJyO-3TsxOjkQnlpuVdB-8ZPdpBZZSoQe4gacPOjjpgsYYYFqiUGw=", ENDITEM, 
		"Name=__fp", "Value=80lOs-4Ctvwtwm0CrmNU6rKuBNCTU_RaGe09NauLG3ANtKCoQ4KqXg7BoB_C2vi9", ENDITEM, 
		LAST);

lr_end_transaction("Login",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("Navigate_Petanimal");

	web_url("sm_dogs.gif", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("Navigate_Petanimal",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("Select_ProductID");

	web_url("K9-BD-01", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=K9-BD-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("Select_ProductID",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("Select_ItemID");

	web_url("EST-6", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=K9-BD-01", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("Select_ItemID",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("AddToCart");

	web_url("Add to Cart", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-6", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("AddToCart",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("ProceeToCheckout");

	web_url("Proceed to Checkout", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-6", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("ProceeToCheckout",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("Click_Continue");

	web_submit_data("Order.action", 
		"Action=https://petstore.octoperf.com/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
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
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=jkTjtg8wZtCe66E-4tU5AEaE3ntMDdTyx2W88jpNb7y5h1HVV7gowZet1xnSWgYGjJ9rr0RO28FBx-YtD5A7MBdQTnj8HcSN-yXSRvo33kI=", ENDITEM, 
		"Name=__fp", "Value=APTwcBgvxX54vHJS7byB8oZMKbL74UxH4zqcV5smLtlZX5Q6krxn60LooMCHMOMkgPPPSVoWOTXg8aKYXBPyKLelSz2Up94aOs9luBj-Pq7wuWSIJf8Y6w==", ENDITEM, 
		LAST);

lr_end_transaction("Click_Continue",LR_AUTO);

	lr_think_time(5);

lr_start_transaction("Click_Confirm");

	web_url("Confirm", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("Click_Confirm",LR_AUTO);

       lr_think_time(5);

lr_start_transaction("LogOff");

	web_url("Sign Out", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
		
lr_end_transaction("LogOff",LR_AUTO);

	return 0;
}
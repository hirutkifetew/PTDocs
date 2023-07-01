Action()
{

	lr_start_transaction("Login");

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("Navigate_Petanimal");

	lr_end_transaction("Navigate_Petanimal",LR_AUTO);

	lr_start_transaction("select product id");

	lr_end_transaction("select product id",LR_AUTO);

	lr_start_transaction("select item ID");

	lr_end_transaction("select item ID",LR_AUTO);

	lr_start_transaction("Add to Cart");

	lr_end_transaction("Add to Cart",LR_AUTO);

	lr_start_transaction("Procced to checkout");

	lr_end_transaction("Procced to checkout",LR_AUTO);

	lr_start_transaction("click_continue");

	lr_end_transaction("click_continue",LR_AUTO);

	lr_start_transaction("click_confirm");

	lr_end_transaction("click_confirm",LR_AUTO);

	lr_start_transaction("logoff");

	lr_end_transaction("logoff",LR_AUTO);

	return 0;
}
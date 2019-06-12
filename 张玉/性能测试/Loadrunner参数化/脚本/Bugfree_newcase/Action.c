Action()
{

	web_add_cookie("1_product=7c70d8babf6c2622289bddd2d2097c2d8906867cs%3A1%3A%221%22%3B; DOMAIN=192.168.109.1");

	web_add_cookie("pageSize=2dd7b4b260f1513a73b85b51114fb53ef3d8d056s%3A2%3A%2220%22%3B; DOMAIN=192.168.109.1");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%5Badmin%5D%22%5D%2C%22value%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22result%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%7D%5D; DOMAIN=192.168.109.1");

	web_add_cookie("language=33142191c8a895b509ca2fb6f6cc597a3125f158s%3A5%3A%22zh_cn%22%3B; DOMAIN=192.168.109.1");

	web_url("1", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree/assets/65cb0d52/jquery.min.js", "Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/blue/seperate_line.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/blue/logo_login.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", ENDITEM, 
		LAST);

	web_submit_form("login", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=admin", ENDITEM, 
		"Name=LoginForm[password]", "Value=123456", ENDITEM, 
		"Name=LoginForm[language]", "Value=�\x80体中�\x87", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=<OFF>", ENDITEM, 
		EXTRARES, 
		"Url=/bugfree/themes/classic/assets/css/form.css", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/down.gif", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/active.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images//close_div.gif", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/c4a5a759/img/page.gif", "Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		LAST);

	web_submit_data("getProductModule", 
		"Action=http://192.168.109.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("1_2", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/case/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://192.168.109.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/case/list/1", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("edit", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/case/list/1", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/a2a4058f/themes/default/default.css", "Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/a2a4058f/themes/default/default.png", "Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/f94ed65d/indicator.gif", "Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(10);

	
	lr_start_transaction("newcase");


	web_submit_data("edit_2", 
		"Action=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CaseInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=CaseInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=CaseInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=CaseInfoView[title]", "Value={CaseInfoView}", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=CaseInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[case_status]", "Value=Active", ENDITEM, 
		"Name=CaseInfoView[assign_to_name]", "Value={assign_to_name}", ENDITEM, 
		"Name=CaseInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=CaseInfoView[priority]", "Value={priority}", ENDITEM, 
		"Name=Custom[CaseType]", "Value={CaseType}", ENDITEM, 
		"Name=Custom[CaseMethod]", "Value={CaseMethod}", ENDITEM, 
		"Name=Custom[CasePlan]", "Value=", ENDITEM, 
		"Name=Custom[ScriptStatus]", "Value=", ENDITEM, 
		"Name=Custom[ScriptedBy]", "Value=", ENDITEM, 
		"Name=Custom[ScriptedDate]", "Value=", ENDITEM, 
		"Name=Custom[ScriptLocation]", "Value=", ENDITEM, 
		"Name=Custom[CaseKeyword]", "Value=", ENDITEM, 
		"Name=Custom[DisplayOrder]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=CaseInfoView[related_case]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=CaseInfoView[action_note]", "Value=", ENDITEM, 
		"Name=CaseInfoView[case_step]", "Value=[步骤]<br />\r\n1.<br />\r\n2.<br />\r\n<br />\r\n[验证]<br />\r\n<br />\r\n[备注]<br />\r\n<br />", ENDITEM, 
		LAST);


	web_reg_find("Text=Bug",
		LAST);


	lr_end_transaction("newcase", LR_AUTO);


	web_image("BugFree", 
		"Alt=BugFree", 
		"Snapshot=t8.inf", 
		LAST);

	web_link("case1", 
		"Text=case1", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/search/getPreNextId?id=5&type=case&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/case/5", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
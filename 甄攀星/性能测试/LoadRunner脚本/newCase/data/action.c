Action()
{

	web_add_cookie("1_product=7c70d8babf6c2622289bddd2d2097c2d8906867cs%3A1%3A%221%22%3B; DOMAIN=192.168.28.1");

	web_add_cookie("c6c67eb2a96c08fad02d5e0abfb6372b=ccf78f4f8eacc35769d8e7e5f595c430d6c1a9eas%3A163%3A%22fcb1e38b50e831e8b7bae62ccdc3868a69872284a%3A4%3A%7Bi%3A0%3Bs%3A1%3A%221%22%3Bi%3A1%3Bs%3A5%3A%22admin%22%3Bi%3A2%3Bi%3A2592000%3Bi%3A3%3Ba%3A2%3A%7Bs%3A8%3A%22realname%22%3Bs%3A15%3A%22%E7%B3%BB%E7%BB%9F%E7%AE%A1%E7%90%86%E5%91%98%22%3Bs%3A8%3A%22username%22%3Bs%3A5%3A%22admin%22%3B%7D%7D%22%3B; DOMAIN=192.168.28.1");

	web_add_cookie("language=33142191c8a895b509ca2fb6f6cc597a3125f158s%3A5%3A%22zh_cn%22%3B; DOMAIN=192.168.28.1");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%5Badmin%5D%22%5D%2C%22value%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22result%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%7D%5D; DOMAIN=192.168.28.1");

	web_add_cookie("MUID=0B0EAB4125E566C238B3A62821E56760; DOMAIN=www.bing.com");

	web_url("login", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/site/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/blue/seperate_line.png", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/blue/logo_login.png", ENDITEM, 
		LAST);

	web_submit_form("login_2", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=admin", ENDITEM, 
		"Name=LoginForm[password]", "Value=123456", ENDITEM, 
		"Name=LoginForm[language]", "Value=�\x80体中�\x87", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=1", ENDITEM, 
		EXTRARES, 
		"Url=/bugfree/themes/classic/assets/css/form.css", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/down.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/active.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images//close_div.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/c4a5a759/img/page.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		LAST);

	web_submit_data("getProductModule", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("1", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/case/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree/themes/classic/assets/css/green.css", ENDITEM, 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/case/list/1", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_url("edit", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/case/list/1", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/a2a4058f/themes/default/default.css", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/a2a4058f/themes/default/default.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/f94ed65d/indicator.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_glass_75_e6e6e6_1x400.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_glass_55_fbf9ee_1x400.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_glass_75_dadada_1x400.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(74);

	web_submit_data("edit_2", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CaseInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=CaseInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=CaseInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=CaseInfoView[title]", "Value=测试用例0527", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=CaseInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[case_status]", "Value=Active", ENDITEM, 
		"Name=CaseInfoView[assign_to_name]", "Value=系统管理�\x98", ENDITEM, 
		"Name=CaseInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=CaseInfoView[priority]", "Value=1", ENDITEM, 
		"Name=Custom[CaseType]", "Value=功能", ENDITEM, 
		"Name=Custom[CaseMethod]", "Value=手动执行", ENDITEM, 
		"Name=Custom[CasePlan]", "Value=功能测试", ENDITEM, 
		"Name=Custom[ScriptStatus]", "Value=计划", ENDITEM, 
		"Name=Custom[ScriptedBy]", "Value=系统管理�\x98", ENDITEM, 
		"Name=Custom[ScriptedDate]", "Value=2019-05-27", ENDITEM, 
		"Name=Custom[ScriptLocation]", "Value=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Name=Custom[CaseKeyword]", "Value=Case", ENDITEM, 
		"Name=Custom[DisplayOrder]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=CaseInfoView[related_case]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=CaseInfoView[action_note]", "Value=", ENDITEM, 
		"Name=CaseInfoView[case_step]", "Value=[步骤]<br />\r\n1.打开网页<br />\r\n2.关闭<br />\r\n<br />\r\n[验证]<br />\r\n成功返回信息<br />\r\n[备注]<br />\r\n0527case<br />", ENDITEM, 
		LAST);

	web_image("BugFree", 
		"Alt=BugFree", 
		"Snapshot=t8.inf", 
		EXTRARES, 
		"Url=/bugfree/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree/assets/c4a5a759/img/page.gif", ENDITEM, 
		LAST);

	web_link("测试用例0527", 
		"Text=测试用例0527", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/search/getPreNextId?id=3&type=case&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/case/3", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_3", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/case/list/1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	return 0;
}
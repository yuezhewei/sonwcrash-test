Action()
{

	


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
		"Url=/bugfree/assets/65cb0d52/jquery.min.js", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/blue/seperate_line.png", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/blue/logo_login.png", ENDITEM, 
		LAST);

	web_submit_form("login_2", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=admin", ENDITEM, 
		"Name=LoginForm[password]", "Value=123456", ENDITEM, 
		"Name=LoginForm[language]", "Value=�\x80体中�\x87", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=<OFF>", ENDITEM, 
		LAST);

	web_submit_data("login_3", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/site/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=admin", ENDITEM, 
		"Name=LoginForm[password]", "Value=123456", ENDITEM, 
		"Name=LoginForm[language]", "Value=zh_cn", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=0", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=1", ENDITEM, 
		EXTRARES, 
		"Url=/bugfree/themes/classic/assets/images/down.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images/active.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images//close_div.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree/assets/c4a5a759/img/page.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", ENDITEM, 
		LAST);

	web_submit_data("getProductModule", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	lr_think_time(21);

	web_url("1", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=/bugfree/assets/c4a5a759/img/page.gif", ENDITEM, 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);
	web_reg_find("Text=2019-05-27 ",
		LAST);
	lr_start_transaction("startnewbug");

	web_url("edit", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree/themes/classic/assets/images/active.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/a2a4058f/themes/default/default.css", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree/assets/a2a4058f/themes/default/default.png", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(48);

	
	web_custom_request("userList", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/search/userList?p=-1&q=&limit=60&timestamp=1558946348895", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		EXTRARES, 
		"Url=/bugfree/assets/f94ed65d/indicator.gif", "Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		LAST);

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%5Badmin%5D%22%5D%2C%22value%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22result%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%7D%5D; DOMAIN=192.168.28.1");

	lr_think_time(175);

	web_submit_data("edit_2", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=BugInfoView[title]", "Value=Bug0527", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=BugInfoView[assign_to_name]", "Value=系统管理�\x98", ENDITEM, 
		"Name=BugInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=BugInfoView[severity]", "Value=2", ENDITEM, 
		"Name=BugInfoView[priority]", "Value=2", ENDITEM, 
		"Name=Custom[BugType]", "Value=用户界面", ENDITEM, 
		"Name=Custom[HowFound]", "Value=功能测试", ENDITEM, 
		"Name=Custom[BugOS]", "Value=Windows Vista", ENDITEM, 
		"Name=Custom[BugBrowser]", "Value=IE 7.0", ENDITEM, 
		"Name=Custom[OpenedBuild]", "Value=", ENDITEM, 
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM, 
		"Name=Custom[BugSubStatus]", "Value=Hold", ENDITEM, 
		"Name=Custom[BugMachine]", "Value=", ENDITEM, 
		"Name=Custom[BugKeyword]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_case]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_result]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=BugInfoView[action_note]", "Value=", ENDITEM, 
		"Name=BugInfoView[repeat_step]", "Value=[步骤]<br />\r\n1.登录<br />\r\n2.查看具体内容<br />\r\n<br />\r\n[结果]<br />\r\n未返回成功信�\xAF<br />\r\n[期望]<br />\r\n返回成功信息<br />\r\n[备注]<br />\r\n0527<br />\r\n<br />", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_submit_data("edit_3", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=BugInfoView[title]", "Value=Bug0527", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=BugInfoView[assign_to_name]", "Value=系统管理�\x98", ENDITEM, 
		"Name=BugInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=BugInfoView[severity]", "Value=2", ENDITEM, 
		"Name=BugInfoView[priority]", "Value=2", ENDITEM, 
		"Name=Custom[BugType]", "Value=用户界面", ENDITEM, 
		"Name=Custom[HowFound]", "Value=功能测试", ENDITEM, 
		"Name=Custom[BugOS]", "Value=Windows Vista", ENDITEM, 
		"Name=Custom[BugBrowser]", "Value={BrowserInfo}", ENDITEM, 
		"Name=Custom[OpenedBuild]", "Value={BuildInfo}", ENDITEM, 
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM, 
		"Name=Custom[BugSubStatus]", "Value={BugStatus}", ENDITEM, 
		"Name=Custom[BugMachine]", "Value=", ENDITEM, 
		"Name=Custom[BugKeyword]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_case]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_result]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=BugInfoView[action_note]", "Value=", ENDITEM, 
		"Name=BugInfoView[repeat_step]", "Value=[步骤]<br />\r\n1.登录<br />\r\n2.查看具体内容<br />\r\n<br />\r\n[结果]<br />\r\n未返回成功信�\xAF<br />\r\n[期望]<br />\r\n返回成功信息<br />\r\n[备注]<br />\r\n0527<br />\r\n<br />", ENDITEM, 
		LAST);

	web_image("BugFree", 
		"Alt=BugFree", 
		"Snapshot=t11.inf", 
		EXTRARES, 
		"Url=/bugfree/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree/themes/classic/assets/images//close_div.gif", ENDITEM, 
		LAST);

	web_link("Bug0527", 
		"Text=Bug0527", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://192.168.28.1:8032/bugfree/index.php/search/getPreNextId?id=1140&type=bug&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/1140", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_3", 
		"Action=http://192.168.28.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.28.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);
	
	lr_end_transaction("startnewbug", LR_AUTO);
	
	//web_find("Text=2019-05-27 ",LAST);

	return 0;
}
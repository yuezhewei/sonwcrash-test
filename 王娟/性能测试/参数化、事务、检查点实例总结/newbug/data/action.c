Action()
{

	web_add_cookie("1_product=107b6602880786a11a5f7703069e9b5de2970189s%3A1%3A%221%22%3B; DOMAIN=192.168.239.1");

	web_add_cookie("pageSize=7f27ca98877cf46cc46f056fbd08fd79a6457309s%3A2%3A%2220%22%3B; DOMAIN=192.168.239.1");

	web_add_cookie("ac-cookie=%5B%7B%22data%22%3A%5B%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%5Badmin%5D%22%5D%2C%22value%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%2C%22result%22%3A%22%5Cu7cfb%5Cu7edf%5Cu7ba1%5Cu7406%5Cu5458%22%7D%5D; DOMAIN=192.168.239.1");

	web_add_cookie("language=1d81f71b81826d10a41c56bfe6bb8d5ba3d27d4ds%3A5%3A%22zh_cn%22%3B; DOMAIN=192.168.239.1");

	web_url("index.php", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=assets/a8aef226/jquery.min.js", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/site/login", ENDITEM, 
		"Url=themes/classic/assets/images/blue/seperate_line.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/site/login", ENDITEM, 
		"Url=themes/classic/assets/images/blue/logo_login.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/site/login", ENDITEM, 
		LAST);

	web_submit_form("login", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=admin", ENDITEM, 
		"Name=LoginForm[password]", "Value=123456", ENDITEM, 
		"Name=LoginForm[language]", "Value=简体中文", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=<OFF>", ENDITEM, 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/css/form.css", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/811484cb/img/page.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", ENDITEM, 
		LAST);

	web_submit_data("getProductModule", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("edit", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a7f481c7/themes/default/default.css", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a7f481c7/themes/default/default.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/814c4f7b/indicator.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(77);

	web_submit_data("edit_2", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=BugInfoView[title]", "Value=没有回到顶部", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=BugInfoView[assign_to_name]", "Value=系统管理员", ENDITEM, 
		"Name=BugInfoView[mail_to]", "Value=系统管理员,", ENDITEM, 
		"Name=BugInfoView[severity]", "Value=1", ENDITEM, 
		"Name=BugInfoView[priority]", "Value=1", ENDITEM, 
		"Name=Custom[BugType]", "Value=代码错误", ENDITEM, 
		"Name=Custom[HowFound]", "Value=功能测试", ENDITEM, 
		"Name=Custom[BugOS]", "Value=全部", ENDITEM, 
		"Name=Custom[BugBrowser]", "Value=全部", ENDITEM, 
		"Name=Custom[OpenedBuild]", "Value=3.0.3", ENDITEM, 
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM, 
		"Name=Custom[BugSubStatus]", "Value=", ENDITEM, 
		"Name=Custom[BugMachine]", "Value=", ENDITEM, 
		"Name=Custom[BugKeyword]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_case]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_result]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=BugInfoView[action_note]", "Value=", ENDITEM, 
		"Name=BugInfoView[repeat_step]", "Value=[步骤]<br />\r\n1.推荐页面连续下滑<br />\r\n<br />\r\n[结果]<br />\r\n没有出现回到顶部<br />\r\n[期望]<br />\r\n右下角出现回到顶部<br />\r\n[备注]<br />\r\n<br />", ENDITEM, 
		LAST);

	web_url("1", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree3.0.3/assets/811484cb/img/page.gif", ENDITEM, 
		LAST);

	web_link("没有回到顶部", 
		"Text=没有回到顶部", 
		"Ordinal=1", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getPreNextId?id=1147&type=bug&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/1147", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("1147", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/1147", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/active.png", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", ENDITEM, 
		LAST);

	web_url("getPreNextId_2", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getPreNextId?id=1147&type=bug&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/1147", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
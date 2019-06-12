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

	web_url("1", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/bug/list/1", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_2", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("edit", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a7f481c7/themes/default/default.css", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a7f481c7/themes/default/default.png", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		"Url=/bugfree3.0.3/assets/814c4f7b/indicator.gif", "Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", ENDITEM, 
		LAST);

	lr_think_time(59);

	web_submit_data("edit_2", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/info/edit?type=case&action=opened&product_id=1", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=CaseInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=CaseInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=CaseInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=CaseInfoView[title]", "Value=电台播放时进度条是否移动", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=CaseInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=CaseInfoView[case_status]", "Value=Active", ENDITEM, 
		"Name=CaseInfoView[assign_to_name]", "Value=系统管理员", ENDITEM, 
		"Name=CaseInfoView[mail_to]", "Value=系统管理员,", ENDITEM, 
		"Name=CaseInfoView[priority]", "Value=1", ENDITEM, 
		"Name=Custom[CaseType]", "Value=功能", ENDITEM, 
		"Name=Custom[CaseMethod]", "Value=手动执行", ENDITEM, 
		"Name=Custom[CasePlan]", "Value=功能测试", ENDITEM, 
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
		"Name=CaseInfoView[case_step]", "Value=[步骤]<br />\r\n1.打开电台<br />\r\n2.打开《魔兽世界》<br />\r\n3.点击播放<br />\r\n4.成功播放<br />\r\n[验证]<br />\r\n进度条是否移动<br />\r\n[备注]<br />\r\n<br />", ENDITEM, 
		LAST);

	web_url("1_2", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/themes/classic/assets/images/down.gif", ENDITEM, 
		"Url=/bugfree3.0.3/themes/classic/assets/images//close_div.gif", ENDITEM, 
		"Url=/bugfree3.0.3/assets/811484cb/img/page.gif", ENDITEM, 
		LAST);

	web_link("电台播放时进度条是否移动", 
		"Text=电台播放时进度条是否移动", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getPreNextId?id=7&type=case&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/7", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("getProductModule_3", 
		"Action=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_url("7", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/7", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/list/1", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", ENDITEM, 
		"Url=/bugfree3.0.3/assets/a8aef226/jui/css/base/images/ui-icons_222222_256x240.png", ENDITEM, 
		LAST);

	web_url("getPreNextId_2", 
		"URL=http://192.168.239.1:8032/bugfree3.0.3/index.php/search/getPreNextId?id=7&type=case&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.239.1:8032/bugfree3.0.3/index.php/case/7", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
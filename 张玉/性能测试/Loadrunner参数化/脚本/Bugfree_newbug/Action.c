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
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("jquery.min.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("blue.css", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/blue.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("bugfree3_basic.css", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/bugfree3_basic.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("favicon_blue.ico", 
		"URL=http://192.168.109.1:8032/bugfree/favicon_blue.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("jquery.min.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t3.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("seperate_line.png", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/blue/seperate_line.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("logo_login.png", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/blue/logo_login.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t7.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(8);

	web_submit_data("login", 
		"Action=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/site/login", 
		"Snapshot=t9.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=admin", ENDITEM, 
		"Name=LoginForm[password]", "Value=123456", ENDITEM, 
		"Name=LoginForm[language]", "Value=zh_cn", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=0", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("form.css", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/form.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("style.css", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("overlib.js", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/overlib.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("main.js", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/main.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("jquery.autocomplete.css", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.autocomplete.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("zTreeStyle.css", 
		"URL=http://192.168.109.1:8032/bugfree/assets/c4a5a759/zTreeStyle.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("thickbox.css", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/thickbox.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("jquery-ui.css", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/jquery-ui.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("jquery.bgiframe.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jquery.bgiframe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("jquery.ztree.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/c4a5a759/jquery.ztree.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("jquery.ajaxQueue.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.ajaxQueue.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("jquery.cookie.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.cookie.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("json2.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/json2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("jquery.autocomplete.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.autocomplete.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("jquery.tools.min.js", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/jquery.tools.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("jquery.form.js", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/jquery.form.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("logo.png", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/blue/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("close_div.gif", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/close_div.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("add.gif", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/add.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("create_down.gif", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/create_down.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("add_search.gif", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/add_search.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("flag_1.gif", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/flag_1.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("jquery-ui.min.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/js/jquery-ui.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("late_left.gif", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/late_left.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t35.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("form.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/form.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("down.gif", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/down.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t34.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("active.png", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/active.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("close_div.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images//close_div.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("ui-bg_flat_75_ffffff_40x100.png", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("ui-bg_highlight-soft_75_cccccc_1x100.png", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("ui-icons_222222_256x240.png", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t40.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("getProductModule", 
		"Action=http://192.168.109.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("page.gif", 
		"URL=http://192.168.109.1:8032/bugfree/assets/c4a5a759/img/page.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("edit", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t43.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("style.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/style.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("overlib.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/overlib.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("form.css_3", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/form.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("bugfree3_basic.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/bugfree3_basic.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("main.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/main.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("jquery.min.js_3", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("thickbox.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/thickbox.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("jquery.autocomplete.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.autocomplete.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("jquery-ui.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/jquery-ui.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("jquery.multifile.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jquery.multifile.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("jquery.bgiframe.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jquery.bgiframe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("jquery.ajaxQueue.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.ajaxQueue.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("jquery.cookie.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.cookie.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("json2.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/json2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("jquery.autocomplete.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/jquery.autocomplete.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("kindeditor-min.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/a2a4058f/kindeditor-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("zh_CN.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/a2a4058f/lang/zh_CN.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("preview.js", 
		"URL=http://192.168.109.1:8032/bugfree/assets/a2a4058f/plugins/preview/preview.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("jquery.tools.min.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/jquery.tools.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("jquery.form.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/js/jquery.form.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("blue.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/css/blue.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("logo.png_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/blue/logo.png", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		LAST);

	web_url("jquery-ui.min.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/js/jquery-ui.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t65.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("active.png_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/active.png", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ui-bg_flat_75_ffffff_40x100.png_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_flat_75_ffffff_40x100.png", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		LAST);

	web_url("ui-bg_highlight-soft_75_cccccc_1x100.png_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/images/ui-bg_highlight-soft_75_cccccc_1x100.png", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		LAST);

	web_url("ui-icons_222222_256x240.png_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/65cb0d52/jui/css/base/images/ui-icons_222222_256x240.png", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		LAST);

	web_url("default.css", 
		"URL=http://192.168.109.1:8032/bugfree/assets/a2a4058f/themes/default/default.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("default.png", 
		"URL=http://192.168.109.1:8032/bugfree/assets/a2a4058f/themes/default/default.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("indicator.gif", 
		"URL=http://192.168.109.1:8032/bugfree/assets/f94ed65d/indicator.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t68.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(19);
    
	lr_start_transaction("newbug");

	web_submit_data("edit_2", 
		"Action=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/info/edit?type=bug&action=opened&product_id=1", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=BugInfoView[deleted_file_id]", "Value=", ENDITEM, 
		"Name=BugInfoView[lock_version]", "Value=", ENDITEM, 
		"Name=BugInfoView[product_id]", "Value=1", ENDITEM, 
		"Name=isPageDirty", "Value=1", ENDITEM, 
		"Name=templateTitle", "Value=", ENDITEM, 
		"Name=BugInfoView[title]", "Value={BugInfoView}", ENDITEM, 
		"Name=layer1_module", "Value=0", ENDITEM, 
		"Name=BugInfoView[productmodule_id]", "Value=0", ENDITEM, 
		"Name=BugInfoView[assign_to_name]", "Value=系统管理�\x98", ENDITEM, 
		"Name=BugInfoView[mail_to]", "Value=", ENDITEM, 
		"Name=BugInfoView[severity]", "Value={severity}", ENDITEM, 
		"Name=BugInfoView[priority]", "Value=", ENDITEM, 
		"Name=Custom[BugType]", "Value={BugType}", ENDITEM, 
		"Name=Custom[HowFound]", "Value={HowFound}", ENDITEM, 
		"Name=Custom[BugOS]", "Value=", ENDITEM, 
		"Name=Custom[BugBrowser]", "Value=", ENDITEM, 
		"Name=Custom[OpenedBuild]", "Value={OpenedBuild}", ENDITEM, 
		"Name=Custom[ResolvedBuild]", "Value=", ENDITEM, 
		"Name=Custom[BugSubStatus]", "Value=", ENDITEM, 
		"Name=Custom[BugMachine]", "Value=", ENDITEM, 
		"Name=Custom[BugKeyword]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_bug]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_case]", "Value=", ENDITEM, 
		"Name=BugInfoView[related_result]", "Value=", ENDITEM, 
		"Name=attachment_file[]", "Value=", "File=Yes", ENDITEM, 
		"Name=BugInfoView[action_note]", "Value=", ENDITEM, 
		"Name=BugInfoView[repeat_step]", "Value=[步骤]<br />\r\n1.<br />\r\n2.<br />\r\n<br />\r\n[结果]<br />\r\n<br />\r\n[期望]<br />\r\n<br />\r\n[备注]<br />\r\n<br />", ENDITEM, 
		LAST);
	
	web_reg_find("Text=Case",
		LAST);

	
	lr_end_transaction("newbug", LR_AUTO);

	web_url("1143", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/bug/1143", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("BugFree", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getPreNextId", 
		"URL=http://192.168.109.1:8032/bugfree/index.php/search/getPreNextId?id=1143&type=bug&product_id=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/1143", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("zTreeStyle.css_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/c4a5a759/zTreeStyle.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("jquery.ztree.js_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/c4a5a759/jquery.ztree.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t74.inf", 
		LAST);

	web_url("add.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/add.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_url("add_search.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/add_search.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_url("close_div.gif_3", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/close_div.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_url("flag_1.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/flag_1.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_url("create_down.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/create_down.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_url("late_left.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/late_left.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_concurrent_start(NULL);

	web_url("down.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images/down.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_url("close_div.gif_4", 
		"URL=http://192.168.109.1:8032/bugfree/themes/classic/assets/images//close_div.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	web_concurrent_end(NULL);

	web_submit_data("getProductModule_2", 
		"Action=http://192.168.109.1:8032/bugfree/index.php/search/getProductModule", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=product_id", "Value=1", ENDITEM, 
		"Name=productmodule_id", "Value=0", ENDITEM, 
		LAST);

	web_url("page.gif_2", 
		"URL=http://192.168.109.1:8032/bugfree/assets/c4a5a759/img/page.gif", 
		"Resource=1", 
		"Referer=http://192.168.109.1:8032/bugfree/index.php/bug/list/1", 
		LAST);

	return 0;
}
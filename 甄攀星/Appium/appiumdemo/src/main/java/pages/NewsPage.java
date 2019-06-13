package pages;

import org.openqa.selenium.support.PageFactory;

import javax.swing.Action;

import io.appium.java_client.android.AndroidDriver;
/*
作者：甄攀星
内容：新闻页面
 */
public class NewsPage {
    AndroidDriver driver;
    Action action;

    public NewsPage(AndroidDriver driver)
    {
        this.driver=driver;
    }

}

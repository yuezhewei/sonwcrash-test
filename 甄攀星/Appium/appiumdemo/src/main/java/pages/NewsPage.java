package pages;

import org.openqa.selenium.support.PageFactory;

import javax.swing.Action;

import io.appium.java_client.android.AndroidDriver;

public class NewsPage {
    AndroidDriver driver;
    Action action;

    public NewsPage(AndroidDriver driver)
    {
        this.driver=driver;
    }

}

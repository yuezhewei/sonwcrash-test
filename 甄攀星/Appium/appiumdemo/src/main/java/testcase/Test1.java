package testcase;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.BeforeSuite;
import org.testng.annotations.Test;

import java.awt.Button;
import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.concurrent.TimeUnit;

import io.appium.java_client.android.AndroidDriver;
import swipe.*;

import static org.seleniumhq.jetty9.util.LazyList.contains;

public class Test1 {
    public AndroidDriver<WebElement> driver;

    public AndroidDriver getDriver() {
        return driver;
    }
    public Button anniu;
    @Test
    public void StartApp() throws IOException {
        File classpathRoot = new File(System.getProperty("user.dir"));

        File appDir = new File(classpathRoot, "/apps");

        File app = new File(appDir.getCanonicalPath(), "SnowCrash.apk");

        DesiredCapabilities capabilities = new DesiredCapabilities();

        capabilities.setCapability("deviceName", "127.0.0.1:62001");
//        capabilities.setCapability("app", app.getAbsolutePath());


        capabilities.setCapability("appPackage", "cn.edu.hebtu.software.snowcarsh2");

        capabilities.setCapability("appActivity", ".activity.startActvity.WelcomeActivity");

        driver = new AndroidDriver<WebElement>(new URL("http://127.0.0.1:4723/wd/hub"), capabilities);
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        SwipeClass swipeClass=new SwipeClass();
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
//        swipeClass.swipeToLeft(driver);
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);

        driver.findElementById("startButton").click();
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
//        driver.findElementsByAccessibilityId("新闻");


//        driver.findElementByXPath("android.support.v7.app.ActionBar$Tab{新闻}").click();
//        driver.findElementByXPath("//android.widget.TextView[contains(@index,0)]").click();
//        driver.findElementByXPath("//android.support.v7.app.ActionBar$Tab/android.widget.TextView[contains(@text,'新闻')]").click();
//        driver.findElementByLinkText("电台").click();
//        driver.findElementByAndroidUIAutomator("新闻").click();
//        driver.findElementByName("新闻").click();
//        driver.findElementByXPath("//android:id/tabhost/android.widget.LinearLayout/android.widget.HorizontalScrollView/android.widget.LinearLayout/android.support.v7.app.ActionBar$Tab/android.widget.TextView").click();
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/content").click();

    }



}

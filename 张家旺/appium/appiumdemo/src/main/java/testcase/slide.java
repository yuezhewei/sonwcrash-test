
package testcase;
/*
author:zhang jiawang
连续多次各方向滑动查看内容
*/
import org.openqa.selenium.By;
import org.testng.Assert;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.Test;

import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.concurrent.TimeUnit;

import io.appium.java_client.android.AndroidDriver;
import swipe.*;
public class slide{
    public AndroidDriver<WebElement> driver;

    public AndroidDriver getDriver() {
        return driver;
    }


    @Test
    public void StartApp() throws IOException, InterruptedException {
        File classpathRoot = new File(System.getProperty("user.dir"));

        File appDir = new File(classpathRoot, "/apps");

        File app = new File(appDir.getCanonicalPath(), "SnowCrash.apk");

        DesiredCapabilities capabilities = new DesiredCapabilities();

        capabilities.setCapability("deviceName", "127.0.0.1:62001");

        capabilities.setCapability("appPackage", "cn.edu.hebtu.software.snowcarsh2");

        capabilities.setCapability("appActivity", ".activity.startActvity.WelcomeActivity");

        driver = new AndroidDriver<WebElement>(new URL("http://127.0.0.1:4723/wd/hub"), capabilities);
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        SwipeClass swipeClass=new SwipeClass();
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToRight(driver);
        swipeClass.swipeToRight(driver);
        swipeClass.swipeToRight(driver);
        driver.manage().timeouts().implicitlyWait(3, TimeUnit.SECONDS);
        driver.findElementById("startButton").click();
        Thread.sleep(3000);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/tv_title").click();
        Thread.sleep(3000);
        swipeClass.swipeToUp(driver);
        driver.findElement(By.className("android.view.View")).click();

    }
}



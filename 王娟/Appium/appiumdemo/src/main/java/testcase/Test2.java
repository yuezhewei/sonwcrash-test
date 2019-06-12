package testcase;

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
public class Test2 {
    public AndroidDriver<WebElement> driver;

    public AndroidDriver getDriver() {
        return driver;
    }

    //首页连续上滑操作+打开一条新闻进行点赞操作【需要手动转换成竖屏才能执行】

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
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        driver.findElementById("startButton").click();

        //app反应比较慢，需要进行等待操作
        Thread.sleep(5000);

        //连续上滑操作（成功）
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);

        //点进一条新闻（成功）
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/tv_title").click();
        //app反应比较慢，需要进行等待操作
        Thread.sleep(5000);
        //上滑（成功）
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        //查看图片（成功）
        driver.findElement(By.className("android.view.View")).click();

    }
}



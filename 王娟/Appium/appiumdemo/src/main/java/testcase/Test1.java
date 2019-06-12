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
public class Test1 {
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
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        driver.findElementById("startButton").click();

        //等待app响应
        try{
            Thread.sleep(5000);
        }catch(InterruptedException e){
            e.printStackTrace();
        }

        //连续上滑操作
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        //连续下滑操作
        swipeClass.swipeToDown(driver);
        swipeClass.swipeToDown(driver);
        swipeClass.swipeToDown(driver);
        //左滑
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        //右滑
        swipeClass.swipeToRight(driver);
        swipeClass.swipeToRight(driver);
        swipeClass.swipeToRight(driver);

        //点击滚动新闻（成功）
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/index_horizontal_list_image").click();
        //等待
        Thread.sleep(3000);
        //上滑找到点赞（不一定成功，因为app实时更新，不一定打开同一条新闻）
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        //点赞（不一定成功，同上）
        driver.findElement(By.className("android.view.View")).click();

        //点击主持人四十二（失败）
        //一整个网页视图导致无法定位

        //断言
        //Assert.assertEquals(".MainActivity",getDriver().currentActivity());

    }
}



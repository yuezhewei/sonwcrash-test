package testcase;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;

import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.concurrent.TimeUnit;

import io.appium.java_client.android.AndroidDriver;
import swipe.SwipeClass;

public class Test {
    public AndroidDriver<WebElement> driver;

    public AndroidDriver getDriver() {
        return driver;
    }

    @org.testng.annotations.Test
    public void StartApp() throws IOException, InterruptedException {
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
        SwipeClass swipeClass = new SwipeClass();
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        driver.findElementById("startButton").click();
        Thread.sleep(3000);
        //driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/image").click();
        //点击搜索
        driver.findElementByXPath("//*[@text='搜索']").click();
        Thread.sleep(3000);
        //driver.findElementById("").sendKeys("主流孩子");
        driver.findElementByXPath("//*[@text='删除历史记录']").click();
    }
}

package testcase;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.BeforeClass;
import org.testng.annotations.BeforeSuite;
import org.testng.annotations.Test;

import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.concurrent.TimeUnit;

import base.BaseTest1;
import io.appium.java_client.android.AndroidDriver;
import swipe.*;
public class Login extends BaseTest1 {
    public AndroidDriver<WebElement> driver;

    public AndroidDriver getDriver() {
        return driver;
    }
    //    @BeforeClass
//    public void start() throws IOException {
//        this.StartApp();
//    }
    @Test
    public void loginApp() throws IOException {
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
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/startButton").click();
        driver.findElementByClassName("android.widget.ImageButton").click();
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/icon_image").click();
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_username").sendKeys("admin");
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_password").sendKeys("admin");
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_login").click();
    }
}

package testcase;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.Test;

import java.awt.Button;
import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.concurrent.TimeUnit;

import io.appium.java_client.android.AndroidDriver;
public class searchtest1 {
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
        capabilities.setCapability("app", app.getAbsolutePath());


        capabilities.setCapability("appPackage", "cn.edu.hebtu.software.snowcarsh2");

        capabilities.setCapability("appActivity", ".activity.startActvity.WelcomeActivity");

        driver = new AndroidDriver<WebElement>(new URL("http://127.0.0.1:4723/wd/hub"), capabilities);
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);//等待方式
        SwipeClass swipeClass = new SwipeClass();
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
//        swipeClass.swipeToLeft(driver);
//     swipeClass.swipeToLeft(driver);拖动太快可以适当增加次数
//        swipeClass.swipeToLeft(driver);
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        driver.findElementByLinkText("立即体验").click();

        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/image").click();
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        driver.findElementsById("cn.edu.hebtu.software.snowcarsh2:id/search_src_text");

    }
    }

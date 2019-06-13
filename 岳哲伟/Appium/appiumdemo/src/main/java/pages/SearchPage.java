package pages;
//使用此代码进入安装下载app并进入到搜索页面
import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.AfterSuite;
import org.testng.annotations.BeforeSuite;
import org.testng.annotations.BeforeTest;

import java.awt.Button;
import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.concurrent.TimeUnit;

import io.appium.java_client.android.AndroidDriver;
import swipe.SwipeClass;

public class SearchPage {
    public AndroidDriver<WebElement> driver;

    public AndroidDriver getDriver() {
        return driver;
    }
    public Button anniu;
    @BeforeSuite
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
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);//隐式等待
        driver.findElementByLinkText("立即体验").click();


    }
    @BeforeTest
    public void toSearch(){

        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/image").click();//进入首页后点击搜索

    }
    @AfterSuite
    public void stopApp(){
        driver.quit();
    }
    }

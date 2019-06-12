package base;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.Assert;
import org.testng.annotations.BeforeSuite;
import org.testng.annotations.Test;

import java.awt.Button;
import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.concurrent.TimeUnit;

import io.appium.java_client.android.AndroidDriver;
import utils.*;

public class BaseTest2 {
    public AndroidDriver<WebElement> driver;
    public AndroidDriver getDriver() {
        return driver;
    }
//    public Button anniu;
    @BeforeSuite
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
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        driver.findElementById("startButton").click();
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
        //新闻菜单下
//        swipeClass.swipeToLeft(driver);
        //首页下
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/index_horizontal_list_image").click();
//        swipeClass.swipeToDown(driver);
//        swipeClass.swipeToDown(driver);
//        swipeClass.swipeToDown(driver);
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/iv_img").click();
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/tv_content").click();
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/tv_title").click();

//        swipeClass.swipeToDown(driver);
        //电台菜单下
//        swipeClass.swipeToLeft(driver);
//        swipeClass.swipeToLeft(driver);
//        swipeClass.swipeToLeft(driver);
//        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
//        swipeClass.swipeToDown(driver);
//        swipeClass.swipeToDown(driver);
//        swipeClass.swipeToDown(driver);
        //点击电台
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/radio_image").click();
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/mp3_next").click();
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/mp3_play").click();
        // WebElement w1=driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/page_layout");
        //登录注册
        driver.findElementByAccessibilityId("转到上一层级").click();
//        driver.findElementByClassName("http://www.jszg.edu.com/").click();
        //点击Friends
//        driver.findElementByAccessibilityId("Friends").click();
//        driver.findElementByAccessibilityId("转到上一层级").click();
//        driver.findElementByClassName("android.widget.ImageButton").click();
        driver.manage().timeouts().implicitlyWait(5, TimeUnit.SECONDS);
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/icon_image").click();
        //注册因为有验证码
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_register").click();
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_phone").sendKeys("15732176510");
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_code").sendKeys("123456");
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_anotherName").sendKeys("123456");
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_pwd").sendKeys("123456");
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_register").click();
//        WebElement w=driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/rel");
//        Assert.assertTrue(w.getText().contains("请填写正确手机号码"));
        //获取验证码
        //        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_getVerificationCode").click();
//        //遇到问题
//        WebElement w2=driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/root");

//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_que").click();
//        driver.findElementByXPath("//*[@text='忘记密码']").click();
////        Assert.assertTrue(w2.getText().contains("你选择了，忘记密码"));
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_que").click();
//        driver.findElementByXPath("//*[@text='忘记用户名']").click();
////        Assert.assertTrue(w2.getText().contains("你选择了，忘记用户名"));
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_que").click();
//        driver.findElementByXPath("//*[@text='咨询客服']").click();
//        Assert.assertTrue(w2.getText().contains("你选择了，咨询客服"));
        //登录
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_username").sendKeys("15732176510");
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_password").sendKeys("zhen0820");
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_login").click();

        //新闻第一条可以换成长按
//        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/tv_nickname").click();

//        driver.findElementByAccessibilityId("新闻");
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

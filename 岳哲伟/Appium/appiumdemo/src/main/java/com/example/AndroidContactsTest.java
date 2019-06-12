package com.example;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;

import java.io.File;
import java.net.URL;
import java.util.List;

import io.appium.java_client.AppiumDriver;
import io.appium.java_client.android.AndroidDriver;
import io.appium.java_client.android.AndroidElement;

public class AndroidContactsTest {

    //Driver
    private AppiumDriver<AndroidElement> driver;


    /**
     * 配置启动driver
     * @throws Exection
     */
    @Before
    public void setUp() throws Exception {

        File classpathRoot = new File(System.getProperty("user.dir"));
        //app的目录
        File appDir = new File(classpathRoot, "/src/main/java/apps/");
        //app的名字，对应你apps目录下的文件
        File app = new File(appDir, "ContactManager.apk");
        //创建Capabilities
        DesiredCapabilities capabilities = new DesiredCapabilities();
        //设置要调试的模拟器的名字
        capabilities.setCapability("deviceName","minote");
        //设置模拟器的系统版本
        capabilities.setCapability("platformVersion", "4.4.2");
        //设置app的路径
        capabilities.setCapability("app", app.getAbsolutePath());
        //设置app的包名
        capabilities.setCapability("appPackage", "com.example.android.contactmanager");
        //设置app的启动activity
        capabilities.setCapability("appActivity", ".ContactManager");
        //启动driver
        driver = new AndroidDriver<>(new URL("http://127.0.0.1:4723/wd/hub"), capabilities);

    }

    @After
    public void tearDown() throws Exception {
        //测试完毕，关闭driver，不关闭将会导致会话还存在，下次启动就会报错
        driver.quit();
    }


    /**
     * 要执行的的测试方法
     */
    @Test
    public void addContact(){
        //利用Xpath的方法寻找text值为Add Contact的控件
        WebElement el = driver.findElement(By.xpath(".//*[@text='Add Contact']"));
        //点击这个控件
        el.click();
        //利用类名获取界面上所有的EditText
        List<AndroidElement> textFieldsList = driver.findElementsByClassName("android.widget.EditText");
        //第一个EditText输入内容Some Name
        textFieldsList.get(0).sendKeys("Some Name");
        //第三个EditText输入内容Some Name
        textFieldsList.get(2).sendKeys("Some@example.com");
        //在坐(100,500)滑动到(100,100) 时间为2毫秒

        //用xpath的方式寻找到text值为Save的控件，然后点击
        driver.findElementByXPath(".//*[@text='Save']").click();
    }
}
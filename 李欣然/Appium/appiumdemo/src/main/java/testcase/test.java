package testcase;

import org.openqa.selenium.WebDriver;
import org.testng.annotations.Test;

import java.nio.file.WatchEvent;
import java.util.List;
import java.util.concurrent.TimeUnit;
import utils.Actions;
import base.BaseTest2;
import io.appium.java_client.TouchAction;
import io.appium.java_client.android.AndroidElement;
import io.appium.java_client.touch.LongPressOptions;
import io.appium.java_client.touch.offset.PointOption;
import swipe.SwipeClass;

public class test extends BaseTest2 {
    //滑动新闻条
    @Test
    public void testswipswip0(){
        SwipeClass swipeClass=new SwipeClass();
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
    }
    //上滑
    @Test
    public void test(){
       // List lis = driver.findElementsByAndroidUIAutomator("new UiSelector().className("+"android.widget.ImageView"+").index(4)");
        //List lis = driver.findElementsByAndroidUIAutomator("new UiSelector().className("+"android.widget.LinearLayout"+").indexOf(3)");
       //test2 te = new test2();
      // TouchAction op = new TouchAction(driver);
      // op.swip(432,1202,575,1280,10);
        SwipeClass swipeClass=new SwipeClass();
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
    }
    //上滑，随机点击新闻
    @Test
    public void test1(){
        SwipeClass swipeClass=new SwipeClass();
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        swipeClass.swipeToUp(driver);
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/tv_title") .click();
        driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
        SwipeClass swipeClass1=new SwipeClass();
        swipeClass1.swipeToUp(driver);
        swipeClass1.swipeToUp(driver);
        swipeClass1.swipeToUp(driver);
    }
    @Test    //点击吉考斯
    public void test2(){
        Actions act = new Actions(driver);
       act.getElementByIndex(3).click();
}
    @Test
   public void test3(){
      //Actions act = new Actions(driver);
       //ct.getElementsByClassAndIndexAndClickable("android.widget.ImageButton",1);




        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/icon_image").click();
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_username").sendKeys("15102558961");
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_password").sendKeys("323841");
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_login").click();




}
}
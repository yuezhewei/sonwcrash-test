package testcase;

import org.openqa.selenium.WebDriver;
import org.testng.annotations.Test;

import java.nio.file.WatchEvent;
import java.util.List;

import base.BaseTest2;
import io.appium.java_client.TouchAction;
import io.appium.java_client.android.AndroidElement;
import io.appium.java_client.touch.LongPressOptions;
import io.appium.java_client.touch.offset.PointOption;
import swipe.SwipeClass;

public class test extends BaseTest2 {
    @Test
    public void testswipswipp0(){
        SwipeClass swipeClass=new SwipeClass();
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
        swipeClass.swipeToLeft(driver);
    }
    @Test
    public void test(){
       // List lis = driver.findElementsByAndroidUIAutomator("new UiSelector().className("+"android.widget.ImageView"+").index(4)");
        //List lis = driver.findElementsByAndroidUIAutomator("new UiSelector().className("+"android.widget.LinearLayout"+").indexOf(3)");
       test2 te = new test2();
       TouchAction op = new TouchAction(driver);
       TouchAction per=op.press((PointOption) te.getElementByIndex(3)).perform();
    }
}

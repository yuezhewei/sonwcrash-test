package testcase;
/*
author:zhang jiawang
*/

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

public class jikaosi extends BaseTest {

    @Test    //点击吉考斯
    public void jikaosi(){
        Actions act = new Actions(driver);
       act.getElementByIndex(3).click();
}


}
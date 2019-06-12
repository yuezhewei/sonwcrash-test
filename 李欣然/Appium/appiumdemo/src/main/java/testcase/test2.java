package testcase;

import org.openqa.selenium.WebElement;
import java.util.List;
import io.appium.java_client.android.AndroidDriver;
public class  test2{
    public AndroidDriver<WebElement> driver;

    public List getElementsByClassAndIndexAndClickable(String classname,int index){
        List lis =null;
        lis = driver.findElementsByAndroidUIAutomator("new UiSelector().className("+classname+").index("+index+").clickable(true)");
        return lis;
    }
    public WebElement getElementByIndex(int index){
        return driver.findElementByAndroidUIAutomator("new UiSelector().index("+index+")");
    }

}

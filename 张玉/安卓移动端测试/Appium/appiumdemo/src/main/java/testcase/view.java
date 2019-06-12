package testcase;

import com.example.appiumdemo.AndroidCreateSessionTest;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.remote.DesiredCapabilities;
import org.testng.annotations.BeforeClass;

import java.io.File;
import java.net.URL;

import io.appium.java_client.android.AndroidDriver;

public class view {
        private AndroidDriver<WebElement> driver;
        @BeforeClass
        public void setUp() throws Exception{
            File classpathRoot=new File(System.getProperty("user.dir"));
            File appDir=new File(classpathRoot,"");
            File app=new File(appDir.getCanonicalPath(),"");
            DesiredCapabilities capabilities=new DesiredCapabilities();
            capabilities.setCapability("deviceName","");
            capabilities.setCapability("app","");
            capabilities.setCapability("appPackage","");
            capabilities.setCapability("appActivity","");
            driver=new AndroidDriver<WebElement>(new URL(""),capabilities);

        }
}

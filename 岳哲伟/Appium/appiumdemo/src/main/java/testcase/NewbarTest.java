package testcase;

import org.testng.annotations.Test;

import base.BaseTesttest;
import pages.HomePage;

public class NewbarTest extends BaseTesttest {
    @Test
    public void openNewBar()
    {
        HomePage homePage=new HomePage(getDriver());
        driver.findElementByClassName("android.widget.TextView");


    }


}

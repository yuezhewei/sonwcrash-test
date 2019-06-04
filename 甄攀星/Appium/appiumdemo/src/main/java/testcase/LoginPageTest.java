package testcase;

import org.testng.Assert;
import org.testng.annotations.Test;

import base.BaseTest2;
import pages.LoginPage;

public class LoginPageTest extends BaseTest2 {
    @Test
    public void loginsuccessful()
    {
        LoginPage loginPage=new LoginPage(getDriver());
        loginPage.login("15732176510","zhen0820");

        //断言
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
}

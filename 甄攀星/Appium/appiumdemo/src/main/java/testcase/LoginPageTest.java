package testcase;

import org.testng.Assert;
import org.testng.annotations.DataProvider;
import org.testng.annotations.Test;

import java.io.IOException;

import base.BaseTest2;
import dataprovider.NSDataProvider;
import dataprovider.TxtDataProvider;
import pages.LoginPage;

public class LoginPageTest extends BaseTest2 {

    @Test
    public void loginsuccessful()
    {
        LoginPage loginPage=new LoginPage(getDriver());
        loginPage.login("15732176510","zhen0820");
        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }
//    @DataProvider(name ="txt" )
//    public  Object [][] getData(){
//        return new Object[][]{{"15732176510","zhen0820"}};
//    }

    @DataProvider(name="txt")
    public  Object[][] getTxtData() throws IOException {
        return new TxtDataProvider().getTxtUser("data/user.txt");
    }
    @Test(dataProvider = "txt")
    public void driverLogin(String user,String pwd)
    {
//        System.out.print(user);
        LoginPage loginPage=new LoginPage(getDriver());
        loginPage.login(user,pwd);

    }

//    @Test(description = "用户名正确，密码错误")
//    public void loginfail1()
//    {
//
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.login("15732176510","111111");
//        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
//    }
//    @Test(description = "用户名空，密码正确")
//    public void loginfail2()
//    {
//
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.login("","zhen0820");
//        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
//    }
//    @Test(description = "用户名正确，密码为空")
//    public void loginfail3()
//    {
//
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.login("15732176510","");
//        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
//    }
//    @Test(description = "用户名密码都为空")
//    public void loginfail4()
//    {
//
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.login("","");
//        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
//    }
//    @Test(description = "用户名手机格式不正确")
//    public void loginfail5()
//    {
//
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.login("11111111111","");
//        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
//    }
//    @Test(description = "用户名手机格式不正确")
//    public void loginfail6()
//    {
//
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.login("1573217651","123456");
//        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
//    }
//
//    @Test(description = "遇到问题")
//    public void meetquestionSuccessful()
//    {
//
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.meetQuestion();
//        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
//    }
//    @Test(description = "未获的验证码的失败注册")
//    public void registerFail()
//    {
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.register("15732176510","123456","123456","123456");
//        Assert.assertEquals(getDriver().currentActivity(),".activity.login.RegisterActivity");
//    }
//    .RegisterActivity
//    @Test(description = "未获的验证码的失败注册")
//    public void registerFail1()
//    {
//        LoginPage loginPage=new LoginPage(getDriver());
//        loginPage.register("111111111111","123456","123456","123456");
//        Assert.assertEquals(getDriver().currentActivity(),".RegisterActivity");
//    }
}

package testcase;
/*
author:zhang jiawang
*/
import org.testng.Assert;
import org.testng.annotations.Test;

import base.BaseTest;
import pages.LoginPage;
import pages.LoginPage2;

public class LoginPageTest extends BaseTest {

//登录成功操作
    @Test
    public void loginsuccessful()
    {
        LoginPage loginPage=new LoginPage(getDriver());
        LoginPage2 loginPage=new LoginPage2(getDriver());
        loginPage.login("111111","111111");
        System.out.print(getDriver().currentActivity);
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
    }
//登录失败的几种情况测试
    @DataProvider(name ="txt" )
    public  Object [][] getData(){
       return new Object[][]{{"111111","111111"}};
  }

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
    @Test(description = "用户名密码都为空")
    public void loginfail1()
    {

        LoginPage loginPage=new LoginPage(getDriver());
        loginPage.login("","");
        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }

  @Test(description = "用户名正确，密码错误")
   public void loginfail2()
   {

        LoginPage loginPage=new LoginPage(getDriver());
       loginPage.login("111111","1");
       Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }
    @Test(description = "用户名空，密码正确")
   public void loginfail3()
    {

        LoginPage loginPage=new LoginPage(getDriver());
        loginPage.login("","111111");
       Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }
   @Test(description = "用户名正确，密码为空")
   public void loginfail4()
   {

        LoginPage loginPage=new LoginPage(getDriver());
        loginPage.login("111111","");
        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }


    }

}

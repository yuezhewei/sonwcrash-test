package testcase;

import org.testng.Assert;
import org.testng.annotations.Test;

import base.BaseTest;
import pages.LoginPage;

/*
    刘江
    登录测试用例
*/

public class LoginTest extends BaseTest {
    @Test(description = "登录成功")
    public void login(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.username.sendKeys("admin");
        lp.password.sendKeys("admin");
        lp.login.click();
        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }

    @Test(description = "密码为空登录")
    public void loginfail1(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.username.sendKeys("admin");
        lp.password.sendKeys("");
        lp.login.click();
        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }
    @Test(description = "用户名为空登录")
    public void loginfail2(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.username.sendKeys("");
        lp.password.sendKeys("admin");
        lp.login.click();
        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }

    @Test(description = "用户名密码都为空")
    public void loginfail3(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.username.sendKeys("");
        lp.password.sendKeys("");
        lp.login.click();
        Assert.assertEquals(getDriver().currentActivity(),".MainActivity");
    }

    @Test(description = "注册")
    public void register(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.register.click();
        lp.phone.sendKeys("15226527805");
        lp.getCode.click();
        lp.code.sendKeys("1234");
        lp.aName.sendKeys("admin1");
        lp.aPwd.sendKeys("admin1");
        lp.btnR.click();
    }

    @Test(description = "忘记密码")
    public void forgetPassword(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.que.click();
        lp.forgetpwd.click();
    }

    @Test(description = "忘记用户名")
    public void forgetusername(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.que.click();
        lp.forgetuser.click();
    }

    @Test(description = "咨询客服")
    public void consult(){
        LoginPage lp = new LoginPage(driver);
        lp.IButton.click();
        lp.image.click();
        lp.que.click();
        lp.consult.click();
    }
}

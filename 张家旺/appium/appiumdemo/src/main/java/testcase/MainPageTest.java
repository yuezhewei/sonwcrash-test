package testcase;
/*
author:zhang jiawang
打开主页面
弹出提示语
*/
import org.testng.Assert;
import org.testng.annotations.Test;

import MainPage.MainPage;
import base.BaseTest;

public class MainPageTest extends BaseTest {
    @Test
    public void addSuccessful()
    {
        MainPage mainPage=new MainPage(getDriver());
        mainPage.add("welcome");
        System.out.print(getDriver().currentActivity());
        Assert.assertEquals("",getDriver().currentActivity());
    }
}

package testcase;
//第一个简单的搜索

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.testng.Assert;
import org.testng.annotations.Test;

import base.BaseTesttest;
import io.appium.java_client.android.AndroidDriver;
import utils.Actions;
@Test
public class Searchtest extends BaseTesttest {
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
    private WebElement search;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
    private WebElement searchbox;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
    private WebElement button;
    @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/searchTitle")
    private WebElement context;
    AndroidDriver driver;
    Actions action;
    public void setSearch(){
        action.click(search);
        action.type(searchbox,"王者荣耀");
        action.click(button);
        Assert.assertEquals(".MainActivity",getDriver().currentActivity());
        action.click(context);
    }
}

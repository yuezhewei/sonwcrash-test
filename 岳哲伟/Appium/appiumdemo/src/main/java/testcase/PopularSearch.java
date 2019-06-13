package testcase;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.testng.Assert;

import base.BaseTesttest;
import utils.Actions;

public class PopularSearch extends BaseTesttest {
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
    private WebElement search;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
    private WebElement searchbox;
    @FindBy(id = "android:id/text1")
    private WebElement hot;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/searchTitle")
    private WebElement context;

    Actions action;

    public void pressHot() {
        action.click(search);
        action.type(searchbox, "������ҫ");
        action.click(hot);
       //ʵ����ת���Ϊ���������ӡ�,����������ҫ
        Assert.assertEquals(".MainActivity", getDriver().currentActivity());

    }
}

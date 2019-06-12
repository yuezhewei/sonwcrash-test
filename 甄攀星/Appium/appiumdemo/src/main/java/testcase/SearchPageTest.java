package testcase;

import org.testng.Assert;
import org.testng.annotations.Test;

import base.BaseTest2;
import pages.LoginPage;
import pages.SearchPage;

public class SearchPageTest extends BaseTest2 {
    @Test(description = "搜索页面上没有的字符串")
    public void SearchOther()
{

    SearchPage searchPage=new SearchPage(getDriver());
    searchPage.searchOtherThing("wangzhe");
//    Assert.assertEquals();
}
    @Test(description = "搜索页面上的字条")
    public void SearchExist()
    {
        SearchPage searchPage=new SearchPage(getDriver());
        searchPage.searchExistThing();
    }
    @Test(description = "一键删除")
    public void deletehistory()
    {
        SearchPage searchPage=new SearchPage(getDriver());
        searchPage.deletehostry();
    }
    @Test(description = "一个个删除")
    public void deletePartHistory()
    {
        SearchPage searchPage=new SearchPage(getDriver());
        searchPage.partdeletehostry();
    }
}


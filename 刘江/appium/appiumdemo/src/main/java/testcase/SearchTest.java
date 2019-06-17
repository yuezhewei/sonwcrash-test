package testcase;

import org.testng.annotations.Test;

import base.BaseTest;
import pages.SearchPage;

/*
    刘江
    搜索测试用例
*/

public class SearchTest extends BaseTest {

    @Test(description = "搜索文字")
    public void searchText() throws Exception{
        SearchPage SP = new SearchPage(driver);
        SP.searchBox.sendKeys("王者荣耀");
        SP.searchTo.click();
    }

    @Test(description ="点击历史记录" )
    public void searchHitory() throws Exception{
        SearchPage SP = new SearchPage(driver);
        SP.history.click();
        SP.searchTo.click();
    }

    @Test(description = "搜索取消")
    public void searchCancel() throws Exception{
        SearchPage sp = new SearchPage(driver);
        sp.searchBox.sendKeys("王者荣耀");
        sp.searchClear.click();
    }

    @Test(description = "热门搜索")
    public void hotSearch() throws Exception{
        SearchPage sp = new SearchPage(driver);
        sp.hotSearch.click();
    }

    @Test(description = "删除历史记录")
    public void deleteHistory() throws Exception{
        SearchPage sp = new SearchPage(driver);
        sp.historyClear.click();
    }

    @Test(description = "删除全部历史记录")
    public void deleteAllHistory() throws Exception{
        SearchPage sp = new SearchPage(driver);
        sp.clearAllHistpry.click();
    }

}

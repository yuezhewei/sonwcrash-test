package testcase;

/*
author:zhang jiawang
*/

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.testng.Assert;
import base.BaseTesttest;
import io.appium.java_client.android.AndroidKeyCode;
import utils.Actions;

@Test
public class deletehistory_Test  extends BaseTesttest {
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
    private WebElement search;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
    private WebElement searchbox;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
    private WebElement button;
    @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/searchTitle")
    private WebElement context;
    @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/listView")
    private WebElement historyFirst;
    Actions action;
    public  void presshistoryFirst() {
        action.click(search);
        action.type(searchbox, "aa");
        action.click(button);
        driver.pressKeyCode(AndroidKeyCode.BACK);
        action.click(historyFirst);
        Assert.assertEquals(".MainActivity", getDriver().currentActivity());
    }

    @Test
    public class deletehistory_Test  extends BaseTesttest {
        @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
        private WebElement search;
        @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
        private WebElement searchbox;
        @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
        private WebElement button;
        @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/searchTitle")
        private WebElement context;
        @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/listView")
        private WebElement historySecond;
        Actions action;
        public  void presshistorySecond() {
            action.click(search);
            action.type(searchbox, "bb");
            action.click(button);
            driver.pressKeyCode(AndroidKeyCode.BACK);
            action.click(historySecond);
            Assert.assertEquals(".MainActivity", getDriver().currentActivity());
        }

        @Test
        public class deletehistory_Test  extends BaseTesttest {
            @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
            private WebElement search;
            @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
            private WebElement searchbox;
            @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
            private WebElement button;
            @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/searchTitle")
            private WebElement context;
            @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/listView")
            private WebElement historyThird;
            Actions action;
            public  void presshistoryThird() {
                action.click(search);
                action.type(searchbox, "cc");
                action.click(button);
                driver.pressKeyCode(AndroidKeyCode.BACK);
                action.click(historyThird);
                Assert.assertEquals(".MainActivity", getDriver().currentActivity());
            }


}

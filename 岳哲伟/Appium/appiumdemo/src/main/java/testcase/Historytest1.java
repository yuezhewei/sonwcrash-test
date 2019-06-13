package testcase;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.testng.Assert;

import base.BaseTesttest;
import io.appium.java_client.android.AndroidKeyCode;
import utils.Actions;

public class Historytest1  extends BaseTesttest {
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
    private WebElement search;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
    private WebElement searchbox;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
    private WebElement button;
    @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/searchTitle")
    private WebElement context;
  @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/listView")
    private WebElement historyFirst;//第一条历史记录
   Actions action;

   public  void presshistoryFirst(){
       action.click(search);
       action.type(searchbox,"王者荣耀");
       action.click(button);
       driver.pressKeyCode(AndroidKeyCode.BACK);//回退
       action.click(historyFirst);//有了第一条历史记录可以点击
       Assert.assertEquals(".MainActivity",getDriver().currentActivity());

    }
}

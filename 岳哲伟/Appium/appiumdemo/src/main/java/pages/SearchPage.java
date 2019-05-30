package pages;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;

import io.appium.java_client.android.AndroidDriver;
import utils.Actions;

public class SearchPage {
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
    private WebElement search;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
    private WebElement searchbox;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
    private WebElement button;
    AndroidDriver driver;
    Actions action;
    public void setSearch(){
        action.click(search);
        action.type(searchbox,"");
        action.click(button);
    }
}

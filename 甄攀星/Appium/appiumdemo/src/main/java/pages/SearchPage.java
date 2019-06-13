package pages;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import io.appium.java_client.android.AndroidDriver;
import utils.Actions;
//搜索页面
public class SearchPage {
    @FindBy(id = "search_src_text")
    private WebElement search_text;
    @FindBy(id ="search_close_btn")
    private WebElement close_btn;
    @FindBy(id ="search_go_btn")
    private WebElement go_btn;
    @FindBy(id = "id/text1")
    private WebElement exist_text;
    @FindBy(id = "tv_deleteAll")
    private WebElement deleteAll;
    @FindBy(id = "tv_delete")
    private WebElement delete;
    @FindBy(xpath = "//*[@text='搜索']")
    private WebElement search;
    AndroidDriver driver;
    Actions action;
    public SearchPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action= new Actions(driver);
    }
    //搜索页面上没有的字符串
    public void searchOtherThing(String s1){
        action.click(search);
        action.type(search_text,s1);
//        action.click(close_btn);
        action.click(go_btn);
    }
    //搜索页面上的字条
    public void searchExistThing()
    {
        action.click(search);
        action.click(exist_text);
    }
    //删除是在全部点击了的情况下
    //删除历史记录一键删除
    public void deletehostry()
    {
        action.click(search);
        action.click(deleteAll);
    }
    public void partdeletehostry()
    {
        action.click(search);
        action.click(delete);
    }
}

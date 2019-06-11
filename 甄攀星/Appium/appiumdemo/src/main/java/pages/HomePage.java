package pages;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import io.appium.java_client.android.AndroidDriver;
import io.appium.java_client.touch.offset.PointOption;
import utils.Actions;

//APP首页
public class HomePage {

    @FindBy(id = "index_horizontal_list_image")
    private WebElement newsimg_list;
    @FindBy(id = "iv_img")
    private WebElement iv_img;
    @FindBy(id = "tv_content")
    private WebElement tv_content;
    @FindBy(id = "tv_title")
    private WebElement tv_title;

    AndroidDriver driver;
    Actions action;
    public HomePage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);
        action= new Actions(driver);
    }
    //滑动函数
    public void listNewSwip(PointOption s1, PointOption s2,long t)
    {
        action.swip(s1,s2,t);
    }



}

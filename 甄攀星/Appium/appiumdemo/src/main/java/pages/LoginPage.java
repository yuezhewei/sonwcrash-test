package pages;

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindAll;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import java.util.List;

import javax.swing.Action;

import io.appium.java_client.android.AndroidDriver;
import utils.Actions;

public class LoginPage {

    //利用typeFindBy登录操作
    @FindBy(id = "et_username")
    private WebElement et_username;
    //或者
//    private WebElement txt_name1(){
//       return this.driver.findElementById("nameET");
//    }

    @FindBy(id = "et_password")
    private WebElement et_password;
    @FindBy(id = "btn_login")
    private  WebElement btn_login;
    @FindBy(id = "icon_image")
    private WebElement icon_image;

    @FindBy(name = "android.widget.ImageButton")
    private WebElement imag_btn;
    //    private  WebElement getTxt_name(){
//        return driver.findElement(By.id(""));
//    }
    AndroidDriver driver;
    Actions action;
    public LoginPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action= new Actions(driver);

    }
    public void login(String name,String password){

        action.click(icon_image);
        action.type((WebElement) et_username,name);
        action.type((WebElement) et_password,password);
        action.click(btn_login);
    }

}

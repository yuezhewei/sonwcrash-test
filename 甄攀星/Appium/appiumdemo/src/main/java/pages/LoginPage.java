package pages;

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindAll;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;
import org.testng.annotations.Test;

import java.util.List;

import javax.swing.Action;

import dataprovider.NSDataProvider;
import io.appium.java_client.android.AndroidDriver;
import utils.Actions;
/*
作者:甄攀星
内容：登录
 */
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

    @FindBy(id = "btn_que")
    private WebElement meetquest;
    @FindBy(xpath = "//*[@text='忘记密码']")
            private WebElement forgetuser;
    @FindBy(xpath = "//*[@text='忘记用户名']")
            private WebElement forgetpwd;
    @FindBy(xpath = "//*[@text='咨询客服']")
            private WebElement forgetconsult;
    @FindBy(id = "btn_register")
            private WebElement btn_register;
    @FindBy(id = "et_phone")
            private WebElement et_phone;
    @FindBy(id="et_code")
            private WebElement et_code;
    @FindBy(id = "et_anotherName")
            private WebElement et_anotherName;
    @FindBy(id = "et_pwd")
            private WebElement  et_pwd;
    @FindBy(id = "btn_register")
            private WebElement btn_reg;
    AndroidDriver driver;
    Actions action;
    public LoginPage(AndroidDriver driver){
        this.driver=driver;
        PageFactory.initElements(driver,this);//与@FindBy同时出现的
        action= new Actions(driver);
    }
    public void login(String name,String password){

        action.click(icon_image);
        action.type(et_username,name);
        action.type(et_password,password);
        action.click(btn_login);
    }
    public void meetQuestion()
    {
        action.click(icon_image);
        action.click(meetquest);
        action.click(forgetuser);
        action.click(meetquest);
        action.click(forgetpwd);
        action.click(meetquest);
        action.click(forgetconsult);
    }
    public void register(String phone,String code,String anotherName,String pwd)
    {
        action.click(btn_register);
        action.type(et_phone,phone);
        action.type(et_code,code);
        action.type(et_anotherName,anotherName);
        action.type(et_pwd,pwd);
        action.click(btn_reg);
    }
}
//    @Test(dataProvider = "txt",dataProviderClass = NSDataProvider.class,description = "TXT登录")
//    public void login1(String name,String password) {
//
//        action.click(icon_image);
//        action.type((WebElement) et_username,name);
//        action.type((WebElement) et_password,password);
//        action.click(btn_login);
//    }
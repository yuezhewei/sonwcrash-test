package pages;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

import javax.xml.soap.Text;

public class LoginPage {
    private final WebDriver driver;
    @FindBy(className = "android.widget.ImageButton")
    public WebElement IButton;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/icon_image")
    public WebElement image;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/et_username")
    public WebElement username;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/et_password")
    public  WebElement password;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/btn_login")
    public  WebElement login;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/btn_register")
    public WebElement register;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/btn_que")
    public  WebElement que;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/et_phone")
    public WebElement phone;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/btn_getVerificationCode")
    public WebElement getCode;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/et_code")
    public WebElement code;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/et_anotherName")
    public WebElement aName;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/et_pwd")
    public WebElement aPwd;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/btn_register")
    public WebElement btnR;

    @FindBy(linkText = "忘记密码")
    public WebElement forgetuser;

    @FindBy(linkText = "忘记用户名")
    public WebElement forgetpwd;

    @FindBy(linkText = "咨询客服")
    public WebElement consult;

    public  LoginPage(WebDriver driver){
        this.driver = driver;
        PageFactory.initElements(driver,this);
    }

//    public void login(String username,String password){
//        driver.click(IButton);
//
//    }
}

package testcase;

import org.testng.annotations.BeforeClass;
import org.testng.annotations.Test;

import java.io.IOException;

import base.BaseTest1;

public class RegisteredTest extends BaseTest1 {
    @BeforeClass
    public void start() throws IOException {
        this.StartApp();
    }
    @Test
    public void registereTest(){
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/icon_image").click();
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_register").click();
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_phone").click();
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_getVerificationCode").click();
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_code").sendKeys("1234");
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_anotherName").sendKeys("admin");
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/et_pwd").sendKeys("admin");
        driver.findElementById("cn.edu.hebtu.software.snowcarsh2:id/btn_register").click();
        
    }
}

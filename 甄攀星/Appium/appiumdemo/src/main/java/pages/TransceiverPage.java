package pages;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;
import javax.swing.Action;
import io.appium.java_client.android.AndroidDriver;
import swipe.SwipeClass;
import utils.Actions;
//电台主页
public class TransceiverPage {
    @FindBy(id="radio_image")
    private String radio_image;
    @FindBy(id = "mp3_next")
            private String mp3_next;
    @FindBy(id = "mp3_play")
            private  String mps_play;
    @FindBy(id = "page_layout")
            private String page_layout;
    AndroidDriver driver;
    Action action;
    public  TransceiverPage(AndroidDriver driver,Action action)
    {
        this.driver=driver;
        PageFactory.initElements(driver,this);
        this.action=action;
    }
    public TransceiverPage(AndroidDriver driver)
    {
        this.driver=driver;
    }
    public void openRadio()
    {
        this.driver.findElementById(radio_image).click();
    }
    public void nextMap()
    {
        this.driver.findElementById(mp3_next).click();
    }
    public void swipePageImage()
    {
        SwipeClass sc=new SwipeClass();
        sc.swipeToRight(this.driver);
    }
}

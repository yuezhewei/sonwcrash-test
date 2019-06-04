package po;

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;

public class MainPage {
    @FindBy(linkText = "新闻")
    private WebElement news;

    @FindBy(linkText = "文章")
    private WebElement  article;

    @FindBy(linkText = "电台")
    private WebElement radio;

    @FindBy(linkText = "视频")
    private WebElement video;

    @FindBy(className = "android.widget.ImageView")
    private WebElement gtalk;

    @FindBy(className = "android.widget.ImageButton")
    private WebElement button;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/name")
    private WebElement loginbutton;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/et_username")
    private WebElement username;


}

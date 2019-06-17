package pages;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

public class SearchPage {

    private final WebDriver driver;
    @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
    public WebElement searchBox;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
    public WebElement searchTo;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_close_btn")
    public  WebElement searchClear;

    @FindBy(className = "android.widget.RelativeLayout")
    public WebElement history;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/tv_delete")
    public WebElement historyClear;

    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/tv_deleteAll")
    public WebElement clearAllHistpry;

    @FindBy(id = "android:id/text1")
    public WebElement hotSearch;

    public  SearchPage(WebDriver driver){
        this.driver = driver;
        PageFactory.initElements(driver,this);
    }


}

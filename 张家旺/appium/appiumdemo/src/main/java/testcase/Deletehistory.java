package testcase;
/*
author:zhang jiawang
删除搜索记录`
1.打开雪崩app
2.点击搜索功能按钮
3.点击搜索框
4.点击搜索
5.点击删除搜索记录
 */

import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;

public class Deletehistory {
    String str1=new String("aa");
    String str2=new String("bb");
    String str3=new String("cc");
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/image")
    private WebElement search;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_src_text")
    private WebElement searchbox;
    @FindBy(id = "cn.edu.hebtu.software.snowcarsh2:id/search_go_btn")
    private WebElement button;
    @FindBy(id="cn.edu.hebtu.software.snowcarsh2:id/searchTitle")
    private WebElement context;
    @FindBy(linkText="str1")
    private WebElement historyFirst;//第一条历史记录
    @FindBy(linkText="str2")
    private WebElement historySecond;//第二条历史记录
    @FindBy(linkText="str3")
    private WebElement historyThird;//第二条历史记录


}

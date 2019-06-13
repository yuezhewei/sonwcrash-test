package testcase;

import org.testng.Assert;
import org.testng.annotations.Test;

import base.BaseTest2;
import pages.TransceiverPage;
/*
作者：甄攀星
内容：电台页面测试用例
 */
public class TransceiverPageTest extends BaseTest2 {
@Test
    public void testTransceiver()
{
    TransceiverPage tp =new TransceiverPage(getDriver());
    tp.openRadio();
    tp.nextMap();
    tp.swipePageImage();
    Assert.assertEquals(getDriver().currentActivity(),".RadiodetailActivity");
}
}

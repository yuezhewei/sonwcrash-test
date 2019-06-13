package testcase;
/*
author：zhang jiawang
电台的打开播放，下一个功能
 */
import org.testng.Assert;
import org.testng.annotations.Test;

import base.BaseTest2;
import pages.TransceiverPage;

public class radio extends BaseTesttest {
@Test
    public void testTransceiver()
{
    TransceiverPage tp =new TransceiverPage(getDriver());
    tp.openRadio();//打开
    tp.nextMap(); //下一个
    tp.swipePageImage();
    Assert.assertEquals(getDriver().currentActivity(),".RadiodetailActivity");
}
}

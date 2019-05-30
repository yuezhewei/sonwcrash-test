package testcase;

import org.testng.annotations.Test;

import base.BaseTest2;
import pages.TransceiverPage;

public class TransceiverPageTest extends BaseTest2 {
@Test
    public void testTransceiver()
{
    TransceiverPage tp =new TransceiverPage(getDriver());
    tp.openRadio();
    tp.nextMap();
    tp.swipePageImage();
}
}

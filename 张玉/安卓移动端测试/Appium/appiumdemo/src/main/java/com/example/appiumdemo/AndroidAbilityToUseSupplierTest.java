//package com.example.appiumdemo;
//
//import static io.appium.java_client.touch.WaitOptions.waitOptions;
//import static io.appium.java_client.touch.offset.ElementOption.element;
//import static java.time.Duration.ofSeconds;
//import static org.testng.Assert.assertNotEquals;
//
//import io.appium.java_client.MobileElement;
//import io.appium.java_client.android.Activity;
//import io.appium.java_client.android.AndroidDriver;
//import io.appium.java_client.android.AndroidElement;
//import io.appium.java_client.android.AndroidTouchAction;
//import io.appium.java_client.functions.ActionSupplier;
//import io.appium.java_client.service.local.AppiumDriverLocalService;
//import io.appium.java_client.touch.offset.ElementOption;
//import org.junit.Test;
//import org.openqa.selenium.Point;
//import org.openqa.selenium.WebElement;
//
//import java.util.List;
//
//public class AndroidAbilityToUseSupplierTest{
//    private AndroidDriver<WebElement> driver;
//    private static AppiumDriverLocalService service;
////    private final String PACKAGE = "io.appium.android.apis:id/gallery";
//    private final ActionSupplier<AndroidTouchAction> horizontalSwipe = () -> {
//        driver.findElementById("io.appium.android.apis:id/gallery");
//
//        AndroidElement gallery = driver.findElementById("io.appium.android.apis:id/gallery");
//        List<MobileElement> images = gallery
//                .findElementsByClassName("android.widget.ImageView");
//        Point location = gallery.getLocation();
//        Point center = gallery.getCenter();
//
//        ElementOption pressOption = element(images.get(2),-10,center.y - location.y);
//        ElementOption moveOption = element(gallery, 10,center.y - location.y);
//
//        return new AndroidTouchAction(driver)
//                .press(pressOption)
//                .waitAction(waitOptions(ofSeconds(2)))
//                .moveTo(moveOption)
//                .release();
//    };
//
//    private final ActionSupplier<AndroidTouchAction> verticalSwiping = ()
//        new AndroidTouchAction(driver).press(element(driver.findElementByAccessibilityId("Gallery")))
//
//                .waitAction(waitOptions(ofSeconds(2)))
//
//                .moveTo(element(driver.findElementByAccessibilityId("Auto Complete")))
//                .release();
//
//    @Test public void horizontalSwipingWithSupplier() {
//        Activity activity = new Activity("io.appium.android.apis", ".view.Gallery1");
//        driver.startActivity(activity);
//        AndroidElement gallery = driver.findElementById("io.appium.android.apis:id/gallery");
//        List<MobileElement> images = gallery
//                .findElementsByClassName("android.widget.ImageView");
//        int originalImageCount = images.size();
//
//        horizontalSwipe.get().perform();
//
//        assertNotEquals(originalImageCount, gallery
//                .findElementsByClassName("android.widget.ImageView").size());
//    }
//
//    @Test public void verticalSwipingWithSupplier() throws Exception {
//        driver.resetApp();
//        driver.findElementByAccessibilityId("Views").click();
//
//        Point originalLocation = driver.findElementByAccessibilityId("Gallery").getLocation();
//        verticalSwiping.get().perform();
//        Thread.sleep(5000);
//        assertNotEquals(originalLocation, driver.findElementByAccessibilityId("Gallery").getLocation());
//    }
//}
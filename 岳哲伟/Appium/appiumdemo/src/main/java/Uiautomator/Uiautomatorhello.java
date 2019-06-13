//����UI�Զ����Զ�Ҫ�̳�UiAutomatorTestCase
public class MessageTestCase extends UiAutomatorTestCase {
	public void testDemo() throws UiObjectNotFoundException{
		//��ȡUiDevice����
		UiDevice device = getUiDevice();
		
		//���home������
		device.pressHome();
		
		//���ͼ���ᵽ�ģ�����ʹ��content-desc����Appsѡ������Ӧ���б�
		UiObject appsTab = new UiObject(new UiSelector().description("Apps"));
		appsTab.click();
		
		//��Ϊ���Ž����ڵڶ����б�ҳ�棬�������ǿ����Ȼ���һ��
		//ͨ��scrollable������ѡ������view
		UiScrollable appViews = new UiScrollable(new UiSelector().scrollable(true));
		appViews.setAsHorizontalList();
		appViews.scrollForward();
		
		//ͨ��������Text�ҵ�����Ӧ��ͼ�꣬Text��ȡͨ��uiautomatorviewer
		UiObject messageApp = appViews.getChildByText(new UiSelector().className(android.widget.TextView.class.getName()), "Messaging");
		//������ȴ��򿪶���Ӧ��
		messageApp.clickAndWaitForNewWindow();
		
		//ѡ���½�����
		UiObject newMessage = new UiObject(new UiSelector().description("New message"));
		newMessage.click();
		
		//ѡ��༭��Ϣ
		UiObject editMessage = new UiObject(new UiSelector().text("Type text message"));
		editMessage.click();
		editMessage.setText("hello world!");
	}
}

#include<afxwin.h>
class MyFrame : public CFrameWnd
{
public:
	MyFrame()
	{
		Create(0, "window");
	}

};
class MyApp :public CWinApp
{
	BOOL InitInstance()
	{
		MyFrame* Frame = new MyFrame;
		m_pMainWnd = Frame;
		Frame->ShowWindow(1);

		return TRUE;
	}
};
MyApp obj1;

#include<afxwin.h>

class MyFrame :public CFrameWnd
{
public:
	MyFrame()
	{
		Create(0, "INDIA");
	}

};

class MyApp :public CWinApp
{
public:
	BOOL InitInstance()
	{
		MyFrame* pFrame = new MyFrame;
		m_pMainWnd = pFrame;
		pFrame->ShowWindow(1);

		return TRUE;
	}
};
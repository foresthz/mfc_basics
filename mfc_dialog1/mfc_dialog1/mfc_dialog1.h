
// mfc_dialog1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cmfc_dialog1App: 
// �йش����ʵ�֣������ mfc_dialog1.cpp
//

class Cmfc_dialog1App : public CWinApp
{
public:
	Cmfc_dialog1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cmfc_dialog1App theApp;
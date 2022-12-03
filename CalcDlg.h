
// CalcDlg.h: 头文件
//

#pragma once


// CCalcDlg 对话框
class CCalcDlg : public CDialogEx
{
// 构造
public:
	CCalcDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CEdit m_edit1;
	afx_msg void OnBnClickedButton1();
	CEdit m_edit2;
	afx_msg void OnEnChangeEdit2();
	CEdit m_result;
	virtual void OnOK();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnEnChangeEdit4();
	CEdit m_show_res;
//	CEdit m_copyright;
	afx_msg void OnStnClickedCopyright();
	CEdit m_copyright;
};

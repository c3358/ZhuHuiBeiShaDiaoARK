#pragma once


// CMyListCtrl

class CMyListCtrl : public CListCtrl
{
	DECLARE_DYNAMIC(CMyListCtrl)

public:
	CMyListCtrl();
	virtual ~CMyListCtrl();
public:
	//设置奇数行背景颜色
	void SetOddItemBkColor(COLORREF color,BOOL bDraw=TRUE);
	//设置偶数行背景颜色
	void SetEvenItemBkColor(COLORREF color,BOOL bDraw=TRUE);
	//设置热点行背景颜色
	void SetHoverItemBkColor(COLORREF color,BOOL bDraw=TRUE);
	//设置选中行背景颜色
	void SetSelectItemBkColor(COLORREF color,BOOL bDraw=TRUE);
	//设置奇数行文本颜色
	void SetOddItemTextColor(COLORREF color,BOOL bDraw=TRUE);
	//设置偶数行文本颜色
	void SetEvenItemTextColor(COLORREF color,BOOL bDraw=TRUE);
	//设置热点行文本颜色
	void SetHoverItemTextColor(COLORREF color,BOOL bDraw=TRUE);
	//设置选中行文本颜色
	void SetSelectItemTextColor(COLORREF color,BOOL bDraw=TRUE);
protected:
	BOOL m_bTracking;
	int m_nHoverIndex;//当前热点项目索引
	COLORREF m_OddItemBkColor;//奇数行背景颜色
	COLORREF m_EvenItemBkColor;//偶数行背景颜色
	COLORREF m_HoverItemBkColor;//热点行背景颜色
	COLORREF m_SelectItemBkColor;//选中行背景颜色
	COLORREF m_OddItemTextColor;//奇数行文本颜色
	COLORREF m_EvenItemTextColor;//偶数行文本颜色
	COLORREF m_HoverItemTextColor;//热点行文本颜色
	COLORREF m_SelectItemTextColor;//选中行文本颜色
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg LRESULT OnMouseLeave(WPARAM wParam, LPARAM lParam);
	afx_msg void OnNMCustomdraw(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMRClickList1(NMHDR *pNMHDR, LRESULT *pResult);
	void SetItemTextColor(int nItem,COLORREF rgb,bool IsRecovery);
	int m_needSetItem;
	bool m_firstrun;
	COLORREF m_TextColor;
	int Arry[200];
	BOOL IsExistForArry(int nItem);
};



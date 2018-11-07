#pragma once
class BanhMi
{
public:
	BanhMi();
	virtual ~BanhMi();
	void LamBanhMi();
protected:
	void XeBanhMi();
	void ThemTrung();
	void ThemThit();
	void ThemChaCa();
	void ThemDoChua();
	void ThemRau();
	void ThemTuongOt();
	void ThemNuocTuong();
	void GiaoBanhMi();
	virtual void ThemCaiKhac();
	virtual bool canTrung();
	virtual bool canThit();
	virtual bool canDoChua();
	virtual bool canChaCa();
	virtual bool canTuongOt();
	virtual bool canNuocTuong();
};


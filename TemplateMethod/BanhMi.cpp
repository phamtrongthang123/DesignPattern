#include "BanhMi.h"
#include <iostream>
using namespace std;



BanhMi::BanhMi()
{
}

void BanhMi::LamBanhMi()
{
	XeBanhMi();
	ThemRau();
	if (canChaCa()) { ThemChaCa(); }
	if (canThit()) { ThemThit(); }
	if (canTrung()) { ThemTrung(); }
	if (canDoChua()) { ThemDoChua(); }
	if (canNuocTuong()) { ThemNuocTuong(); }
	if (canTuongOt()) { ThemTuongOt(); }
	ThemCaiKhac();
	GiaoBanhMi();
}

void BanhMi::XeBanhMi()
{
	cout << "Lay dao xe banh mi..." << endl;
}

void BanhMi::ThemTrung()
{
	cout << "Da them trung..." << endl;
}

void BanhMi::ThemThit()
{
	cout << "Da them thit..." << endl;
}

void BanhMi::ThemChaCa()
{
	cout << "Da them cha ca..." << endl;
}

void BanhMi::ThemDoChua()
{
	cout << "Da them do chua..." << endl;
}

void BanhMi::ThemRau()
{
	cout << "Da them rau..." << endl;
}

void BanhMi::ThemTuongOt()
{
	cout << "Da them tuong ot..." << endl;
}

void BanhMi::ThemNuocTuong()
{
	cout << "Da them nuoc tuong..." << endl;
}

void BanhMi::GiaoBanhMi()
{
	cout << "Banh mi cua ban day! " << endl;
}

void BanhMi::ThemCaiKhac()
{
}

bool BanhMi::canTrung()
{
	return true;
}

bool BanhMi::canThit()
{
	return true;
}

bool BanhMi::canDoChua()
{
	return true;
}

bool BanhMi::canChaCa()
{
	return true;
}

bool BanhMi::canTuongOt()
{
	return true;
}

bool BanhMi::canNuocTuong()
{
	return true;
}


BanhMi::~BanhMi()
{
}

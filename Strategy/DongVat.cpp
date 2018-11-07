#include "DongVat.h"



void DongVat::ganKieuBay(Bay * kieuBay)
{
	if (bay != nullptr) delete bay;
	bay = kieuBay;
}

DongVat::DongVat(): bay(nullptr)
{
}

string DongVat::thuBay()
{
	return bay->bay();
}

DongVat::~DongVat()
{
	delete bay;
}

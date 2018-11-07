#pragma once
#include "Bay.h"
class DongVat
{
protected:
	Bay * bay;
	void ganKieuBay(Bay * kieuBay);
public:
	DongVat();
	string thuBay();
	virtual~DongVat();
};


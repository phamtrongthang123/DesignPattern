#pragma once
#include "BanhMi.h"
class BanhMiTrung :
	public BanhMi
{
public:
	BanhMiTrung();
	~BanhMiTrung();
protected:
	bool canThit();
	bool canChaCa();
};


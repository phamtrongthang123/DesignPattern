#pragma once
#include "BanhMi.h"
class BanhMiCuaThang :
	public BanhMi
{
public:
	BanhMiCuaThang();
	~BanhMiCuaThang();
protected:
	bool canDoChua();
	bool canThit();
	void ThemCaiKhac();
};


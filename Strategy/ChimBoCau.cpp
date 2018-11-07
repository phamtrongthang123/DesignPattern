#include "ChimBoCau.h"



ChimBoCau::ChimBoCau()
{
	bay = new BietBay();
}

void ChimBoCau::gayCanh()
{
	ganKieuBay(new KhongBietBay());
}


ChimBoCau::~ChimBoCau()
{
}

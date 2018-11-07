#include "BanhMiCuaThang.h"
#include "BanhMiTrung.h"
#include <iostream>

using namespace std;
int main()
{
	BanhMiTrung bmtrung;
	BanhMiCuaThang bmThang;
	bmtrung.LamBanhMi();
	cout << "Lam banh mi cho Thang: " << endl;
	bmThang.LamBanhMi();
	cin.ignore();
	return 0;
}
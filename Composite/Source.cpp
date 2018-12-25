#include "CompanyDirector.h"
#include "Developer.h"
#include "Manager.h"

int main() {
	Developer * dev1 = new Developer("Thang");
	Developer * dev2 = new Developer("Nam");

	CompanyDirector devcd;
	devcd.addEmployee(dev1);
	devcd.addEmployee(dev2);

	Manager * man1 = new Manager("Trong Thang");
	Manager * man2 = new Manager("Pham Trong Thang");

	CompanyDirector mancd;
	mancd.addEmployee(man1);
	mancd.addEmployee(man2);

	CompanyDirector cd;
	cd.addEmployee(&mancd);
	cd.addEmployee(&devcd);
	
	cd.showInfo();

	cin.ignore();
	return 0;
}
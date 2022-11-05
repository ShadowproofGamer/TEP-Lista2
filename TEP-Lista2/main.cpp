#include <iostream>
#include "CTable.h"
#include "constants.h"


int main() {
	//zad1 i 2
	CTable c_tab_0, c_tab_1;
	c_tab_0.bSetNewSize(6);
	c_tab_1.bSetNewSize(4);
	c_tab_0 = c_tab_1;  //z destruktorem, kompilator zwraca b³¹d sterty w trakcie dzia³ania programu, natomiast bez destruktora program kompiluje siê i dzia³a normalnie
	
	//zad 3
	c_tab_1.setContent(2, 123);
	c_tab_0.vPrint();
	c_tab_1.vPrint();

}
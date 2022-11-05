#include <iostream>
#include "CTable.h"
#include "constants.h"


int main() {
	//zad 1 i 2
	CTable c_tab_0, c_tab_1;
	c_tab_0.bSetNewSize(6);
	c_tab_1.bSetNewSize(4);
	c_tab_0 = c_tab_1;  //z destruktorem, kompilator zwraca b³¹d sterty w trakcie dzia³ania programu, natomiast bez destruktora program kompiluje siê i dzia³a normalnie
	
	//zad 3
	for (int i = 0; i < c_tab_0.getLength(); i++)
	{
		c_tab_0.setContent(i, i+1);
	}
	for (int i = 0; i < c_tab_1.getLength(); i++)
	{
		c_tab_1.setContent(i, i + 51);
	}

	c_tab_1.setContent(2, 123);
	c_tab_0.vPrint();
	c_tab_1.vPrint();


	//zad 4
	/*
	* test:
	int* con_table = c_tab_0 + c_tab_1;
	for (int i = 0; i < 8; i++)
	{
		std::cout << con_table[i] << std::endl;
	}
	*/

}
#include<iostream>
#include "TMenu.h"
#include "TCrypter.h"

int main()
{
	zad1::TMenu menu;
	zad1::TCrypter crypter;
	menu.Mode_select(crypter);
	
	return 0;
}

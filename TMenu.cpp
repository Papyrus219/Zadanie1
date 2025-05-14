#include "TMenu.h"

#ifndef TMENU
#define TMENU

using namespace zad1;

void TMenu::Mode_select(TCrypter &crypt)
{
	while(program_loop)
	{
		std::cout << welcome_message << options_message;
		int option{};
		std::cin >> option;
	
		switch(option)
		{
			case 1:
				Shift_left(crypt);
				system("cls");
				break;
			case 2:
				Shift_right(crypt);
				system("cls");
				break;
			case 3:
				Exit();
				system("cls");
				break;
			default:
				std::cout << error_message;
				system("cls");
			break;
		}	
	}
}
	
void TMenu::Shift_left(TCrypter &crypt)
{
	int shift_level{};
	std::string plain_text{};
	
	std::cout << plain_message;
	std::cin >> plain_text;
	std::cout << shift_message;
	std::cin >> shift_level;
	
	std::cout << crypt.Shift_left(shift_level,plain_text) << '\n';
	
	char a;
	std::cout << end_message;
	std::cin >> a;
	
}

void TMenu::Shift_right(TCrypter &crypt)
{
	int shift_level{};
	std::string plain_text{};
	
	std::cout << plain_message;
	std::cin >> plain_text;
	std::cout << shift_message;
	std::cin >> shift_level;
	
	std::cout << crypt.Shift_right(shift_level,plain_text) << '\n';
	
	char a;
	std::cout << end_message;
	std::cin >> a;
}	
	
void TMenu::Exit()
{
	program_loop = false;
}

#endif 

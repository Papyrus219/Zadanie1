#ifndef TMENU_H
#define TMENU_H

#include<string>
#include<iostream>
#include"TCrypter.h"

namespace zad1
{
	class TMenu
	{
	public:
		void Mode_select(TCrypter crypt);
	
	private:
		void Shift_left(TCrypter crypt);
		void Shift_right(TCrypter crypt);
		void Exit();
		
		std::string welcome_message{"Welcome to Decryptor! \nBy: Papyrus219 (T.B)\n\n"};
		std::string options_message{"Select mode: \n1.Shift left. \n2.Shift right. \n3.Exit.\n"};
		std::string error_message{"\rError! Wrong input! Please limit it to intiger.\n\n"};
		std::string plain_message{"\rEnter a text do Crypt: "};
		std::string shift_message{"\nEnter a shift level: "};
		std::string result_message{"\n\nResult: "};
		std::string end_message{"Type anything to continue.\n"};
		bool program_loop{true};
	};	
}

#endif

#ifndef TMENU_H
#define TMENU_H

#include<string>
#include<iostream>
#include <thread>
#include"TCrypter.h"

namespace zad1
{
	class TMenu
	{
	public:
		void Mode_select(TCrypter &crypt);
	
	private:
		void Shift_left(TCrypter &crypt);
		void Shift_right(TCrypter &crypt);
		void Exit();
		
		std::string welcome_message{"Welcome to Decryptor! \nBy: Papyrus219 (T.B)\n\n"};
		std::string options_message{"1.Shift left. \n2.Shift right. \n3.Exit.\nSelect mode:"};
		std::string error_message{"Error! Wrong input! Please limit it to intiger.\n\n"};
		std::string plain_message{"Enter a text do Crypt: "};
		std::string shift_message{"\nEnter a shift level: "};
		std::string result_message{"\n\nResult: "};
		std::string end_message{"Type anything to continue.\n"};
		bool program_loop{true};
	};	
}

#endif

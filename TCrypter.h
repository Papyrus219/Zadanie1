#ifndef TCRYPTER_H
#define TCRYPTER_H

#include<string>

namespace zad1
{
	class TCrypter
	{
	public:
		std::string Shift_left(int shift_level, std::string plain_text);
		std::string Shift_right(int shift_level, std::string plain_text);
	};	
}

#endif

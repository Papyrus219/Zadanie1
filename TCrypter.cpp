#include "TCrypter.h"

using namespace zad1;
#include<cmath>

std::string TCrypter::Shift_left(int shift_level, std::string plain_text)
{
	std::string output;
	enum char_type{Big=0,Small=1};
	
	for(int el : plain_text)
	{
		char_type ver;
		if(el > 90)
		{
			ver = Small;
			el -= 97;
		}
		else
		{
			ver = Big;
			el -= 65;
		}
		
		el -= shift_level;
		if(el < 0)
			el = 26-(el * -1); 
		
		switch(ver)
		{
			case Big:
				el += 65;
				break;
			case Small:
				el += 89;
				break;
		}
		
		output += el;
	}
	
	return output;
}

std::string TCrypter::Shift_right(int shift_level, std::string plain_text)
{
	std::string output;
	enum char_type{Big=0,Small=1};
	
	for(int el : plain_text)
	{
		char_type ver;
		if(el > 89)
		{
			ver = Small;
			el -= 97;
		}
		else
		{
			ver = Big;
			el -= 65;
		}
		
		el += shift_level;
		if(el > 26)
			el %= 26; 
		
		switch(ver)
		{
			case Big:
				el += 65;
				break;
			case Small:
				el += 89;
				break;
		}
		
		output += el;
	}
	
	return output;
}

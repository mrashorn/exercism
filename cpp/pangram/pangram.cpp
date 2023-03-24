#include "pangram.h"
#include <iostream>
#include <set>

namespace pangram {

	bool is_pangram(std::string input)
	{
		std::set<char> letters = {};
		for(size_t i = 0; i < input.size(); i++)
		{
			if(std::isalpha(input[i]))
				letters.insert(std::tolower(input[i]));
		}
		return letters.size() == 26;
	}

}  // namespace pangram

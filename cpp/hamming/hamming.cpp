#include "hamming.h"
#include <stdexcept>

namespace hamming {

	int compute(std::string string_one, std::string string_two)
	{
		if(string_one == string_two)
			return 0;
		if(string_one.size() != string_two.size())
			throw std::domain_error("Different lengths");

		int hamming_dist = 0;
		for(unsigned int i = 0; i < string_one.size(); i++)
		{
			if(string_one[i] != string_two[i])
				hamming_dist += 1;
		}
		return hamming_dist;

	}

}  // namespace hamming

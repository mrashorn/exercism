#include "nucleotide_count.h"
#include <iostream>


namespace nucleotide_count {

	std::map<char, int> count(std::string input_strand)
	{
		std::map<char, int> _strand = { {'A', 0}, {'C', 0}, {'G', 0}, {'T', 0} };

		for(char i : input_strand)
		{
			if(_strand.count(i) > 0)
				_strand[i] += 1;
			else
				throw std::invalid_argument("Not a valid DNA nucleotide.");
		}

		return _strand;
	}

}  // namespace nucleotide_count

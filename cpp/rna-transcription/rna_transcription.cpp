#include "rna_transcription.h"
#include <map>


namespace rna_transcription {
	std::map<char, char> rna_convert{{'G', 'C'} ,{'C', 'G'}, {'T', 'A'}, {'A', 'U'}};

	char to_rna(char letter)
	{
		return rna_convert[letter];
	}

	std::string to_rna(std::string input)
	{
		std::string return_str = "";
		for(char letter : input)
			return_str.push_back(rna_convert[letter]);

		return return_str;
	}

}  // namespace rna_transcription

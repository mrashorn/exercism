#include "secret_handshake.h"
#include "bits/stdc++.h"
#include <algorithm>

namespace secret_handshake {

	std::vector<std::string> commands(int input)
	{
		// convert input int to binary
		std::bitset<5> binary_input = input;

		std::vector<std::string> handshake = {};
		std::vector<std::string> responses = {"wink", "double blink", 
		"close your eyes", "jump"};


		for(unsigned int i = 0; i < binary_input.size()-1; i++)
		{
			if(binary_input[i] == 1)
				handshake.push_back(responses[i]);
		}
		
		if(binary_input[4] == 1)
			std::reverse(handshake.begin(), handshake.end());

		return handshake;
	}

}  // namespace secret_handshake

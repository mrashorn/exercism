#include "secret_handshake.h"
#include "bits/stdc++.h"
#include <algorithm>

namespace secret_handshake {

	std::vector<std::string> commands(int input)
	{
		//Second iteration, practicing how to use the & operator

		std::vector<std::string> handshake = {};

		if(1 & input) handshake.push_back("wink");
		if(2 & input) handshake.push_back("double blink");
		if(4 & input) handshake.push_back("close your eyes");
		if(8 & input) handshake.push_back("jump");
		if(16 & input) std::reverse(handshake.begin(), handshake.end());

		return handshake;
	}

}  // namespace secret_handshake

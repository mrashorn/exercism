#include "raindrops.h"
#include <string>

namespace raindrops {
	std::string convert(int n)
	{
		std::string my_str = "";

		if(n % 3 == 0)
			my_str.append("Pling");
		if(n % 5 == 0)
			my_str.append("Plang");
		if(n % 7 == 0)
			my_str.append("Plong");
		if(my_str.empty())
			my_str.append(std::to_string(n));
		return my_str;
	}

}  // namespace raindrops

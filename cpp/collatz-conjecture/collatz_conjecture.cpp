#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {
	int steps(int num)
	{
		if(num < 1)
			throw std::domain_error("Invalid input.");
		int counter = 0;
		while(num != 1)
		{
			if(num % 2 == 0) // even number
				num = num / 2;
			else
				num = (3 * num) + 1;
			counter++;
		}
		return counter;
	}
}  // namespace collatz_conjecture

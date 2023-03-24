#include "grains.h"
#include "math.h"

namespace grains {
	long long unsigned int square(int n)
	{
		if(n == 1)
			return 1;
		return pow(2, n-1);
	}

	double total()
	{
		double sum = 0;
		for(int i = 0; i <= 64; i++)
		{
			sum += square(i);
		}
		return sum;
	}
}  // namespace grains

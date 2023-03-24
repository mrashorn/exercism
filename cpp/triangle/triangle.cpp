#include "triangle.h"
#include <stdexcept>
#include <vector>
#include <set>
#include <algorithm>

namespace triangle {
	triangle::flavor kind(double side_1, double side_2, double side_3)
	{
		if(side_1 <= 0 || side_2 <= 0 || side_3 <= 0)
			throw std::domain_error("Invalid lengths.");
		
		// Checking triangle inequality
		std::vector<double> sides{side_1, side_2, side_3};
		std::sort(sides.begin(), sides.end());
		if(sides[2] > sides[0] + sides[1])
			throw std::domain_error("Invalid lengths.");
		
		// Check for length equalities by making a set.

		std::set<double> lengths = {side_1, side_2, side_3};
		if (lengths.size() == 1)
			return equilateral;
		if (lengths.size() == 2)
			return isosceles;
		return scalene;
	}

}  // namespace triangle

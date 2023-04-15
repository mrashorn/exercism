#include "binary_search.h"
#include <iostream>
#include <stdexcept>

namespace binary_search {

	std::size_t find(std::vector<int> input_vec, int search_num)
	{
		int lower_index = 0;
		int upper_index = input_vec.size();
		unsigned int counter = 0;

		while (true)
		{
			if(counter > input_vec.size() || input_vec.size() == 0)
				throw std::domain_error("Value does not exist in array.");

			counter++;
			// find the middle element of a list
			int middle_index = (upper_index + lower_index) / 2;

			// if middle element is our item, we're done!
			if(input_vec[middle_index] == search_num)
				return middle_index;
			
			// If middle element is greater than our item, eliminate element and all elements after.
			if(input_vec[middle_index] > search_num)
			{
				upper_index = middle_index;
				continue;
			}

			// If middle element is less than our item, eliminate element and all elements before.
			if(input_vec[middle_index] < search_num)
			{
				lower_index = middle_index;
				continue;
			}
		}
	}

}  // namespace binary_search

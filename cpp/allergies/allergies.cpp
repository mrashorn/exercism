#include "allergies.h"
#include "bits/stdc++.h"

namespace allergies {
	allergy_test::allergy_test(int score) // constructor
	{
		std::bitset<8> binary_score = score;
		for(int i = binary_score.size()-1; i >= 0; i--)
		{
			if(binary_score[i] == 1)
				_allergens.insert(allergy_assignments[i]);
		}
	}

	bool allergy_test::is_allergic_to(std::string input) const
	{
		if(allergy_test::_allergens.count(input))
			return true;
		return false;
	}

}  // namespace allergies

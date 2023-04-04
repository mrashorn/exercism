#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <unordered_set>
#include <map>
#include <vector>

namespace allergies {
	class allergy_test
	{
		private:
			std::unordered_set<std::string> _allergens = {};
			std::vector<std::string> allergy_assignments = {"eggs", "peanuts",
				"shellfish", "strawberries", "tomatoes", "chocolate", "pollen",
				"cats"};

		public:
			allergy_test(int score); // constructor
			bool is_allergic_to(std::string input) const;
			std::unordered_set<std::string> get_allergies() {return _allergens;}

	};

}  // namespace allergies

#endif // ALLERGIES_H

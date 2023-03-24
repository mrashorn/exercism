#include "grade_school.h"
#include <algorithm>
#include <iostream>
#include <numeric>

namespace grade_school {
	school::school()
	{
		class_roster = {};
	}

	std::map<int, std::vector<std::string>> school::roster() const
	{
		return class_roster;
	}

	void school::add(std::string name, int grade)
	{
		// check to see if the given grade already has a name assigned. 
		// add to existing grade
		if(class_roster.count(grade) != 0)
		{
			class_roster[grade].push_back(name);
			std::sort(class_roster[grade].begin(), class_roster[grade].end());
		}
		// new grade that has not been entered yet.
		else
			class_roster.insert({grade, std::vector<std::string> {name}});
	}

	std::vector<std::string> school::grade(int grade) const
	{
		// returns the vector of names in the given grade.
		if(class_roster.count(grade) == 0)
		{
			return {};
		}
		return class_roster.at(grade); // const friendly operator to grab key
	}

}  // namespace grade_school

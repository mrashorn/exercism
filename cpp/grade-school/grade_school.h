#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <vector>
#include <map>

namespace grade_school {
	class school
	{
		private:
			std::map<int, std::vector<std::string>> class_roster;
		public:
			school(); // constructor
			std::map<int, std::vector<std::string>> roster() const;
			void add(std::string name, int grade);
			std::vector<std::string> grade(int grade) const;
					  
	}; // school class
}  // namespace grade_school

#endif // GRADE_SCHOOL_H

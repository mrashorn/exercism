#include "reverse_string.h"
#include <string>

using namespace std;

namespace reverse_string {

	string reverse_string(string input)
	{
		return string{input.rbegin(), input.rend()};
	}

}  // namespace reverse_string

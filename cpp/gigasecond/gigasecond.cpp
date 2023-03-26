#include "gigasecond.h"

namespace gigasecond {
	boost::posix_time::ptime advance(boost::posix_time::ptime input)
	{
		boost::posix_time::ptime new_time = input + boost::posix_time::seconds(1000000000);
		return new_time;
	}

}  // namespace gigasecond

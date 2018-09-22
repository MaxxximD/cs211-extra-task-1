#include "extra-task-1.h"
#include <assert.h>

void main()
{
	assert(abs(seconds_difference(1800.0, 3600.0) - 1800.0) < DBL_EPSILON  && "test 1");
	assert(abs(seconds_difference(3600.0, 1800.0) - -1800.0) < DBL_EPSILON  && "test 2");
	assert(abs(seconds_difference(1800.0, 2160.0) - 360.0) < DBL_EPSILON  && "test3");
	assert(abs(seconds_difference(1800.0, 1800.0) - 0.0) < DBL_EPSILON  && "test4");


	assert(abs(hours_difference(1800.0, 3600.0) - 0.5) < DBL_EPSILON  && "test5");
	assert(abs(hours_difference(3600.0, 1800.0) - -0.5) < DBL_EPSILON  && "test6");
	assert(abs(hours_difference(1800.0, 2160.0) - 0.1) < DBL_EPSILON  && "test7");
	assert(abs(hours_difference(1800.0, 1800.0) - 0.0) < DBL_EPSILON  && "test8");

	assert(abs(to_float_hours(0, 15, 0) - 0.25) < DBL_EPSILON  && "test9");
	assert(abs(to_float_hours(2, 45, 9) - 2.7525) < DBL_EPSILON  && "test10");
	assert(abs(to_float_hours(1, 0, 36) - 1.01) < DBL_EPSILON  && "test11");

}
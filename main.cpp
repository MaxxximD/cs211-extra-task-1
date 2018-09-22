#include "extra-task-1.h"
#include <assert.h>
#include <cmath>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIAN");
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


	assert(to_24_hour_clock(24) == 0 && "test12");
	assert(to_24_hour_clock(48) == 0 && "test13");
	assert(to_24_hour_clock(25) == 1 && "test14");
	assert(to_24_hour_clock(4) == 4 && "test15");


	assert(to_24_hour_clock(24) == 0 && "test12");
	assert(to_24_hour_clock(48) == 0 && "test13");
	assert(to_24_hour_clock(25) == 1 && "test14");
	assert(to_24_hour_clock(4) == 4 && "test15");
	assert(to_24_hour_clock(28.5) == 4.5 && "test16");


	assert(abs(time_to_utc(+0, 12.0) - 12.0) < DBL_EPSILON  && "test17");
	assert(abs(time_to_utc(+1, 12.0) - 11.0) < DBL_EPSILON  && "test18");
	assert(abs(time_to_utc(-1, 12.0) - 13.0) < DBL_EPSILON  && "test19");
	assert(abs(time_to_utc(-11, 18.0) - 5.0) < DBL_EPSILON  && "test20");
	assert(abs(time_to_utc(-1, 0.0) - 1.0) < DBL_EPSILON  && "test21");
	assert(abs(time_to_utc(-1, 23.0) - 0.0) < DBL_EPSILON  && "test22");

	assert(abs(time_from_utc(+0, 12.0) - 12.0) < DBL_EPSILON  && "test23");
	assert(abs(time_from_utc(+1, 12.0) - 13.0) < DBL_EPSILON  && "test24");
	assert(abs(time_from_utc(-1, 12.0) - 11.0) < DBL_EPSILON  && "test25");
	assert(abs(time_from_utc(+6, 6.0) - 12.0) < DBL_EPSILON  && "test26");
	assert(abs(time_from_utc(-7, 6.0) - 23.0) < DBL_EPSILON  && "test27");
	assert(abs(time_from_utc(-1, 0.0) - 23.0) < DBL_EPSILON  && "test28");
	assert(abs(time_from_utc(-1, 23.0) - 22.0) < DBL_EPSILON  && "test29");
	assert(abs(time_from_utc(+1, 23.0) - 0.0) < DBL_EPSILON  && "test30");
    
	cout << "Тесты выполнены успешно!" << endl;

	system("pause");
}
#ifndef EXTRATASK_H
#define EXTRATASK_H

//Return the number of seconds later that a time in seconds time_2 is than a time in seconds time_1.
double seconds_difference(double time_1, double time_2);

// Return the number of hours later that a time in seconds time_2 is than a time in seconds time_1.
double hours_difference(double time_1, double time_2);

double to_float_hours(int hours, int minutes, int seconds);

double to_24_hour_clock(double hours);

int get_hours(double time);

int get_minutes(double time);

int get_seconds(double time);

double time_to_utc(int utc_offset, double time);

double time_from_utc(int utc_offset, double time);

#endif EXTRATASK_H


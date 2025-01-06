#include <stdio.h>
                                                           
struct TimeOfDay {
	int hr, min;
	char am, pm;
	
};
                                                           
char HalfDayLater(struct TimeOfDay now) {
	char x, y;
	now.am = 'a';
	now.pm = 'p';

	x = now.am;
	y = now.pm;

	if (now.pm == 'p') return y;
	return x;
}

struct TimeOfDay GetStartOfDay(void) {
	static struct TimeOfDay temp = {9, 0, 'a'};
	return temp;
}
                                                           
int main() {
	struct TimeOfDay appointment, NextAppointment;
	appointment = GetStartOfDay();
	NextAppointment = appointment;
	 printf("Half of the day %c\n", HalfDayLater(appointment));

	return 0;
}

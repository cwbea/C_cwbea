#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>

#define TRUE	1

struct TimeOfDay {
	int hour;
	int  min;
	int  sec;

};

void GetStartOfDay(struct TimeOfDay Now);



int main () {
	struct TimeOfDay now;
	GetStartOfDay(now);
	
	return 0;
}

void GetStartOfDay(struct TimeOfDay Now) {
	int h, m, s;

	Now.hour = 0;
	Now.min = 0;
	Now.sec = 0;

	h = Now.hour;
	m = Now.min;
	s = Now.sec;

	while (TRUE) {
		system("clear");
		printf("\t\t%02d : %02d : %02d\n", h, m, s);
		fflush(stdout);
		
		s++;
		if (s == 60) {
			m += 1;
			s = 0;
		}

		if (m == 60) {
			h += 1;
			m = 0;
		}

		if (h == 24) {
			h = 0;
			m = 0;
			s = 0;
		}

		sleep(1);
	}
}

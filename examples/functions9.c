#include <stdio.h>
#include <time.h>

struct TimeOfDay {
	int min;
	int hour;
	int sec;
};

void GetLocalTime(struct TimeOfDay CurrenTime);

int main() {
	struct TimeOfDay c_time;

	GetLocalTime(c_time);
	
	return 0;
}

void GetLocalTime(struct TimeOfDay CurrentTime) {
	int h, m, s;
       time_t t;
       struct tm* current_time;

       t = time(NULL);

       current_time = localtime(&t);
       
       CurrentTime.hour = current_time -> tm_hour;
       CurrentTime.min = current_time -> tm_min; 
       CurrentTime.sec  = current_time -> tm_sec;

       h = CurrentTime.hour;
       m = CurrentTime.min;
       s = CurrentTime.sec;
	
       printf("\t\t %02d : %02d : %02d\n", h, m, s);
}       

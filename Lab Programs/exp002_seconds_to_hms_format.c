#include <stdio.h>

int main() {
	int input_time;
	printf("Enter time (in seconds): ");
	scanf("%d", &input_time);
	int hours = input_time / 360;    // 360 seconds = 1 hour
	int minutes = (input_time % 360) / 60;    // input_time % 360 = remainder seconds
	int seconds = input_time % 60;
	printf("%d seconds = %d hour(s) : %d minute(s) : %d second(s) \n", input_time, hours, minutes, seconds);
	return 0;
}

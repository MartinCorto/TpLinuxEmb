#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{

//	system("ngc -d wyclimd");

	while(1){
		system("echo 150>../../sys/devices/platform/stm-pwm/pwm1");
		sleep(3);
		system("echo 200>../../sys/devices/platform/stm-pwm/pwm1");
		sleep(3);
		system("echo 255>../../sys/devices/platform/stm-pwm/pwm1");
		sleep(4);
		system("echo 00>../../sys/devices/platform/stm-pwm/pwm1");
	}


	return 0;
}



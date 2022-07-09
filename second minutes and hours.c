#include<stdio.h>
int main()
{
    int sec1, sec, min, hours;
     printf("Enter time in seconds: ");
	 scanf("%d", &sec1);
	 hours = sec1/3600;
	 min = (sec1 - hours*3600)/60;
	 sec = sec1 - hours*3600 - min*60;
	 printf("inputed seconds = %d\n hours : %d\n minutes : %d\n seconds = %d\n", sec1, hours, min, sec);
	 return 0;
}

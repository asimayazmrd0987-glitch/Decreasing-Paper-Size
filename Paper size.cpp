#include<stdio.h>

int main()
{
	int ao_long=1189, ao_short=841;
	int a1_long=ao_short, a1_short=ao_long/2;
	int a2_long=a1_short, a2_short=a1_long/2; 
	int a3_long=a2_short, a3_short=a2_long/2; 
	int a4_long=a3_short, a4_short=a3_long/2; 
	int a5_long=a4_short, a5_short=a4_long/2; 
	int a6_long=a5_short, a6_short=a5_long/2; 
	int a7_long=a6_short, a7_short=a6_long/2; 
	int a8_long=a7_short, a8_short=a7_long/2;  
	int a9_long=a8_short, a9_short=a8_long/2;
	
	printf("The size of a1 shot is %d x %d\n mm",ao_long, ao_short);
	printf("The size of a2 shot is %d x %d mm\n",a1_long, a1_short);
	printf("The size of a3 shot is %d x %d mm\n",a2_long, a2_short);
	printf("The size of a4 shot is %d x %d mm\n",a3_long, a3_short);
	printf("The size of a5 shot is %d x %d mm\n",a4_long, a4_short);
	printf("The size of a6 shot is %d x %d mm\n",a5_long, a5_short);
	printf("The size of a7 shot is %d x %d mm\n",a6_long, a6_short);
	printf("The size of a8 shot is %d x %d mm\n",a7_long, a7_short);
	printf("The size of last shot is %d x %d mm\n",a8_long, a8_short);
								
	return 0;
}

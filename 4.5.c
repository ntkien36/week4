#include <stdio.h>
#define PI 3.142
 int main()
 {
 	float r,a,c,sa,v;
 	printf("nhap r:");
 	scanf("%f",&r);
 	c = 2.0*PI*r;
 	printf("circumference=%f\n",c);
 	a=PI*r*r;
 	sa=4.0*PI*r*r;
 	v=4.0/3.0*PI*r*r*r;
 	printf("area=%f\n", a);
 	printf("sphere area=%f\n", sa);
 	printf("volume=%f\n", v);
 	return 0;
}
 	

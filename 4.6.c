#include <stdio.h>

 int main()
 {
 	int a,b;
 	printf("The hours for the work week:");
 	scanf("%d/n",&a);
 	if(a <= 40) 
	 { b= 25000*a;
 	   printf("employee's total wages for week=%d\n", b);
	 }
	 else 
	 { b= 40000*a;
	printf("employee's total wages for week=%d\n",b);
	 }
}

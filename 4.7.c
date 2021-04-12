#include <stdio.h>

 int main()
 {
 	int Qty, ISBN, Price, Total;
 	float Pay;
 	char Ti[9];
 	printf("Qty=");
 	scanf("%d",&Qty);
 	printf("ISBN=");
 	scanf("%d",&ISBN);
 	printf("Ti=");
 	scanf("%s",Ti);
 	printf("Price=");
 	scanf("%d",&Price);
 	Total = Qty*Price;
 	printf("BK Bookseller\n");
 	printf("Qty     ISBN      Title     Price      Total\n");
 	printf("	^I\n");
 	printf("%d        %3d        %3s        %3d       %3d\n",Qty,ISBN,Ti,Price,Total);
 	printf("VAT 4\% \n");
 	Pay = Total*1.04;
 	printf("You pay: %f",Pay);
 	return 0;
}
 	
 	
 	

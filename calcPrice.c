#include <stdio.h>

int main(){
	int num,quantity;
	double price,finalPrice;
	char date[10];
	printf("Enter item number:\n");
	scanf(" %d",&num);
	printf("Enter a unit price:\n");
	scanf("%lf",&price);
	printf("Enter quantity:\n");
	scanf(" %d",&quantity);
	printf("Enter purchase date (mm/dd/yyyy):\n");
	scanf(" %s",&date);
	finalPrice = quantity*price;
	printf("Item	Unit Price	QTY	Purchase Date	Total Amount\n");
	printf("%d	$ %.2f		%d	%s	$ %.2f\n",num,price,quantity,date,finalPrice);
	return 0;
}

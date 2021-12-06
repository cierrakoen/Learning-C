#include <stdio.h>

int main(){
	char userNum[13];
	printf("Enter a phone number in the form [(999)999-9999]: \n");
	scanf("%s",userNum);
	char redoNum[12];
	int i;
	for(i=1;i<13;i++){
		if(i<4 || i>4){
			redoNum[i-1] = userNum[i];
		}else{
			redoNum[i-1] = '-';
		}
	}
	redoNum[12] = '\0';
	printf("Your number is %s\n",redoNum);
	return 0;
}
 

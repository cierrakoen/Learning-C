#include <stdio.h>
#include <string.h>
int passcheck(char *pass);
int main(int argc, char const *argv[]){
	char passwd[30];
	int check;
	printf("Please enter a password: ");
	fgets(passwd, sizeof(passwd), stdin);
	char *passptr = (char *) passwd;
	check = passcheck(passptr);
	if(check == 1 )
	printf("The password is safe!");
	else
	printf("The password is unsafe, please reset! Your score deduction was %d!\n", 100-check);
	return 0;
}


int passcheck(char *pass){
	int score = 100;
	int i,size, prev;
	//checks each condition
	int lc= -1;//lowercase
	int uc = -1;//uppercase
	int n = -1;//numbers
	int c1 = -1;//consecutive 1
	int c2 = -1;//consecutive 2
	int len = -1;
	int points;
	//runs through each character 
	char *temp = pass;
	char *temp2 = temp+1;
	for(temp;*temp != '\0';temp++){
		if(lc == -1)
		{	//lowercase
			//each if uses ASCII characters
			if(*temp>96 && *temp<123)
			{
				lc=1;
			}
		}
		if(uc == -1)
		{	//uppercase
			if(*temp>64 && *temp<91)
			{
				uc=1;
			}
		}
		if(n == -1)
		{	//numbers
			if(*temp>47 && *temp<58)
			{
				n = 1;
			}
		}
		if(c1 == -1) //checks consectutive
		{
			if(*temp == *temp2-1)
			{
				c1 = 1;
			}
		}
		if(c1 == 1)
		{
			if(*temp == *temp2-1)
			{
				c2 = 1;
			}
			if(*temp != *temp2-1)
			{
				c1 = -1;
			}
		}
		if(len == -1) //checks the length
		{
			if(strlen(pass)>=10)
			{
				len = 1;
			}
			int length = 10;
			int remainder = length -strlen(pass);
			points= 5 * remainder;
		}
		temp2++;
	}
	if(lc==-1){
	score-=20;
	}
	if(uc==-1){
	score-=20;
	}
	if(n==-1){
	score-=20;
	}
	if(c2==1){
	score-=20;
	}
	if(len==-1){
	score-=points;
	}
	if(score>=70)
	{
	return 1;
	}
	else
	return score;
}

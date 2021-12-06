#include <stdio.h>
char* strcpy(char* strDest, const char* strSrc){
	char *st= strDest;
	while(*strSrc != '\0'){
		*strDest = *strSrc;
		strDest++;
		strSrc++;
	}
	*strDest = '\0';
	return st;
}
int main(){
	char user[1000],copy[1000];
	printf("Enter a string:\n");
	scanf("%s",user);
	printf("This is the string: %s",strcpy(copy,user));
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char SMALLEST_WORD[20]="z";
	char LARGEST_WORD[20]="";
	char word[20];
	while(1){
		printf("type any word: ");
		scanf("%s", word);
		
		if(strcmp(word,SMALLEST_WORD)<0){
			strcpy(SMALLEST_WORD,word);
		}
		if(strcmp(word,LARGEST_WORD)>0){
			strcpy(LARGEST_WORD, word);
		}
		if(strlen(word) == 4){
			break;
		}
	}	
	printf("shortest word: %s\n", SMALLEST_WORD);
	printf("longest word: %s\n", LARGEST_WORD);
	return 0;
}

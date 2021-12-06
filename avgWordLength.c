#include <stdio.h>

int main(){
	int letters,words;
	char character;
	int space =0;

	printf("Enter a Sentence: ");
	while((character=getchar()) != '\n'){
		if(character != ' '){
			if(!space){
				words++;
				space=1;
			}
			letters++;
		}else
			space = 0;
	}

	printf("Average word length : %.1f",(double)letters/words);

	return 0;
}

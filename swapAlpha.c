#include <stdio.h>
#include <string.h>
void swap(char a, char b, char arr1[], char arr2[])	
{
    char *a1 = arr1;
    char *a2 = arr2;
    a=a+b;
    b=a-b;
    a=a-b;
    *a1 = a;
    *a2 = b;
}

int main(){
    int i;
    char arrA[50];
    char arrB[50];
    char *a1 = arrA;
    char *a2 = arrB;
    char *both[2] = {a1, a2};
    printf("Please enter a sentence that is alphanumeric!\n");
    fgets(arrA, sizeof(arrA), stdin);
    printf("Please enter another alphanumeric sentence!\n");
    fgets(arrB, sizeof(arrB), stdin);
    for(i=0;i<strlen(arrA);i++){
        //checks out the characters
        if((arrA[i] >= 48) && (arrA[i] <= 57))
        {
        //swap function takes the numbers from arrA and swaps them to ArrB
             swap(arrA[i], arrB[i], both[0]+i, both[1]+i);
        }
    }
    printf("String 1: %s\nString 2: %s\n", arrA, arrB);
    return 0;
}

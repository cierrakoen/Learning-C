#include <stdio.h>
   // prints array
    double print_array(double a[],int size) {
       //goes through the array by each element and prints it in a line
        int i;
	for (i = 0; i < size; i++) {
           // rounds to 2 decimal places
            printf("%.2f ", a[i]);
        }
	//returns the array
        return *a;
    }
    double sort_numeric(double *array, char c, int size) {
       //variables save assignment
        double min,max;
        int i,j;
        char g = c;
        //the if loop is used for ascending the numbers
            if (g == 'a' || g == 'A') {
		//double loops test each array value
                for (i = 0; i < size; i++) {
                    for (j = 1; j < size - i; j++){
			//if statement to see if the number is bigger than the previous
                        if(*(array+j-1) > *(array+j)){
                            min = *(array+j-1);
                            *(array+j-1)= *(array+j);
                            *(array+j)= min;
                        }
                    }
                }
               //else loop allows the numbers to decend in order
            }else if (g == 'd' || g == 'D') {
		//double loops test each array value
                for (i = 0; i < size; i++) {
                    for (j = 1; j < size - i; j++) {
			//if statement to see if the number is smaller than previous
                        if (*(array + j - 1) < *(array + j)) {
                            max = *(array + j - 1);
                            *(array + j - 1) = *(array + j);
                            *(array + j) = max;
                        }
                    }
                }
                //else statment catches if a user does not give a valid input
            }else {
                printf("Restart and give a valid character!\n");
            }
           // returns the sorted array
        return *array;
    }


    int main() {
        char guess;
        double num[11] = {10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56};
       //universal size that can be changed if we make the array us
        int size = ((int) sizeof(num) / sizeof(num[0]));
        printf("Would you like to the list of numbers Ascending in order or Descending in order? (Type A or D): \n");
        scanf("%c", &guess);
        sort_numeric(num, guess, size);
        print_array(num,size);
        return 0;
    }



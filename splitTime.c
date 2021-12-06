#include <stdio.h>
void split_time(long total_sec, int *hr, int *min,int *sec){
	*hr = total_sec/3600;
	total_sec %= 3600;
	*min = total_sec/60;
	total_sec %= 60;
	*sec = total_sec;		
}
int main(){
	int n,sec,min,hr;
	printf("Enter seconds\n");
	scanf("%d",&n);
	split_time(n,&hr,&min,&sec);
	printf("Converted format: %d hour %d mins %d secs",hr,min,sec);
	return 0;
}

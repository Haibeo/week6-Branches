#include<stdio.h>
int main(){
	int min = 100;
	int c;
	do{
		c = getchar() ;
		if(c != '\n' && c < min){
			min = c;
		}
		}while(c != '\n');
	printf("\n%c",min);
	return 0;
}

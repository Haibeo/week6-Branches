#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
    srand(time(NULL));
    i = rand()%10;
    int j;
    printf("guess my number from 1 to 10 :\n");
    scanf("%d",&j);
    if(j == i){
    	printf("Correct !");
	}else if(j < i){
		printf("Too low !");
	}else{
		printf("Too high !");
	}

return 0 ;
}


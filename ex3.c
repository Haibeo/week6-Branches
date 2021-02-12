#include<stdio.h>
int main(){
	int age;
	printf("enter age :\n");
	scanf("%d",&age);
	printf("\n");
	if(age < 18){
		printf("Child");
	}else if(age >=18 && age < 65){
		printf("Adult");
	}else if(age >=65){
		printf("Senior Citizen");
	}


return 0 ;
}


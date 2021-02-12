#include<stdio.h>
int find_Max(int a,int b){
	if(a > b){
		return a;
	}
	return b;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a == b && b ==c){
    	printf("They're equal");
	}else{
		printf("\nThe largest number is : %d",find_Max(find_Max(a,b),c));
	}

return 0 ;
}


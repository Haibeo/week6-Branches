#include<stdio.h>
int main(){
	float degree;
	scanf("%f",&degree);
	if(degree < 90){
		printf("north %f east",degree);
	}else if(degree >=90 && degree < 180){
		printf("south %f east",180 - degree);
	}else if(degree >=180 && degree <270){
		printf("south %f west",degree - 180);
	}else if(degree >=270 && degree <=360){
		printf("north %f west", 360 - degree);
	}


return 0 ;
}


#include<stdio.h>
int main(){
	int limit,car,x;
	printf("Enter the speed limit: ");
	scanf("%d",&limit);
	printf("Enter the recorded speed of the car: ");
	scanf("%d",&car);
	x=car-limit;
	if(x<=0){
		printf("Congratulations, you are within the speed limit");
	}else if(x>=1&&x<=20){
		printf("You are speeding and your fine is $ 100");
	}else if(x>=21&&x<=30){
		printf("You are speeding and your fine is $ 270");
	}else{
		printf("You are speeding and your fine is $ 500");
	}
	return 0;
}
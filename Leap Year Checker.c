#include<stdio.h>
#include<conio.h>

void main(){
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if((year % 4 == 0) && (year % 400 == 0) || (year % 100 != 0)){
		printf("Leap Year");
	}
	else{
		printf("Not Leap Year");
	}
	getch();
}

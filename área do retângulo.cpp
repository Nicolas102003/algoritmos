#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 
	float h,b,res;
	printf("\n\t �rea do ret�ngulo \n\n");
	printf("\n\t\a digite a base\n\n");
	scanf("%f",&b);
	printf("\n\t \adigite a altura \n\n");
	scanf("%f",&h);
	res=b*h;	
	printf("\n \t \a �rea do ret�ngulo: %.2f\n\n",res); 
	return 0;	
}


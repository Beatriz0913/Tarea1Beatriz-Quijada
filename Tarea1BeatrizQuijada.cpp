#include<iostream>

int main(){
	
	float m,k,bmi;
	
	printf("Escriba su estatura en metros:");
	scanf("%f",&m);	
	
	printf("Escriba su peso en Kilos:");
	scanf("%f",&k);(m*m);
	
	bmi=k/(m*m);	
	printf("Tu BMI es: %.1f \n",bmi);
		
	if(bmi<18.5){
		printf("Esta bajo de peso");
	}
	if(bmi>=18.5&&bmi<24.9){
	    printf("Esta normal de peso");
	}
	if(bmi>25&&bmi<29.9){
	    printf("Esta sobre peso");
    }
    if(bmi>30){
    	printf("Esta Obeso");
    }

	
	return 0;
}

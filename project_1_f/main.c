#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("F\n");
	int iterator=0, suma=0, koniec, input_value;
        printf("koniec=");
	scanf("%d", &koniec);
	do{
		printf("x=");
		scanf("%d", &input_value);
		if (abs(input_value) >= 100 && abs(input_value) <= 999){
			suma += input_value;
			iterator++;
		}
	}while(koniec!=input_value);
	if (iterator > 0){
		printf("%lf\n", (double)suma/iterator);
	}
}

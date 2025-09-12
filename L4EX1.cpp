#include <stdio.h>
	
	int main () {
		float salario = 2500.00;
		float *ptr_salario;
		
		ptr_salario = &salario;
		
		printf("Salario atual: %.2f\n", *ptr_salario);
		
		*ptr_salario = 3000.00;
		printf("Novo salario: %.2f\n", salario);
		
		return 0;
	}

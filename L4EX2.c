#include<stdio.h>

void calcular_retangulo(float largura, float altura, float *area, float *perimetro) {
	*area = largura * altura;
	*perimetro = 2 *(largura + altura);
	
}

int main(){
	float l = 5.0, h = 3.0;
	float area, perimetro;
	
	calcular_retangulo(l, h, &area, &perimetro);
	
	printf("retangulo: %.1f x %.1f\n", l, h);
	printf("Area: %.2f\n", area);
	printf("Perimetro: %.2f", perimetro);
	
	return 0;
}

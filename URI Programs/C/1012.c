#include <stdio.h>

int main(){
	double a, b, c, triangle, circle, trapezium, square, rectangle;
	scanf("%lf%lf%lf", &a, &b, &c);
	triangle = a * c / 2;
	circle = 3.14159 * c * c;
	trapezium = (a + b) * c / 2;
	square = b * b;
	rectangle = a * b;
	printf("TRIANGULO: %.3lf\n", triangle);
	printf("CIRCULO: %.3lf\n", circle);
	printf("TRAPEZIO: %.3lf\n", trapezium);
	printf("QUADRADO: %.3lf\n", square);
	printf("RETANGULO: %.3lf\n", rectangle);
	return 0;
}
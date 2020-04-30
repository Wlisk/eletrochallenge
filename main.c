#include <stdio.h>
#include "headers.h"

// Raio da Terra na linha do Equador em Km aproximados, 
// dados da NASA (https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html)
#define EARTH_RADIUS 6378

int main(void)
{
	// Subtrai-se de 90º graus a latitude (em graus) ao qual desejamos encontrar a circunferência
	double degrees = 90 - 50;
	// Encontramos a distância com esse grau
	double distance = calculate_planet_latitude_circumference(degrees, EARTH_RADIUS);
	// Encontramos a distância que um lápis consegue desenhar/escrever em sua vida útil
	double pencil_distance = get_pencil_distance();
	// Encontra-se a quantidade de lápis que se consegue desenhar em linha reta uma distância (circunferência)
	double pencil_quantity = calculate_pencil_quantity(distance, pencil_distance);

	// Mostramos ("Imprimimos") o valor na tela padrão (standart stdin) sem casas decimais
	printf("%.0lf\n", pencil_quantity);
	return 0;
}
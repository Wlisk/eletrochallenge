#include <math.h>
#include "headers.h"

// Calcula a circunferência da latitude um planeta dado o angulo de sua latitude
double calculate_planet_latitude_circumference(double degrees, double planet_radius)
{
	/* 
		Devido ao C utilizar e retornar na função 'sin()' valores em radianos, 
		deve-se converter o valor de sua entrada de graus para radianos 
		para que os valores retornem corretos.
	*/
	double radians = degrees_to_radians(degrees);

	// Usando a equação trigonométrica
	double latitudinal_radius = sin(radians) * planet_radius;
	
	// Usando a equação da circunferência
	double circumference = 2 * M_PI * latitudinal_radius;

	return circumference;
}

// Retorna o valor da converção de graus para radianos (equação: radianos = grau * PI/180)
double degrees_to_radians(double degrees)
{
	return degrees * M_PI / 180.0;
}

// Calcula a quantidade de lápis necessária para escrever em linha reta uma certa distância
double calculate_pencil_quantity(double distance, double pencil_distance)
{
	// Garante que não haja divisão por zero
	if(pencil_distance == 0) return 0;
	return distance / pencil_distance;
}

// Neste caso utilizaremos a 6 Miles Pencil, um lápis que dura por 6 milhas
// e será necessário fazer a conversão de milhas para kilometros (km = milhas / 0.62137)
double get_pencil_distance(void)
{
	return 6 / 0.62137;
}
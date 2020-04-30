// Garante que a constante PI exista caso as bibliotecas não a tenham definido
#ifndef M_PI 
#define M_PI 3.1415926535 
#endif

// Calcula a circunferência da latitude um planeta dado o angulo de sua latitude
double degrees_to_radians(double degrees);
// Retorna o valor da converção de graus para radianos (equação: radianos = grau * PI/180)
double calculate_planet_latitude_circumference(double degrees, double planet_radius);
// Calcula a quantidade de lápis necessária para escrever em linha reta uma certa distância
double calculate_pencil_quantity(double distance, double pencil_distance);
// Neste caso utilizaremos a 6 Miles Pencil, um lápis que dura por 6 milhas
// e será necessário fazer a conversão de milhas para kilometros (km = milhas / 0.62137)
double get_pencil_distance(void);
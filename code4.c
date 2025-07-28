#include<stdio.h>

int main ()
{
	float a , b , s , m ; //declaration des variables
	
	printf("\tSOMME ET MOYENNE\n");//presentation du programme
	
	printf("Entrer la valeur de la premiere note :");
	scanf("%f",&a);
	printf("Entrer la valeur de la deuxieme note :");
	scanf("%f",&b);
	
	s = a + b ; //calcule de la somme
	m = s / 2 ; //calcule de la moyenne
	
	printf("\tLeur somme vaut %f et la moyenne est de %f \n", s , m );//affichage du resultat
	
	
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <graph.h>

void Sierpinski(int n){
	InitialiserGraphique();
    CreerFenetre(550,20,850,850);
    ChoisirTitreFenetre("Sierpinski");
    couleur e;
	e=CouleurParComposante(237, 237, 237);			// ~blanc
	ChoisirCouleurDessin(e);
	EffacerEcran(e);

	if (n>=0)
	{
		couleur f;
		f=CouleurParComposante(3, 34, 76);			// ~bleu marine
		ChoisirCouleurDessin(f);
		DessinerSegment(25,825,800/2+25,25);
		DessinerSegment(825,825,800/2+25,25);
		DessinerSegment(25,825,825,825);			// ligne droite : x,y, longueur, yy 

		/*DessinerSegment(50*2+20,(670/2+30),(800/2),670);
		DessinerSegment(50*12+5,335,(800/2),670);
		DessinerSegment(800/4+25, 800/2+25, 800*(2/3)+25, 800/2+25);*/
	}

	Touche();
    FermerGraphique();
}

int main(void){
	int n;
	printf("n = ");
	scanf("%d", &n);	
	Sierpinski(n, );
	return EXIT_SUCCESS;
}
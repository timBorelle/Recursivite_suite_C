#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#define LARGEUR 800
#define HAUTEUR 800

void dragon(int n, int x, int y, int xx, int yy) {
  int u, v;
   
  if (n <= 1) {
    DessinerSegment(x, y, xx, yy);
  }
  else {
    u = (x + xx + yy - y) / 2;
    v = (y + yy - xx + x) / 2;
    dragon(n - 1, x, y, u, v);
    dragon(n - 1, xx, yy, u, v);
  }
}

int main(void)
{
	int n;
	InitialiserGraphique();
	CreerFenetre(10,10,LARGEUR,HAUTEUR);
	//
	printf("n = ");
	scanf("%d", &n);	
	
	// n=4
	dragon(n,200,400,400,400);
	Touche();
	FermerGraphique();
	return EXIT_SUCCESS;
}

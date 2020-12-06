#include <stdio.h>
#include <stdlib.h>

int f(int n) { 
  if (n>100)
    return n-10;
  else
    return f(f(n+11));	// Fonction suite 91 de MacCarthy : donne toujours 91.
}
int main(void)
{
	int n;
	printf("n=?");
	scanf("%d", &n);
	printf("%d\n", f(n));
	return EXIT_SUCCESS;
}

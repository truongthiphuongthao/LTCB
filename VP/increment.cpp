#include <stdio.h>

int main () {
	int a = 0;
	printf ("%d", (a=a+1, a-1));
	printf ("\n%d", a);
}

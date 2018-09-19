#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int random[10], pr[10];
	int i;
	int * r = random;
	int * p = pr;

	srand(time(NULL));
	for(i=0;i<10;i++)
		random[i] = rand();
	random[9] = 0;
	for(i=0;i<10;i++)
		printf("%d, ",random[i]);
	printf("\n");

	for(i=9;i>=0;i--)
		p[9-i] = r[i];
	for(i=0;i<10;i++)
		printf("%d, ",pr[i]);

	return 0;
}
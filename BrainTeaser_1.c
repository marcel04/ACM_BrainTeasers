#include <stdio.h>

int main(void)
{
	int i,j;
	for(i=1; i<13; i++){
		for(j=1; j<13; j++){
			printf("%d ", i*j);
		}
		printf("\n");
	}

}
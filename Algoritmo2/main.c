#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  clock_t t;
	t = clock();

	int n=7;
	int div = 2, primo = 1, i;
	for(i=0; i<=n/2;i++){
		if(primo==0){
			i=n;
		}else{
			if(n%div != 0){
				div++;
			}else{
				primo = 0;
			}
		}
	}

  t = clock() - t;
  printf("Tempo de execucao: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
	printf("primo: %d\n", primo);
  return 0;
}
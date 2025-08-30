#include <stdio.h>
int main() {
	int a, d, i=0, b[32], j;
	printf("digite um numero na base decima(ate 4294967295):\n");
	scanf("%d", &a);
	d=a;
	if(a==0){
	    printf("O numero %d na base binaria e 0\n", d);
	} else{
	    while(a>=1) {
		    b[i]=a%2;
		    a=a/2;
		    i=i+1;
	    }
        printf("O numero %d na base binaria e equivalente a:  ", d);
        for(j=i-1; j>=0; j--){
            printf("%d", b[j]);
        }
    }
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,j=1,k=0,n,r=0;
	printf("enter a num\n");
	scanf("%d",&n);
		printf("%d\n",i);
			printf("%d\n",j);
	for(;r<n;r++){
		k=i+j;
		i=j;
		j=k;
			printf("%d\n",k);
	}
	return 0;
}

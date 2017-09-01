#include <stdio.h>
int main(){
	int m=0;
	int n=0;
	printf("Number of lines 'm': ");
	scanf("%d", &m);
	printf("\n");
	printf("number of columns 'n': ");
	scanf("%d", &n);
	printf("\n");
	int matrice[m][n];
	for(int a=0; a<m; a++){
		for(int b=0; b<n; b++){
			printf("Enter value for line %d column %d: ", a+1 , b+1 );
			scanf("%d",&matrice[a][b]);
			printf("\n");
			}
		}
	printf("values inside the matrix: \n");
	for(int a=0; a<m; a++){
		printf("line %d: ", a+1 );
		for(int b=0; b<n; b++){
			printf(" %d  ", matrice[a][b]);
			}
		printf("\n");
	}
	return 0;
}

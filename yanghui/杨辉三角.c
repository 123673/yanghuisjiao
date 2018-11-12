#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[100][100];
	int n;
	while(scanf("%d",&n)!=EOF){
		int  i, j, k;		
			for(j = 0; j < n; j++){
				for(k = 0; k <= j; k++){
					if(k == 0||j == k){
						a[j][k] = 1;
					}
					else{
						a[j][k] = a[j-1][k] + a[j-1][k-1];
					}
				}	
			}
			
			for(j = 0; j < n; j++){
			int x = 1;
			for(k = 0; k <= j; k++){
				if(x==1){
				    printf("%d", a[j][k]);
				    x++;
				}else{
					printf(" %d", a[j][k]);
				}				 
		      }
				printf("\n");	
			}
			printf("\n");
	
	}
}

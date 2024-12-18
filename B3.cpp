#include <stdio.h>

int main(){
	int n;	printf("Moi nhap vao so nguyen N: ");	scanf("%d", &n);
	int a[6][6];
	
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(i == 0 || j == 0 || i == 5 || j == 5)	printf("%d ",n);
			else	printf("  ");
		}
		printf("\n");
	}
}

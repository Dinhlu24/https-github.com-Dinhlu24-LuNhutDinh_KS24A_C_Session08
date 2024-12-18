#include <stdio.h>

int main(){
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	int sum=0;
	printf("Day la duong cheo tren ma tran chinh cua ban: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i == j){
				printf("%d ",a[i][j]);
				sum+= a[i][j];
			}
			else	printf("  ");
		}
		printf("\n");
	}
	printf("Day la tong cua duong cheo nay: %d",sum);
}

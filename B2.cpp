#include <stdio.h>

int main(){
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}},ans;
	printf("Moi ban nhap vao mot phan tu bat ki: ");	scanf("%d",&ans);
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(ans == a[i][j]){
				printf("Phan tu nay ton tai trong mang\nPhan tu %d nam o vi tri i = %d,j = %d",a[i][j],i,j);
				return 0;
			}
		}
	}
	printf("Phan tu khong ton tai trong mang");
}

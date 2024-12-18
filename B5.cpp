#include <stdio.h>

int main(){
	int sum;
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i == 0 || j == 0 || i == 2 || j == 2)	sum += a[i][j];
		}
	}
	printf("Tong cua cac phan tu tren bien la: %d",sum);
}

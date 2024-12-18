#include <stdio.h>

int main(){
	int a[3][3] = {
		{1,5,23},
		{4,3,9},
		{50,20,10}
	};
	int max=a[1][1];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j] > max)	max = a[i][j];
		}
	}
	printf("So lon nhat trong mang la: %d",max);
}

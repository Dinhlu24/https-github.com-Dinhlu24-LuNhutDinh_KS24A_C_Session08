#include <stdio.h>

int main(){
	int a[8] = {1,5,2,3,23,5,1,2};
	int cnt[100]={0};
	
	for(int i=0;i<8;i++){
		cnt[a[i]]++;
	}
	
	int dem = 0, res;
	for(int i=0;i<8;i++){
		if(cnt[a[i]]>dem){
			dem = cnt[a[i]];
			res = a[i];
		}
	}
	printf("phan tu xuat hien nhieu nhat trong mang nay: %d", res);
}

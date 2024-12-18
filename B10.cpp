#include <stdio.h>

int main(){
	int a[8] = {1,5,2,3,23,5,1,2};
	int cnt[100]={0},mark[100]={0};
	
	for(int i=0;i<8;i++){
		cnt[a[i]]++;
	}
	
	int dem = 0, res;
	printf("Cac phan tu xuat hien nhieu nhat trong mang nay: ");
	for(int i=0;i<8;i++){
		if(cnt[a[i]]>dem){
			dem = cnt[a[i]];
		}
		else if(cnt[a[i]] == dem){
			if(res < a[i])	res = a[i];
		}
	}
	
	for(int i=0;i<8;i++){
		if(cnt[a[i]] == dem){
			if(mark[a[i]] == 0 && res > a[i]){
				printf("%d ",a[i]);
				mark[a[i]] = 1;
			}
		}
	}
	printf("%d",res);
	
}

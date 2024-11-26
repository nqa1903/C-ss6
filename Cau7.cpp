#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap vao 1 so nguyen : ");
	scanf("%d",&n);
	if(n == 0){
		printf("%d khong co uoc so ro rang",n);
		return 0;
	}
	for(int i = 1 ; i <= abs(n) ; i++){
		if(n % i == 0){
			printf("%d " , i);
		}
	}
	return 0;
}

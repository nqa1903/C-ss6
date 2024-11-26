#include<stdio.h>
#include<string.h>

int main(){
	char pass[20] = "pass";
	char input[20];
	printf("Vui long nhap mat khau : ");
	scanf("%s", &input);
	if(strcmp(pass, input)==0){
		printf("Chao mung");
	}else{
		printf("Sai mat khau");
	}
	return 0;
}

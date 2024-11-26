#include<stdio.h>

int main(){
	int day , month , year;
	printf("Nhap ngay thang nam : ");
	scanf("%d %d %d",&day ,&month, &year);
	if(1 > month || month > 12){
		printf("Thang khong hop le");
		return 1;
	}
	if(1 > year){
		printf("Nam khong hop le");
		return 1;
	}
	int dayInMonth;
	if(month == 2){
		if(year % 400 == 0){
			dayInMonth = 29;
		}else{
			dayInMonth = 28;
		}
	}else if(month == 4 || month == 6 || month == 9 || month == 11){
		dayInMonth = 30;
	}else{
		dayInMonth = 31;
	}
	if(1 > day || day > dayInMonth){
		printf("Thang %d chi co %d ngay",month,dayInMonth);
		return 1;
	}
	printf("Ngay %d thang %d nam %d",day,month,year);
	return 0;
}

#include <stdio.h>

int main() {
    double tienBanDau, laiSuat, tienLai = 0, tongTien;
    int soThang;
    printf("Nhap so tien gui ban dau : ");
    scanf("%f", &tienBanDau);
    printf("Nhap lai suat thang (%%): ");
    scanf("%f", &laiSuat);
    printf("Nhap so thang gui : ");
    scanf("%d", &soThang);
    laiSuat /= 100;
    tongTien = tienBanDau;
    for (int i = 0; i < soThang; i++) {
        double laiThang = tongTien * laiSuat; 
        tongTien += laiThang;                
    }
    tienLai = tongTien - tienBanDau;
    printf("Tien lai: %.3f\n", tienLai);
    printf("Tien nhan : %.3f\n", tongTien);
    return 0;
}


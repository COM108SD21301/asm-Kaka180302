#include <stdio.h> 
#include <windows.h> 
#include <math.h>
#include <stdlib.h>//Thieu thu vien se bi canh bao ve ham Exit
int main(){
	int luaChon, choice; //kiểu số nguyên
		do
		{
		printf("\033c");
		printf("\nChào mừng bạn đến với ASM của tôi");
		printf("\nNhập 1: Lựa chọn chức năng Số nguyên");
		printf("\nNhập 2: Lựa chọn chức năng tìm UCLN và BCNN");
		printf("\nNhập 3: Lựa chọn chức năng Tính tiền quán Karaoke");
		printf("\nNhập 4: Lựa chọn chức năng Tính tiền điện");
		printf("\nNhập 0: Thoát chương trình");
		printf("\nMời bạn nhập lựa chọn: ");	scanf("%d",&luaChon);
		switch(luaChon){
			case 1:{
                do
				{
					printf("\033c");
					printf("Bạn chọn CN1\n");
					float x;
					int test = 1;
					printf("Mời bạn nhập số thực x: "); scanf("%f", &x);
					//Kiểm tra số Nguyên, CP.
					if(x==(int)x){
						if(x==(int)sqrt(x)*(int)sqrt(x)){
							printf("%.1f là số chính phương\n", x);
						} else {printf("%.1f không phải số chính phương.\n", x);}
						printf("%.1f là số nguyên.\n", x);
					}
					else printf("%.1f là số thực.\n", x);
					//Kiểm tra số nguyên tố.
					if(x <= 1){
						test = 0;
					} else {
						for(int i=2; i <= sqrt(x); i++){
						if((int)x%i==0){
							test = 0;
							break;
						}
						}
					}
					if(test){
						printf("%.1f là số nguyên tố\n", x);
					} 
					else {
						printf("%.1f không phải là số nguyên tố\n", x);
					}
					Sleep(1500);
					printf("Bạn có muốn tiếp tục dùng CN1 không?\n");
					printf("1. CÓ\n");
					printf("2. Không\n");
					printf("Mời bạn nhập lựa chọn: "); 
					scanf("%d", &choice);
				} while(choice != 2);
				break;
			}case 2:{
                printf("Bạn chọn CN2\n");
				break; //Ket thuc chuc nang 2
			}case 3:{
				do
				{
					printf("\033c");
					printf("Bạn chọn CN3\n");
					int batdau ,ketthuc;

					printf("Mời bạn nhập giờ bắt đầu : "); 
					scanf("%d", &batdau);
					printf("Mời bạn nhập giờ kết thúc : "); 
					scanf("%d", &ketthuc);
					if(ketthuc > 24){
						printf("Nhập giờ không hợp lệ, mời bạn nhập lại"); 
						scanf("%d", &ketthuc);
					}
					float tongtien;
					int tonggiohat = ketthuc - batdau;
					if(batdau > 13 && batdau < 18){
						if(tonggiohat <= 3){
						tongtien = tonggiohat * 150000;
						}else{
						int tiengiam = (tonggiohat-3)*150000;
						tongtien = (tiengiam - (tiengiam * 0.3))+450000;
						}
						tongtien = tongtien - (tongtien * 0.1);
					}else{
						if(tonggiohat <= 3){
						tongtien = tonggiohat * 150000;
						}else{
						int tiengiam = (tonggiohat-3)*150000;
						tongtien = (tiengiam - (tiengiam * 0.3))+450000;
						}
					}
					printf("Thành tiền là: %.0f\n", tongtien);
					Sleep(1500);
					printf("Nhập 1 tiếp tục, 0 để thoát khỏi chức năng này: ");
					scanf("%d", &choice);
				} while (choice != 0);
				
				break;	//Ket thuc chuc nang 3
			}case 4:{
				printf("Bạn chọn CN4\n");
				break; //Ket thuc chuc nang 4
			}case 6:{//Lai suat co dinh 5%, thoi gian tra no la 12 thang
                printf("Bạn chọn CN6\n");
				break; //Ket thuc chuc nang 6
			}case 8:{
				//add 8.2 vào đây
                printf("Bạn chọn CN8\n");
				break; //Ket thuc chuc nang 8
			}case 0:{ //Ket thuc 
				printf("Tạm biệt, Cảm ơn bạn đã dùng chương trình!");
				break;
			}default: printf("\nBạn đã nhập sai, mời bạn nhập lại!\n"); break;  
		}
		} while (luaChon != 0);
    
	return 0;
}
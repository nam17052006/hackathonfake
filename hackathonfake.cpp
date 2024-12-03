#include <stdio.h>

int main() {
    int check, n;
    int arr[100];  
    int num;
    int i, position, value;

    do {    
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri lon nhat trong mang\n");
        printf("4. In ra cac phan tu la so nguyen to trong mang\n");
        printf("5. Them mot phan tu vao trong mang\n");
        printf("6. Xoa mot phan tu trong mang\n");
        printf("7. Sap xep theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu va in ra vi tri index cua phan tu do\n");
        printf("9. Thoat \n");
        printf("Lua chon cua ban: ");
        scanf("%d", &check);

        switch (check) {
            case 1:
                printf("Nhap so phan tu can nhap: ");
                scanf("%d", &n);

                printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
            	{
                printf("Gia tri cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
				 }
                break;

            case 3:
              {
              	int max=arr[0];
              	for(int i=1;i<n;i++){
              		if(arr[i]>max){
              			max=arr[i];
					  }
				  }
				  printf("Gia tri lon nhat trong mang: %d\n",max);
			  }
                break;

            case 4:
            {
                 for (int i = 0; i < n; i++) {
			        int num = arr[i];
			        int choise = 1; 
			
			        if (num < 2) {
			            choise = 0; 
			        } else {
			            for (int j = 2; j <= num / 2; j++) { 
			                if (num % j == 0) {
			                    choise = 0; 
			                    break; 
			                }
			            }
			        }
			
			        
			        if (choise==1) {
			            printf("%d ", num);
			        }
			    }
            }
                break;

            case 5:
                {
              					
			
			    printf("Nhap vi tri muon them phan tu : ");
			    scanf("%d", &position);
			 
			    if (position < 0 || position > n) {
			        printf("Vi tri khong hop le\n");
			        return 1;
			    }
			
			    printf("Nhap gia tri muon chen: ");
			    scanf("%d", &value);
					    
			    for (i = n; i > position; i--) {
			        arr[i] = arr[i - 1];
			    } 
				    arr[position] = value;
				    n++;
			
			    printf("Mang sau khi chen gia tri :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
                }
                break;

            case 6:
                {
                printf("Nhap vi tri muon xoa: ");
			    scanf("%d", &position);
			
			   
			    if (position < 0 || position > n) {
			        printf("Vi tri khong hop le\n");
			        return 1;
			    }
			
			     position=position-1;
			    
			    for (i = position; i <n-1; i++) {
			        arr[i] = arr[i+1];
			    } 
				    n--;
			
			    printf("Mang sau khi xoa :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
                }
                break;

            case 7:
                {
                    printf("Mang gom nhung phan tu la :\n");
					for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					    }
				        printf("\n");
					for(int i=1;i<n;i++){
							int key=arr[i];
							int j=i-1;
						while(j>=0&&key<arr[j]){
							arr[j+1]=arr[j];
							j--;
						}
						arr[j+1]=key;
						
					}
					printf("\n");
					printf("Mang sau khi sap xep tang dan ");
					for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					}
                }
                break;

            case 8:
        {
            printf("Mang hien tai la");
			   for(int i=0;i<n;i++){
			     	printf("%d\t",arr[i]);
		    }
		     int numbers;
		     printf("\nNhap vao phan tu can tim ");
		     scanf("%d",&numbers);
		     int check=0;
		      for(int i=0;i<n;i++){
		      	if(arr[i]==numbers){
		      		printf("Phan tu co trong mang nam o vi tri index thu %d\n",i);
		      		check=1;
				  }	 
		    }
		       if(check==0){
		       	printf("Mang khong chua phan tu can tim\n");
			   }
		}
                break;
            case 9:
             printf("Thoat chuong trinh !!! ");
             
			   break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }

    } while (check != 9);  

    return 0;
}

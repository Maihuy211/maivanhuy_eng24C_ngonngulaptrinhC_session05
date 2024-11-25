# include<stdio.h>
int main(){
	int n,a,b,c,sum,average,smallestNumber,largestNumber;
	do{
	   	printf("MENU\n");
		printf("1.Nhap 3 so\n");
		printf("2.tong 3  so\n");
		printf("3.trung binh cong 3 so\n");
		printf("4.so lon nhat\n");
		printf("5.so nho nhat\n");
	    printf("6.thoat\n");
		printf("moi ban nhap lua chon cua ban (1-6): ");
	    scanf("%d",&n);
		
		switch(n){
	  	
	  	case 1:
	  		printf("moi ban nhap so thu nhat: ");
            scanf("%d",&a);
	        printf("moi ban nhap so thu hai: ");
	        scanf("%d",&b);
	        printf("moi ban nhap so thu ba: ");
	        scanf("%d",&c);
	        break;
		case 2:
	  		sum=a+b+c;
			  printf("tong 3 so la: %d\n",sum);
			  break;
		case 3:
	  		average=sum/3;
			  printf("trung binh cong 3 so la: %d\n",average);
			  break;
		case 4:
            if(b>a){
            largestNumber=b;
            }
            if(c>a){
            largestNumber=c;
			}
			printf("so lon nhat la: %d\n",largestNumber);
			 break;
			  
		case 5:
            if(b<a){
            smallestNumber=b;
            }
            if(c<a){
            smallestNumber=c;
            }
            printf("so nho nhat la: %d\n",smallestNumber);
	        }
	}while(n==1||n==2||n==3||n==4||n==5);
	  	
	return 0;
	}

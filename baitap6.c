# include<stdio.h>
int main(){
	int n,a,b,sum,minus,multiply,divide;
	   printf("moi ban nhap so thu nhat: ");
       scanf("%d",&a);
	   printf("moi ban nhap so thu hai: ");
	   scanf("%d",&b);
	   
	   do{
	   	    
	    printf("CALCULATOR\n");
		printf("1.tong 2 so\n");
		printf("2.hieu 2 so\n");
		printf("3.tich 2 so\n");
		printf("4.thuong 2 so\n");
		printf("5.thoat\n");
	    printf("moi ban nhap lua chon cua ban (1-5): ");
	    scanf("%d",&n);
		
		switch(n){
	  	
	  	case 1:
	  		sum=a+b;
			  printf("tong 2 so la: %d\n",sum);
			  break;
		case 2:
	  		minus=a-b;
			  printf("hieu 2 so la: %d\n",minus);
			  break;
		case 3:
	  		multiply=a*b;
			  printf("tich 2 so la: %d\n",multiply);
			  break;
		case 4:
	  		divide=a/b;
			  printf("thuong 2 so la: %d\n",divide);
			  break;
	}
	  	}while(n==1||n==2||n==3||n==4);
	  	
	return 0;
	}

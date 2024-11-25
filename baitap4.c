#include<stdio.h> 
int main(){
  int number,i,result;
     printf("nhap mot so(1-10): ");
	 scanf("%d",&number);
	 if(number>=1&&number<=10){
	   for(i=1;i<=10;i++){
	   	    result=number*i;
            printf("%d * %d = %d\n",number,i,result);
            }
            }else{
            	printf("loi");
			}
         return 0;
         
	}

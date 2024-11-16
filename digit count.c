#include<stdio.h>

int main(){
	
	int number , count = 0;
	
	printf("enter your number :");
	scanf("%d",&number);
	
	if (number == 0){
		count= 1;
	}
	else{
		while (number != 0) {
            number = number / 10; 
            count++;  
	    }
    }
    printf("total number digits :%d\n",count);
    return 0;
    
}

#include<stdio.h>

int main(){
    int number, firstdigit, lastdigit, sum;
    
    printf("Enter any number: ");
    scanf("%d", &number);

    lastdigit = number % 10;
    

    while (number >= 10) {
        number = number / 10;
    }
    firstdigit = number;
    
    sum = firstdigit + lastdigit;

    printf("The sum of the first and last digits is: %d\n", sum); 
    
    return 0;
}

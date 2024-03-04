#include <stdio.h>

struct sum{
  double firstNumber;
  double secondNumber;
  double total;
};

double sumTotal(double firstnumber, double secondnumber){
    struct sum number; 
    number.total = firstnumber + secondnumber;
    return number.total;
}

int main(){
    struct sum number;
    
    printf("Enter first number: ");
    scanf("%lf", &number.firstNumber);
    
    printf("Enter second number: ");
    scanf("%lf", &number.secondNumber);
    
    number.total = sumTotal(number.firstNumber,number.secondNumber);
    
    //Print values
    printf("\nFirst number: %.2lf", number.firstNumber);
    printf("\nSecond number: %.2lf", number.secondNumber);
    printf("\nTotal: %.2lf", number.total);
    
    return 0;
}

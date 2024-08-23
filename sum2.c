#include <stdio.h>
sum2() {    

    int number1, number2, sum;
    
    printf("Enter two integers:  \n\n");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d \n\n", number1, number2, sum);
    // return 0;
}

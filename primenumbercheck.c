#include<stdio.h>

int main(void)
{
    int inputnumber, counter;
    int isPrime;

    scanf("%d", &inputnumber);
    printf("Hello World Karthik\n");
    printf("Your Input Number is %4d\n", inputnumber);

    // Considering all the numbers as prime
    isPrime = 1;

    // Loop through all the number till the input number - 1
    for (counter = 2; counter < inputnumber; counter++)
    {
        printf("Dividing with number %4d\n", counter);
        if (inputnumber % counter == 0)
        {
            isPrime = 0;
            break;
        }
    }

    // Check if the numbner is prime
    if (isPrime == 1)
    {
        printf("The Number is PRIME\n");
    }
    else
    {
        printf("The Number is NOT-PRIME\n");
    }

    return 0;
}

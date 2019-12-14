#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool helperFunction(int num, int divisor){
    if (divisor == 1)
    {
        return true;
    }
    else
    {
        if (num % divisor == 0)
        {
            return false;
        }
        else
        {
            return helperFunction(num, divisor - 1);
        }
    }

}
bool isPrime (int number) {
    const int START_DIVISOR = 2; //HINT: You may want a helper function
    if (number == 0){
        return false;
    }
    if(number == 1){
        return false;
    }
    int check = helperFunction(number, number / START_DIVISOR);
    if (check == true){
        return true;
    }
    if (check==false){
        return false;
    }
    return true;
}

void printPrimes (int n) {
    if (n== 0){
        return;
    }
    if (isPrime(n)){
        printf("%d""%s", n, " ");
    }
    n = n - 1;
    printPrimes(n);
}

int findFibo (int n) {
    if (n == 0){
        return 1;
    }
    if (n<0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return findFibo(n-1) + findFibo(n-2);
}


int helperFunctionTWO(int givenNumber, int startingNumber){
    if (givenNumber == 0){
        return 0;
    }
    if (givenNumber%startingNumber == 0) {
        if(isPrime(startingNumber)) {
            printf("%d""%s", startingNumber, " ");
        }
        if (givenNumber==startingNumber){
            return 0;
        }
    }

    helperFunctionTWO(givenNumber, startingNumber + 1);
    return 0;
}

void findFactors (int number) {
    const int START_DIVISOR = 2; //HINT: You may want a helper function
    int check = helperFunctionTWO(number, START_DIVISOR);
    printf("\n");
    return;
}

int main () {


    int testNum;

    //test for the isPrime function
    printf("Enter a test number - ");
    scanf("%d", &testNum);

    if (isPrime(testNum))
        printf("%d is prime\n", testNum);
    else
        printf("%d is not prime.\n", testNum);

    //test for printing primes
    printf("Enter n to print the prime numbers between 1 and n: ");
    scanf("%d", &testNum);

    printPrimes(testNum);

    printf("\n");


    //test for Fibonacci number finder
    printf("Which Fibonacci number? ");
    scanf("%d", &testNum);

    printf("The %d Fibonacci number is : %d \n", testNum, findFibo(testNum));

    //test for prime factors
    printf("Factor what number? ");
    scanf("%d", &testNum);

    findFactors(testNum);
    return 0;
}

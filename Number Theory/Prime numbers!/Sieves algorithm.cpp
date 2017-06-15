#include<cstdio>
#include<cmath>
#include<iostream>

#define SIZE 30000

int prime[SIZE]; //a global variable for storing prime numbers
                 //If the value is zero it a prime, else a prime

void sieve()
{
    int i,j;

    prime[0]=1; //initializing 0 is not prime
    prime[1]=1; //initializing 1 is not prime

    for(i=4; i<SIZE; i+=2) prime[i]=1; //all the even numbers except 2 are not prime

    int limit=sqrt(SIZE+1);

    for(i=3; i<=limit; i=i+2)
    {
        if(!prime[i])
        {
            for(j=2*i; j<SIZE; j=j+i)
                prime[j]=1;
        }
    }

}

int main()
{
    sieve();

    int a;

//    printf("Enter a number:\n");
//
//    scanf("%d", &a);
//
//    if(prime[a])
//        printf("Not a prime!\n");
//    else
//        printf("Prime!\n");

    for(int i=0; i<SIZE; i++)
        if(!prime[i])
            printf("%d\n", i);

    //main();
}

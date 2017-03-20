/*
* A simple program to find the prime and also the phi of n numbers.
* This program is helpful in case, we need the phi of a lot of numbers.
* Phi is the representation of Euler's Totient function.
* For a number n, The number of all the numbers from 0 to n that are co-primes of n (greater than 1) is phi.
* i.e Phi(12)=4, the numbers are 1,2,3,4,5,6,7,8,9,10,11,12, the co-primes of 12 (greater than 1) are 2,3,5, and 7. So the value of phi is 4
* This program was originally created by Md. Mahbubul Hassan Shanto.
* Edited by: Ali Akber Aakash CSE (Bangladesh National University - 2nd Semester)
* Date: 11.2.2017
*/

#include<cstdio>
#include<cmath>
#include<iostream>

int phi[1000006], prime[1000006]; //declaring the arrays of prime and phi

void sievephi(int n) //we'll find phi and primes till n
{
    int i,j;

    for(i=1; i<=n; i++) phi[i]=i; //initializing the members of phi

    phi[1]=1;   //initializing the first element
    prime[1]=1; //initializing the first element

    for(i=2; i<=n; i++)
    {
        if(!prime[i])   //if the number is prime
        {
            for(j=i;j<=n; j+=i)
            {
                prime[j+i]=1;   //all the numbers that are divisible by i are not prime
                phi[j]=(phi[j]/i)*(i-1);    //for the phi of a number n, we divide n with a prime number p such that n is divisible by p
                                            // and multiply it by (p-1), so we get the phi
            }
        }
    }
}


int main()
{
    int i,n=12;
    sievephi(n);

    for(i=1; i<=n; i++)
        if(!prime[i])
        printf("%d ", i);
    printf("\n");

    for(i=1; i<=n; i++)
        printf("%d = %d\n", i, phi[i]);

    return 0;
}

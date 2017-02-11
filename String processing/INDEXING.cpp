/*
A c++ program to find the first occurrence of pattern p in text t.
If the pattern is found the function returns the position of the beginning of the pattern.
Solved by: ALi Akber Aakash
Date: 27.1.2017
*/


#include<cstdio>
#include<Cstring>
#include<iostream>
#include"stringProcessing.h"


int main()
{
    char t[1000], p[1000];

    printf("Enter a string!\n");
    gets(t);
    printf("Enter the pattern you want to serach\n");
    gets(p);

    int k=index(t,p);

    if(!k)
        printf("The pattern is not found!\n");
    else
        printf("The pattern is found in position : %d\n", k);

    return 0;
}


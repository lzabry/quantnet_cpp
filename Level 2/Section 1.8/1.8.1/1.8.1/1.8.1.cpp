// 1.8.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is intended for creating a strcuture called article and printing it using a function.

#include <stdio.h>
//define the structure of the article
struct Article
{
    unsigned long int article_number;
    unsigned long long int quantity;
    char description[20];
};
//declare Print function
void Print(struct Article* p);

//main method testing the Print function
int main()
{
    struct Article Nature{2648230,100000000,"Alone in Island"};
    Print(&Nature);
}

//Print function prints all the information inlcuded in the struct variable. 
void Print(struct Article* p) 
{
    printf("The article number is %lu\n", (*p).article_number);
    printf("The quantity is %llu\n", (*p).quantity);
    printf("The description is %s\n", (*p).description);

}
//C Program to Validate Password

#include<stdio.h>
#include <stdbool.h>
#include<string.h>

char pwd[25] = "555555";
bool passwordcorrect = false;

void passwordcheck(){
char entered[25]; 
printf("Hello, please enter your password:\n");
gets(entered);
//bool local = false;
if (strcmp(pwd,entered)!=0)
printf("It doesn't work\n");
else {
passwordcorrect = true;
printf("It worked");
//local = true;
} 
//return passwordcorrect;
}

void main()
{
while(passwordcorrect == false)
passwordcheck();
//getch();
}
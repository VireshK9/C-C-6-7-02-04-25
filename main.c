//02/04/2025
//printf() - function to print the output

//Data Types
//1. int - integer
//2. float - decimal numbers
//3. char - single character
//4. string - array of characters
//03/04/2025
//variable 
#include<stdio.h>
int main(){
    int age = 22;
    float percentage = 87.86;
    char grade = 'B';
    char email[] = "omkar@gmail.com";
    
    printf("You are %d years old\n",age);
    printf("You have got %f percent\n",percentage);
    printf("You have got a %c grade\n",grade);
    printf("Your email is :- %s",email);
}

//Rules for Naming Variables
// 1.We cannot use space in between the name of variable.
// 2.We cannot use number at the start of the variable name.
// 3. We can only use letters ,numbers and underscore in the variable name.

//Types of casing -  roll no
//1.Camel Casing - rollNo - JavaScript
//2.Snake Casing - roll_no - C,C++,Python,Java


//04/04/2025
// Taking Input from User - scanf()
//Example 1
#include <stdio.h>
int main() {
    int age;

    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Your age is %d",age);
}

//Example 2
#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name : ");
    scanf("%s",name);

    printf("Hello %s, Good Evening !",name);
}

//Addition of two numbers
#include <stdio.h>
int main() {
    int num1;
    int num2;
    
    printf("Enter the value of num 1 : ");
    scanf("%d",&num1);
    
    printf("Enter the value of num 2 : ");
    scanf("%d",&num2);
    
    int add = num1 + num2;
    printf("Addition of %d and %d is %d",num1,num2,add);
}
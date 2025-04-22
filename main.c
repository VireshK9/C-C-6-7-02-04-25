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

//05/04/25
//Arithmetic Operators

#include <stdio.h>
int main() {
    //Operators
    //1.Arithmetic Operators
    // + , - , / , * , %
    
    printf("%d\n",10+20);
    printf("%d\n",20-10);
    printf("%d\n",20/10);
    printf("%d\n",20*10);
    printf("%d\n",20%3);
}

//Comparison Operators
// > , < , >= , <= , == , !=

#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    
    // True - 1 , False - 0
    
    printf("%d\n",a>b); //0
    printf("%d\n",a<b); //1
    printf("%d\n",a>=b);//0
    printf("%d\n",a<=b);//1
    printf("%d\n",a==b);//0
    printf("%d\n",a!=b);//1
}

//Logical Operators
// && - and , || - or , ! - not
#include <stdio.h>
int main() {
    // && , || , !
    
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    
    printf("%d\n", a<b && c<d ); //1
    printf("%d\n", a<b && c>d ); //0
    printf("%d\n", a<b || c>d ); //1
    printf("%d\n", !(c<d) ); //0
}

//Constants
#include <stdio.h>
int main() {
    const float pi = 3.14159; // Constant variable
    printf("%f",pi)
}

//Control Statements
//if/else


//if/else if/else
#include <stdio.h>
int main() {
    // if/else if/else
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if(age>=60){
        printf("Ticket Price = Rs.600");
    }
    else if(age>=18){
        printf("Ticket Price = Rs.400");
    }
    else{
        printf("Ticket Price = Rs.200");
    }
}

//Nested if/else
#include <stdio.h>
int main() {
    // if/else if/else
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if(age>=60){
        printf("Ticket Price = Rs.600");
    }
    else if(age>=18){
        int h;
        printf("Enter your height : ");
        scanf("%d",&h);
        if(h>=5){
            printf("Ticket Price = Rs.500");
        }
        else{
            printf("Ticket Price = Rs.400");
        }
    }
    else{
        printf("Ticket Price = Rs.200");
    }
}

//Multiple if Statements
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if(age>=60){
        printf("Ticket = Rs.600\n");
    }
    if(age>=18){
        printf("Ticket = Rs.400\n");
    }
    if(age<18){
        printf("Ticket = Rs.200\n");
    }
}

//Switch Statement
#include<stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

//Loops
// For Loop
#include<stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}

// While Loop
#include<stdio.h>
int main() {
    int count = 1;
    while(count <= 5) {
        printf("Count: %d\n", count);
        count++;
    }
    return 0;
}

// Nested For Loop
#include<stdio.h>
int main() {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= 3; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}

// Do-While Loop
#include<stdio.h>
int main() {
    int count = 1;
    do {
        printf("Count: %d\n", count);
        count++;
    } while(count <= 5);
    return 0;
}

// Break and Continue
#include<stdio.h>
int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            continue; // Skip the rest of the loop when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}
// Break Example
#include<stdio.h>
int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            break; // Exit the loop when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}

//Array 
// 1D Array Example
#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

// 2D Array Example
#include<stdio.h>
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}

// 3D Array Example
#include<stdio.h>
int main() {
    int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
    return 0;
}

// Functions Example
#include<stdio.h>

// Function declaration
void greet() {
    printf("Hello, Welcome to Functions in C!\n");
}

int main() {
    // Function call
    greet();
    return 0;
}

// Function with Parameters Example
#include<stdio.h>

// Function declaration with parameters
void addNumbers(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call with arguments
    addNumbers(num1, num2);
    return 0;
}

//Recursion
#include <stdio.h>

int sum(int n){
    if(n>0){
        return n + sum(n-1);
    }
    else{
        return 0;
    }
}

int main() {
    int result = sum(100);
    
    printf("%d",result);
}

//Math Functions
#include<stdio.h>
#include<math.h>

int main() {
    printf("%f\n",sqrt(16));
    printf("%f\n",ceil(1.4));
    printf("%f\n",floor(1.9));
    printf("%f\n",pow(4,3));
}
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
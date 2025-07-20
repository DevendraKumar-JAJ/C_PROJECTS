#include<stdio.h>
#include<conio.h>
#include<math.h>

//Temp Calculator

/* 
F to c
F to K
C to K
C to F
K to F
K to C
*/

int main(){

    //Taking Input from user..... 
    int T;
    float Tem;
    printf("\t\t\nK_ Kelvin, F_Fahrenheit, C_Celsius\t\t\t\t\nEnter[1_F to C,\n 2_F to K,\n 3_C to K,\n 4_C to F,\n 5_K to F,\n 6_K to C]\t\n:\t");
    scanf("%d",&T);

    //Giving output to user...
    switch (T)
    {
    // Fahrenhiet to Celsius
    case 1:
        printf("\n\nEnter Your Fahrenheit No.\t:\t ");
        scanf("%f",&Tem );
        printf("\n\nIn Celsius  result is  \t:\t%f Degree C\n\n ",(Tem-32)*5/9);
    break;
    // Fahrenhiet to Kelvin
        case 2:
        printf("\n\nEnter Your Fahrenheit No.\t:\t ");
        scanf("%f",&Tem );
        printf("\n\nIn Kelvin  result is  \t:\t%f K\n\n ",(Tem-32)*5/9+273.15);
    break;
// Celsius to Kelvin
        case 3:
        printf("\n\nEnter Your Celsius No.\t:\t ");
        scanf("%f",&Tem );
        printf("\n\nIn Kelvin  result is  \t:\t%f K\n\n ",Tem+273.15);
    break;
// Celsius to Fahrenheit
        case 4:
        printf("\n\nEnter Your Celsius No.\t:\t ");
        scanf("%f",&Tem );
        printf("\n\nIn Fehrenheit  result is  \t:\t%f Degree F\n\n ",(Tem*9/5)+32);
    break;
// Kelvin to Fahrenheint
        case 5:
        printf("\n\nEnter Your Kelvin No.\t:\t ");
        scanf("%f",&Tem );
        printf("\n\nIn Fahrenheit  result is  \t:\t%f Degree F\n\n ",(Tem-273.15)*9/5+32);
    break;
// Kelvin to Celsius
        case 6:
        printf("\n\nEnter Your Kelvin No.\t:\t ");
        scanf("%f",&Tem );
        printf("\n\nIn Celsius  result is  \t:\t%f Degree C\n\n ",(Tem-273.15));
    break;

    

    
    default: printf("\n\n Wrong Input Try Again\t \n\n");
        break;
    }
}
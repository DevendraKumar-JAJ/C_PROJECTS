#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(){

int Data,work_on;
int value;



printf("\nEnter no. for work on..[ 1_Bites. 2_Bytes. 3_Kilobytes. 4_Megabytes. 5_Gigabytes. 6_Terabytes. 7_Petabytes. ] :\t");
scanf("%d",&work_on);

switch (work_on)//Switch_1 on....
{
case 1://Code for work on bites.....
    printf("\nEnter no. for change this to that [ 1_Bites-to-bytes. 2_Bites-to-Kilobytes. 3_Bites-to-Megabytes. 4_Bites-to-Gigabytes. ] :\t");
    scanf("%d",&Data);

    switch (Data)//Switch_2 on....
    {
    case 1://Bites-to-Bytes
        printf("\nEnter Storage/Data in Bites.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Bytes =Approx %d Bytes.",value/8);
        
        break;

    case 2://Bites-to-Kilobytes
        printf("\nEnter Storage/Data in Bites.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Kilobytes =Approx %d Kilobytes.",value/8/8);
        
        break;

    case 3://Bites-to-Megabytes
        printf("\nEnter Storage/Data in Bites.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Megabytes =Approx %d Megabytes.",value*1024*1024/8);
        
        break;

    case 4://Bites-to-Gigabytes
        printf("\nEnter Storage/Data in Bites.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Gigabytes =Approx %d Gigaytes.",value*1024*1024*1024/8);
        
        break;
    
    default:printf("\nPlease Retry......[Wrong Input]");
        break;
    }//Switch_2 off......

    break;

case 2://Code for work on bytes.....
    printf("\nEnter no. for change this to that [ 1_Bytes-to-Bites. 2_Bytes-to-Kilobytes. 3_Bytes-to-Megabytes. 4_Bytes-to-Gigabytes. ] :\t");
    scanf("%d",&Data);

    switch (Data)//Switch_3 on....
    {
    case 1://Bytes-to-Bites
        printf("\nEnter Storage/Data in Bytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Bites =Approx %d Bites.",value*8);
        break;

    case 2://Bytes-to-Kilobytes
        printf("\nEnter Storage/Data in Bytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Kilobytes =Approx %d Kilobytes.",value/1024);
        break;

    case 3://Bytes-to-Megabytes
        printf("\nEnter Storage/Data in Bytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Megabytes =Approx %d Megabytes.",value/1048576);
        break;

    case 4://Bytes-to-Gigabytes
        printf("\nEnter Storage/Data in Bytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Gigabytes =Approx %d Gigaytes.",value/1073741824);
        break;
    
    default:printf("\nPlease Retry......[Wrong Input]");
        break;
    
    }//Switch_3 off......

    break;

case 3://Code for work on Kilobytes.....
    printf("\nEnter no. for change this to that [ 1_Kilobytes-to-Bites. 2_Kilobytes-to-Bytes. 3_Kilobytes-to-Megabytes. 4_Kilobytes-to-Gigabytes. 5_Kilobytes-to-Terabytes. 6_Kilotes-to-Petabytes. ] :\t");
    scanf("%d",&Data);

    switch (Data)//Switch_4 on....
    {
    case 1://Kilobytes-to-Bites
        printf("\nEnter Storage/Data in Kilobytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Bites =Approx %d Bites.",value*1024*8);
        break;

    case 2://Kilobytes-to-Bytes
        printf("\nEnter Storage/Data in Kilobytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Bytes =Approx %d Bytes.",value*1024);
        break;

    case 3://Kilobytes-to-Megabytes
        printf("\nEnter Storage/Data in Kilobytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Megabytes =Approx %d Megabytes.",value/1024);
        break;

    case 4://Kiloytes-to-Gigabytes
        printf("\nEnter Storage/Data in Kilobytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Gigabytes =Approx %d Gigabytes.",value/1048576);
        break;

    case 5://Kiloytes-to-Terabytes
        printf("\nEnter Storage/Data in Kilobytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Terabytes =Approx %d Terabytes.",value/1073741824);
        break;
    
    default:printf("\nPlease Retry......[Wrong Input]");
        break;
    
    }//Switch_4 off......

    break;

case 4://Code for work on Megabytes.....
    printf("\nEnter no. for change this to that [ 1_Megabytes-to-Bytes. 2_Bites-to-Kilobytes. 3_Kilobytes-to-Gigabytes. 4_Kilobytes-to-Terabytes. 5_Kilobytes-to-Petabytes. ] :\t");
    scanf("%d",&Data);

    switch (Data)//Switch_5 on....
    {
    case 1://Megabytes-to-Bytes
        printf("\nEnter Storage/Data in Megabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Bytes =Approx %d Bytes.",value*1024*1024);
        break;

    case 2://Megabytes-to-Kilobytes
        printf("\nEnter Storage/Data in Megabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Megabytes =Approx %d Megabytes.",value*1024);
        break;

    case 3://Megabytes-to-Gigabytes
        printf("\nEnter Storage/Data in Megabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Gigabytes =Approx %d Gigabytes.",value/1024);
        break;

    case 4://Megabytes-to-Terabytes
        printf("\nEnter Storage/Data in Megabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Terabytes =Approx %d Terabytes.",value/1048576);
        break;

    case 5://Megabytes-to-Petabytes
        printf("\nEnter Storage/Data in Megabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Petabytes =Approx %d Petaytes.",value/1073741824);
        break;
    
    default:printf("\nPlease Retry......[Wrong Input]");
        break;
    
    }//Switch_6 off......


    break;

case 5://Code fo work on Gigabytes.....
    printf("\nEnter no. for change this to that [ 1_Gigabytes-to-Kilobytes. 2_Gigabytes-to-Megabytes. 3_Gigabytes-to-Terabytes. 4_Gigabytes-to-Petabytes. ] :\t");
    scanf("%d",&Data);

    switch (Data)//Switch_7 on....
    {
    case 1://Gigabytes-to-Kilobytes
        printf("\nEnter Storage/Data in Gigabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Kilobytes =Approx %d  Kilobytes.",value*1024*1024);
        break;

    case 2://Gigabytes-to-Megabytes
        printf("\nEnter Storage/Data in Gigabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Megabytes =Approx %d Megabytes.",value*1024);
        break;

    case 3://Gigabytes-to-Terabytes
        printf("\nEnter Storage/Data in Gigabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Terabytes =Approx %d Terabytes.",value/1024);
        break;

    case 4://Gigabytes-to-Petabytes
        printf("\nEnter Storage/Data in Gigabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Petabytes =Approx %d Petabytes.",value/1048576);
        break;

    default:printf("\nPlease Retry......[Wrong Input]");
        break;
    
    }//Switch_7 off......

    break;

case 6://Code fo work on Terabytes.....
    printf("\nEnter no. for change this to that [ 1_Terabytes-to-Megabytes. 2_Terabytes-to-Gigabytes. 3_Terabytes-to-Petabytes. ] :\t");
    scanf("%d",&Data);

    switch (Data)//Switch_8 on....
    {
    case 1://Terabytes-to-Megabytes
        printf("\nEnter Storage/Data in Terabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Megabytes =Approx %d Megabytes.",value*1024*1024);
        break;

    case 2://Terabytes-to-Terabytes
        printf("\nEnter Storage/Data in Terabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Terabytes =Approx %d Terabytes.",value*1024);
        break;

    case 3://Terabytes-to-Petabytes
        printf("\nEnter Storage/Data in Terabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Petabytes =Approx %d Petabytes.",value/1024);
        break;

    default:printf("\nPlease Retry......[Wrong Input]");
        break;
    
    }//Switch_8 off......


    break;

case 7://Code fo work on Petabytes.....
    printf("\nEnter no. for change this to that [ 1_Petabytes-to-Gigabytes. 2_Petabytes-to-Terabytes. ] :\t");
    scanf("%d",&Data);

    switch (Data)//Switch_7 on....
    {
    case 1://Petabytes-to-Gigabytes
        printf("\nEnter Storage/Data in Petaabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Gigabytes =Approx %d Gigabytes.",value*1024*1024);
        break;

    case 2://Petabytes-to-Terabytes
        printf("\nEnter Storage/Data in Petabytes.:\t");
        scanf("%d",&value);

        printf("Your Data/Storage in Terabytes =Approx %d Terabytes.",value*1024);
        break;

    default:printf("\nPlease Retry......[Wrong Input]");
        break;
    
    }//Switch_8 off......

    break;
    

default:printf("\nPlease Retry......[Wrong Input]");
    break;
}//Switch_1 off.....


    return 0;
}
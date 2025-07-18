#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

int shape_type;
int shape_name,shape_name_2;

int For;
float leangth, width, area, redius, height, Diagonal_1, Diagonal_2;


printf("\n\nEnter Shape Type\t[\t\t1_2D.\t\t2_3D.\t\t]\t\t:\t");
scanf("%d",&shape_type);







switch (shape_type)//Switch 1st
{
case 1://For 2D shape_name
    printf("\n\nEnter shape name \t[\t\t1_for Rectangle.\t\t2_for Square.\t\t3_for Circle.\t\t4_for Triangle.\t\t5_for Rhombus\t\t]\t\t:\t");
    scanf("%d",&shape_name);

    switch (shape_name)//Switch 2nd
    {
    case 1://For Rectangle functions
        printf("\n\nEnter\t[\t\t1_for find Area.\t2_for find Perimeter.\t3_for find Diagoal.\t4_for find Leangth.\t5_for find Width.\t]\t:\t");
        scanf("%d",&For);

        //Functions
        switch (For)//swith 4th
        {
        case 1://For area of Rectangle
            printf("\n\nEnter Leangth of Rectangle.\t:\t\t");
            scanf("%f",&leangth);

            printf("\n\nEnter Width of Rectangle.\t:\t\t");
            scanf("%f",&width);

            printf("\n\nArea of Rectangle is =\t\t%f",(leangth*width));
            break;

        case 2://For Perimeter of Rectangle
            printf("\n\nEnter Leangth of Rectangle.\t:\t\t");
            scanf("%f",&leangth);

            printf("\n\nEnter Width of Rectangle.\t:\t\t");
            scanf("%f",&width);

            printf("\n\nPerimete of Rectangle is =\t\t%f",2*(leangth+width));
            break;  
                
        case 3://For Diagonal of Rectangle
            printf("\n\nEnter Leangth of Rectangle.\t:\t\t");
            scanf("%f",&leangth);

            printf("\n\nEnter Width of Rectangle.\t:\t\t");
            scanf("%f",&width);

            printf("\n\nA diagonal of Rectangle is =\t\t%f",sqrt((width*width)+(leangth*leangth)));
            break;

        case 4://For Leangth of Rectangle
            printf("\n\nEnter Area of Rectangle.\t:\t\t");
            scanf("%f",&area);

            printf("\n\nEnter Width of Rectangle.\t:\t\t");
            scanf("%f",&width);

            printf("\n\nLeangth of Rectangle is =\t\t%f",(area/width));
            break;

        case 5://For Width of Rectangle
            printf("\n\nEnter Leangth of Rectangle.\t:\t\t");
            scanf("%f",&leangth);

            printf("\n\nEnter Area of Rectangle.\t:\t\t");
            scanf("%f",&area);

            printf("\n\nWidth of Rectangle is =\t\t%f",(area/leangth));
            break;
            

            break;
        
        default:printf("Wrong input please Retry.\n\n");
            break;//Rectangle function is over.....
        }
        break;//End of switch 4th

    case 2://For Square functions
        printf("\n\nEnter\t[\t1_for find Area.\t\t2_for find Perimeter.\t\t3_for find Diagonal.\t\t4_for find Side.\t\t]\t\t:");
        scanf("%d",&For);



// Functions
        switch (For)// swith 5th
        {
        case 1://For Area of Squre...
            printf("\n\nEnter a Side of Square.\t\t:\t");
            scanf("%f",&leangth);

            printf("Area of Square is=\t%f",(leangth*leangth));
            break;

        case 2://For Perimeter of Squre...
            printf("\n\nEnter a Side of Square.\t\t:\t");
            scanf("%f",&leangth);

            printf("Perimeter of Square is=\t%f",(4*leangth));
            break;

        case 3://For Diagonal of Squre...
            printf("\n\nEnter a Side of Square.\t\t:\t");
            scanf("%f",&leangth);

            printf("A diagonal of Square is=\t%f",sqrt(2)*leangth);
            break;

        case 4://For Side of Squre...
            printf("\n\nEnter  Area of Square.\t\t:\t");
            scanf("%f",&area);

            printf("Side of Square is=\t%f",sqrt(area));
            break;
        
        default:printf("Wrong input please Retry.\n\n");
            break;// Squre function is over...
        }
        break;//End of switch5th


    case 3://For Circle functions
        printf("\n\nEnter\t[\t1_for find Area.\t\t2_for find Circumference.\t\t3_for find Redius.\t\t]\t\t:\t");
        scanf("%d",&For);


// Functions
        switch (For)//switch 6th
        {
        case 1://For Area of Circle...
            printf("\n\nEnter Redius of Circle\t:\t ");
            scanf("%f",&redius);
    
            printf("\n\nArea of Circle is=\t%f",((redius*redius)*3.14));
            break;
    
        case 2://For Circumference of Circle...
            printf("\n\nEnter Redius of Circle\t:\t ");
            scanf("%f",&redius);
    
            printf("\n\nCircumference of Circle is=\t%f",(3.14*(redius)*2));
            break;
    
        case 3://For Redius of Circle...
            printf("\n\nEnter Area of Circle\t:\t ");
            scanf("%f",&area);
    
            printf("\n\nRedius of Circle is=\t%f",sqrt(area/3.14));
            break;
        
        
        default:printf("Wrong input please Retry.\n\n");
            break;// Circle function is over...
        }
            break;// End of switch 6th

    case 4://For Triangle functions
        printf("\n\nEnter\t[\t1_for find Area.\t\t2_for find Perimeter.\t\t3_for find Height.\t\t]\t\t:\t");
        scanf("%d",&For);


//Functions
        switch (For)//switch 7th
        {
        case 1://For Area of Triangle....
            printf("\n\nEnter Height of Tringle\t:\t");
            scanf("%f",&height);

            printf("\n\nEnter Base of Tringle\t:\t");
            scanf("%f",&width);

            printf("\n\nArea of Triangle is=\t:\t%f",(height*width)/2);
            break;

        case 2://For Perimeter of Triangle....
            printf("\n\nEnter Side_1 of Tringle\t:\t");
            scanf("%f",&height);

            printf("\n\nEnter Side_2 of Tringle\t:\t");
            scanf("%f",&width);

            printf("\n\nEnter Side_3 of Tringle\t:\t");
            scanf("%f",&leangth);

            printf("\n\nPerimeter of Triangle is=\t:\t%f",leangth+width+height);
            break;

        case 3://For Height of Triangle....
            printf("\n\nEnter Area of Tringle\t:\t");
            scanf("%f",&area);

            printf("\n\nEnter Base of Tringle\t:\t");
            scanf("%f",&width);

            printf("\n\nHeight of Triangle is=\t:\t%f",(2*area/width));
            break;
        
        default:printf("Wrong input please Retry.\n\n");
            break;//Triangle function is over....
        }
            break;//End of swithch 7th

    case 5://For Rhombus functions
        printf("\n\nEnter \t[\t1_for find Area.\t\t2_for find Perimeter.\t\t3_for find Diagoal.\t\t4_for find Side.\t\t]\t\t:\t");
        scanf("%d",&For);

//Functions
        switch (For)// switch 8th
        {
        case 1://For Area of Rhombus....
            printf("\n\nEnter Diagonal_1 of Rhombus\t:\t");
            scanf("%f",&Diagonal_1);

            printf("\n\nEnter Diagonal_2 of Rhombus\t:\t");
            scanf("%f",&Diagonal_2);

            printf("\n\nArea of Rhombus is=\t:\t%f",(Diagonal_1*Diagonal_2)/2);
            break;

        case 2://For Perimeter of Rhombus....
            printf("\n\nEnter Side of Rhombus\t:\t");
            scanf("%f",& leangth);

            printf("\n\nPerimeter of Rhombus is=\t:\t%f",(4*leangth));
            break;

        case 3://For Diagnoal of Rhombus....
            printf("\n\nEnter Diagonal_1 or Diagonal_2 of Rhombus\t:\t");
            scanf("%f",&Diagonal_1);

            printf("\n\nEnter Area of Rhombus\t:\t");
            scanf("%f",&area);

            printf("\n\nDignoal_2 or Diagonal_2 of Rhombus is=\t:\t%f",(2*area)/Diagonal_1);
            break;

        case 4://For Side of Rhombus....
            printf("\n\nEnter Diagonal_1 of Rhombus\t:\t");
            scanf("%f",&Diagonal_1);

            printf("\n\nEnter Diagonal_2 of Rhombus\t:\t");
            scanf("%f",&Diagonal_2);

            printf("\n\nSide of Rhombus is=\t:\t%f",(sqrt((Diagonal_1*Diagonal_1)+(Diagonal_2*Diagonal_2))/2));
            break;
        
        default:("Wrong input please Retry.\n\n");
            break;//Rhombus function is over
        }
        break;//End of switch 8th

    
    default:printf("\n\nWrong Input.");
        break;
    }
    break;//End of switch 2nd............................

case 2:
    printf("\n\nEnter shape name\t[\t1_for Cube.\t\t2_for Cuboid.\t\t3_for Sphere.\t\t]\t:\t");
    scanf("%d",&shape_name);

    switch (shape_name)//Switch 3rd
    {
    case 1://For Cube functions
        printf("\n\nEnter \t[\t1_for find Area.\t\t2_for find Volume.\t\t]\t\t:");
        scanf("%d",&For);

//functions
        switch (For)//switch 9th
        {
        case 1://For Area of Cube..
            printf("\n\nEnter Side of Cube\t:\t");
            scanf("%f",&width);

            printf("\n\nArea of Cube is=\t%f",6*(width*width));
            break;

        case 2://For Volume of Cube..
            printf("\n\nEnter Side of Cube\t:\t");
            scanf("%f",&width);

            printf("\n\nVolume of Cube is=\t%f",(width*width))*width;
            break;
        
        default:printf("\n\nWrong Input.");
            break;//End of switch 9th
        }
        break;//Cube functions is over..

    case 2://for Cuboid functions
        printf("\n\nEnter \t[\t1_for find Area.\t\t2_for find Volume.\t\t]\t\t:\t");
        scanf("%d",&For);

//Functions
        switch (For)//Switch 10th
        {
        case 1://For Area of Cuboid..
            printf("\n\nEnter Leangth of Cuboid\t:\t");
            scanf("%f",&leangth);

            printf("\n\nEnter Width of Cuboid\t:\t");
            scanf("%f",&width);

            printf("\n\nEnter Height of Cuboid\t:\t");
            scanf("%f",&height);

            printf("\n\nArea of Cuboid is=\t%f",2*((leangth*width)+(width*height)+(height*leangth)));
            break;

        case 2://For Volume of Cuboid..
            printf("\n\nEnter Leangth of Cuboid\t:\t");
            scanf("%f",&leangth);

            printf("\n\nEnter Width of Cuboid\t:\t");
            scanf("%f",&width);

            printf("\n\nEnter Height of Cuboid\t:\t");
            scanf("%f",&height);

            printf("\n\nVolume of Cuboid is=\t%f",(height*width)*leangth);
            break;//Cuboid functions if over...
        
        default:printf("\n\nWrong Input.");
            break;//End of Switch 10th
        }
        break;//End of Cuboid Functions..

    case 3://for Sphere functions
        printf("\n\nEnter \t[\t1_for find Area.\t\t2_for find Volume.\t\t]\t\t:\t");
        scanf("%d",&For);

//Functions
    switch (For)//Switch 11th
    {
    case 1://For Area of Sphere..
            printf("\n\nEnter Redius  of Sphere\t:\t");
            scanf("%f",&redius);

            printf("\n\nArea of Sphere is=\t%f",4*((3.14)*redius*redius));
            break;

        case 2://For Volume of Sphere..
            printf("\n\nEnter Redius of Sphere\t:\t");
            scanf("%f",&redius);

            printf("\n\nVolume of Sphere is=\t%f",((3.14)*redius*redius*redius)*4/3);
            break;//Sphere functions if over...
        
        default:printf("\n\nWrong Input.");
            break;//End of Switch 11th
    }
        break;//Sphre functions is over...
    
    default:printf("\n\nWrong Input.");
        break;//End of switch 3rd...........................
    }
    break;

default:printf("\n\nWrong Shape type.");
    break;//End of switch 1st.................................
}

return 0;

}
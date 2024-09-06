//********************************************************
// fracturing.c
// Author: Rebecca Shiju
// Date: 9/04/2024
// Class: COP 3223, Professor Parra
// Purpose: The main purpose of this assignment is to breakdown each function 
//with different responsibilities assigned to it. 
// Input: None
//
// Output: This assignment gives the calculation of distance, height, width, perimeter, and area of a circle. 
// //********************************************************



#include <stdio.h>
#include <math.h>
#define PI 3.1415

//********************************************************
// double calculate_distance()
// Purpose:         Initiates the calculation of the distance of a circle.
// Output:          Prints the distance output for the cirlce.
//********************************************************

double calculate_distance()
{
    double x1, x2, y1, y2, distance;
        
         printf("\nEnter the value for point x1: ");
     scanf("%lf", &x1);
         printf("\nEnter the value for point x2: ");
     scanf("%lf", &x2);
         printf("\nEnter the value for point y1: ");
     scanf("%lf", &y1);
         printf("\nEnter the value for point y2: ");
     scanf("%lf", &y2);
       

    double x_squared = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    printf("square root is: %lf\n", x_squared);
    distance = sqrt(x_squared);
    printf("the distance between the two points are: %0.3lf\n", distance);

    
    return distance;
}

//********************************************************
// double calculate_height()
// Purpose:         Initiates the calculation of the height of a circle.
// Output:          Prints the height output for the cirlce.
//********************************************************

double calculate_height()
{
    
    double h = calculate_distance();
    printf ("\nheight of the circle: %0.3lf", h);
    double difficultylevel = 5.0;

return difficultylevel;
}

//********************************************************
// double calculate_width()
// Purpose:         Initiates the calculation of the width of a circle.
// Output:          Prints the width output for the cirlce.
//********************************************************

double calculate_width()
{

    double w = calculate_distance();
    printf ("\nwidth of the circle: %0.3lf", w);
    double difficultylevel = 5.0;

    return difficultylevel;
}

//********************************************************
// double calculate_perimeter()
// Purpose:         Initiates the calculation of the perimeter of a circle.
// Output:          Prints the perimeter output for the cirlce.
//********************************************************

double calculate_perimeter()

{
    double distance = calculate_distance();
    double p = 2 * (distance + distance);
	printf("\nperimeter of the circle: %0.3lf", p);
    double difficultylevel = 5.0;

    return difficultylevel;
}

//********************************************************
// double calculate_area()
// Purpose:         Initiates the calculation of the area of a circle.
// Output:          Prints the area output for the cirlce.
//********************************************************

double calculate_area()
{
    double distance = calculate_distance();
    double a = (distance * distance);
    printf("\narea of the circle: %0.3lf", a);
    double difficultylevel = 5.0;
    
    return difficultylevel;
}
    
// double int main(int argc, char *argv[])
// Purpose:         This is where we call all the above functions.
// Output:          Prints each of the functions and asks for inputs from the user.

int main(int argc, char *argv[])
{

    calculate_distance();

    calculate_height();

    calculate_width();
    
    calculate_perimeter();

    calculate_area();


    return 0;
}

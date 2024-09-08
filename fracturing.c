//********************************************************
// fracturing.c
// Author: Rebecca Shiju
// Date: 9/04/2024
// Class: COP 3223, Professor Parra
// Purpose: The main purpose of this assignment is to breakdown each function 
//with different responsibilities assigned to it. 
// Input: Inputs by the user
//
// Output: This assignment gives the calculation of distance, height, width, perimeter, and area of a circle. 
// //********************************************************



#include <stdio.h>
#include <math.h>
#define PI 3.1415

// double calculateDistance()
// Purpose:         Initiates the calculation of the distance of a circle.
// Output:          Prints the distance output for the circle.


double calculateDistance()
{
    double x1, x2, y1, y2, distance;

	//user inputs for each variable        
         printf("\nEnter the value for point x1: ");
     scanf("%lf", &x1);
         printf("\nEnter the value for point x2: ");
     scanf("%lf", &x2);
         printf("\nEnter the value for point y1: ");
     scanf("%lf", &y1);
         printf("\nEnter the value for point y2: ");
     scanf("%lf", &y2);
       

    double x_squared = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    printf("square root is: %0.3lf\n", x_squared);                   //prints the square root based on the user inputs for each variable
    
    distance = sqrt(x_squared);
    printf("the distance between the two points are: %0.3lf\n", distance);   //prints the distance between two points in a circle based on user inputs for each variable

    
    return distance;
}

// double calculateHeight()
// Purpose:         Initiates the calculation of the height of a circle.
// Output:          Prints the height output for the circle.

double calculateHeight()
{
    
    double h = calculateDistance();
    printf ("\nheight of the circle: %0.3lf", h);     //prints the height of circle based on user inputs
    double difficultylevel = 5.0;

return difficultylevel;
}

// double calculateWidth()
// Purpose:         Initiates the calculation of the width of a circle.
// Output:          Prints the width output for the circle.

double calculateWidth()
{

    double w = calculateDistance();
    printf ("\nwidth of the circle: %0.3lf", w);      //prints the width of circle based on user inputs
    double difficultylevel = 5.0;

    return difficultylevel;
}

// double calculatePerimeter()
// Purpose:         Initiates the calculation of the perimeter of a circle.
// Output:          Prints the perimeter output for the circle.

double calculatePerimeter()

{
    double distance = calculateDistance();
    double p = PI * (distance);
	printf("\nperimeter of the circle: %0.3lf", p);   //prints the perimeter of circle based on user inputs
    double difficultylevel = 5.0;

    return difficultylevel;
}

// double calculateArea()
// Purpose:         Initiates the calculation of the area of a circle.
// Output:          Prints the area output for the circle.

double calculateArea()
{
    double distance = calculateDistance();
    double a = PI * (distance * distance)/4;
    printf("\narea of the circle: %0.3lf", a);           //prints the area of circle based on user inputs
    double difficultylevel = 5.0;
    
    return difficultylevel;
}
    
// double int main(int argc, char *argv[])
// Purpose:         This is where we call all the above functions.
// Output:          Prints each of the functions and asks for inputs from the user.

int main(int argc, char *argv[])
{

//calling all the functions defined above
    calculateDistance();

    calculateHeight();

    calculateWidth();
    
    calculatePerimeter();

    calculateArea();


    return 0;
}

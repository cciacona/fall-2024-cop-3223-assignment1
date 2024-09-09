//********************************************************
// fracturing.c
// Author: Carmine Iacona, 5589593
// Class: COP 3223, Professor Parra
// Purpose: Write a program that uses multiple functions 
// and does calculations given a set of points.
// 
// Input: 5 sets of points: (x1,y1)U(x2,y2) for first 3 
// sets. (x1,x2) and (y1,y2) for last 2.
// Output: distance, perimeter, area, width, height (cli) 
//********************************************************

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main function
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Values must be seperated by a single space.\nEnter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate the perimeter
double calculatePerimeter() {
    printf("Calculating Perimeter\n");
    double distance = calculateDistance(); // Use the distance function to avoid redundancy
    double perimeter = 2 * PI * (distance / 2); // Assuming distance is the diameter, so we are converting to radius
    printf("The perimeter of the circle is %.2lf\n", perimeter);
    return perimeter;
}

// Function to calculate area
double calculateArea() {
    printf("Calculating Area\n");
    double distance = calculateDistance();
    double area = PI * pow((distance / 2), 2); // distance is the diameter
    printf("The area of the circle is %.2lf\n", area);
    return area;
}

// Function to calculate width
double calculateWidth() {
    double x1, x2;
    printf("Enter x1 for Point #1: ");
    scanf("%lf", &x1);
    printf("Enter x2 for Point #2: ");
    scanf("%lf", &x2);
    
    double width = fabs(x2 - x1);
    printf("The width between the two points is %.2lf\n", width);
    return width;
}

// Function to calculate height
double calculateHeight() {
    double y1, y2;
    printf("Enter y1 for Point #1: ");
    scanf("%lf", &y1);
    printf("Enter y2 for Point #2: ");
    scanf("%lf", &y2);
    
    double height = fabs(y2 - y1);
    printf("The height between the two points is %.2lf\n", height);
    return height;
}
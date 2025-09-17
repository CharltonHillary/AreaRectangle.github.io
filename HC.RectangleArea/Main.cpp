//Hillary Charlton
//Rectangle Area
//Assignment 2

#include <iostream> /
#include <conio.h> 

using namespace std;
//function prototypes
int getLengthFromUser();
int getWidthFromUser();
int calculateArea(int length, int width);
void displayArea(int area);


int main()
{
    //declare variables and call functions
    int length = getLengthFromUser();
    int width = getWidthFromUser();
    int area = calculateArea(length, width);
    displayArea(area);
    

    (void)_getch();
    return 0;
}

// get length from user
int getLengthFromUser()
{   
    int length;
    cout << "Enter a positive integer for the length in centimeters: \n";
    cin >> length;

    return length;

}
//get width from user
int getWidthFromUser()
{
    int width;
    cout << "Enter a positive integer for the width in centimeters: \n";
    cin >> width;

    return width;

}

//calculate area
int calculateArea(int length, int width)
{   
   return length * width;

}

//display area
void displayArea(int area)
{

    cout << "The area of the rectangle is: " << area << " cm. \n";

 
}





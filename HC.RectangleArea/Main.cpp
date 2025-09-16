//Hillary Charlton
//Rectangle Area
//Assignment 2

#include <iostream> /
#include <conio.h> 

using namespace std;

int getLengthFromUser(int length);
int getWidthFromUser(int width);
int calculateArea(int length, int width);

int main()
{


    int number = calculateArea(0,0);
    cout << "The area of the rectangle is: " << number << " cm. \n";

    (void)_getch();
    return 0;
}

int getLengthFromUser(int length)
{   
    
    cout << "Enter a positive integer for the length in centimeters: \n";
    cin >> length; 

    return length;
}

int getWidthFromUser(int width)
{
    cout << "Enter a positive integer for the width in centimeters: \n";
    cin >> width;

    return width;
}

int calculateArea(int length, int width)
{   

    int area = getLengthFromUser(0) * getWidthFromUser(0);
    
   return area;

}



//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        10/29/24
// Class:       
// Assignment:  Points (More Functions)
// Purpose:     The user will enter two points. The program will 
//			        determine the the distance between the points, the points
//			        from left to right, and which point is closest to the 
//			        origin. 
// Hours:       
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void printAsterisks (int totalAsterisks);
void printHeading (string title);

void getPoint (string prompt, int &x, int &y);
void displayPoint (int x, int y);
double getDistance (int x1, int y1, int x2, int y2);
void orderLeftToRight (int &x1, int &y1, int &x2, int &y2);
void findClosestToOrigin (int x1, int y1, int x2, int y2,
                        	int &closestX, int &closestY);

/***********************************************************************
Function:     main

Description:  Performs some calculations on points as described in the
							program's purpose.

Parameters:   None

Returned:     Exit Status
***********************************************************************/
int main () {
	const int PRECISION_AMOUNT = 2;
	int x1, y1, x2, y2, closestX, closestY;

	cout << fixed << setprecision (PRECISION_AMOUNT);

	printHeading ("Fun with Coordinate Systems");
	cout << endl << endl;

	// Add code to produce the output on the lab specification. Write and
	// test one function at a time.
	
	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			printAsterisks

Description:	Outputs the specified number of asterisks

Parameters:		totalAsterisks - number of asterisks to output

Returned:			None
***********************************************************************/
void printAsterisks (int totalAsterisks) {
	for (int i = 0; i < totalAsterisks; ++i) {
		cout << "*";
	}
}

/***********************************************************************
Function:			printHeading

Description:	Outputs a heading by outputting a name between a row of
							asterisks

Parameters:		title - name of the heading

Returned:			None
***********************************************************************/
void printHeading (string title) {
	const int NUM_ASTERISKS = static_cast<int> (title.length ());
	printAsterisks (NUM_ASTERISKS);
	cout << endl << title << endl;
	printAsterisks (NUM_ASTERISKS);
}

/***********************************************************************
Function:			getPoint

Description:	Read the point from the user

Parameters:		prompt - user input prompt
							x      - the x value of the point
				      y      - the y value of the point

Returned:			None
***********************************************************************/


/***********************************************************************
Function:			displayPoint

Description:	Display the point to the screen

Parameters:		x - the x value of the point
				      y - the y value of the point

Returned:			None
***********************************************************************/


/***********************************************************************
Function:			getDistance

Description:	Calculate the distance between the points. Return distance.

Parameters:		x1 - the x value of the first point
							y1 - the y value of the first point
							x2 - the x value of the second point
							y2 - the y value of the second point

Returned:			the distance between the points
***********************************************************************/


/***********************************************************************
Function:			orderLeftToRight

Description:	Order the points from left to right using the x values.
							The left most point ends up in x1, y1, the rightmost point
							ends up in x2, y2

Parameters:		x1 - the x value of the first point
							y1 - the y value of the first point
							x2 - the x value of the second point
							y2 - the y value of the second point

Returned:			None
***********************************************************************/


/***********************************************************************
Function:			findClosestToOrigin

Description:	Determine which of two points is closer to (0, 0).
							Return the point via closestX, closestY

Parameters:		x1 - the x value of the first point
							y1 - the y value of the first point
							x2 - the x value of the second point
							y2 - the y value of the second point
							closestX - the x value of the point closest to the origin
							closestY - the y value of the point closest to the origin

Returned:			None
***********************************************************************/
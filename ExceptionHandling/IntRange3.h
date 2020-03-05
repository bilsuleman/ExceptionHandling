#ifndef INTRANGE3_H
#define INTRANGE3_H  

#include <iostream>
using namespace std;

class IntRange3
{
private:
   int input;	// For user input
   int lower;	// Lower limit of range
   int upper;	// Upper limit of range
public:
   // Exception class
   class OutOfRangeHigh
   {
   private:
	   int value, upper, lower;
   public:
	   OutOfRangeHigh(int i, int u, int l) { value = i; upper = u; lower = l; }
	   int getValue() { return value; }
	   int getUpper() { return upper; }
	   int getLower() { return lower; }
   };
   class OutOfRangeLow
   {
   private:
	   int value, upper, lower;
   public:
	   OutOfRangeLow(int i, int u, int l) { value = i; upper = u; lower = l; }
	   int getValue() { return value; }
	   int getUpper() { return upper; }
	   int getLower() { return lower; }
   };
   // Member functions
   IntRange3(int low, int high)	// Constructor
   { 
      lower = low; 
      upper = high;
   }
   int getUpper() { return upper; }
   int getLower() { return lower; }
   int getValue() { return input; }
   int getInput()
   { 
	cin >> input;
	if (input > upper)
		throw OutOfRangeHigh(input, getUpper(), getLower());
	else if (input < lower)
		throw OutOfRangeLow(input, getUpper(), getLower());
	return input;
   }
};
#endif
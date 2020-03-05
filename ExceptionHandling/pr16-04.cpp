// This program demonstrates the IntRange3 class.
#include <iostream>
#include "IntRange3.h" 
using namespace std; 

int main()
{
   IntRange3 range(5, 10);
   int userValue;

   cout << "Enter a value in the range 5 - 10: ";
   try
   {
       userValue = range.getInput();
       cout << "You entered " << userValue << endl;
   }
   catch (IntRange3::OutOfRangeHigh ex)
   {
       cout << "That value " << ex.getValue()
            << " is out of range. The upper limit was: " << ex.getUpper() << endl;
   }
   catch (IntRange3::OutOfRangeLow ex)
   {
	   cout << "That value " << ex.getValue()
		   << " is out of range. The lower limit was: " << ex.getLower() << endl;
   }

   cout << "End of the program.\n";
   return 0;
}
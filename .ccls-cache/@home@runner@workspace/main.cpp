#include <iostream>
#include "Date.h"

using namespace std;

int main() {
  //Create a date object using the default constructor and display the date using the first date format.
  Date date1;
  cout << "From the default constructor: ";
  date1.printDate1();
  cout << endl;

  //Create a date object using the constructor with parameters and display the date using the second date format.
  Date date2(10, 31, 2025);
  cout << "From the constructor with parameters: ";
  date2.printDate2();
  cout << endl;

  //Use one of the date objects to test the setDate() function and display the result using the third date format.
  date1.setDate(2, 24, 2011);
  cout << "From the setDate() function: ";
  date1.printDate3();
  cout << endl;

  //Use setDate() to set the date to 13/45/2018 and verify that this date is not accepted.
  date1.setDate(13, 45, 2018);
  cout << "From the setDate() function with invalid date (13/45/2018): ";
  date1.printDate1();
  cout << endl;

  //Use setDate() to set the date to 4/31/2000 and verify that this date is not accepted.
  date1.setDate(4, 31, 2000);
  cout << "From the setDate() function with invalid date (4/31/2000): ";
  date1.printDate1();
  cout << endl;

  //Use setDate() to set the date to 2/29/2009 and verify that this date is not accepted.
  date2.setDate(2, 29, 2009);
  cout << "From the setDate() function with invalid date (2/29/2009): ";
  date2.printDate1();
  cout << endl;

  //Set the first date object to 4/10/2014 and the second date object to 4/18/2014 subtract the second date from the first date, the result should be 8 days.
  cout << "4/10/2014 - 4/18/2014 = ";
  date1.setDate(4, 10, 2014);
  date2.setDate(4, 18, 2014);
  cout << date1 - date2 << " days" << endl;

  //Set the first date to 2/2/2006 and the second date to 11/10/2003, subtract the second date from the first date, the result should be 815 days
  cout << "2/2/2006 - 11/10/2003 = ";
  date1.setDate(2, 2, 2006);
  date2.setDate(11, 10, 2003);
  cout << date1 - date2 << " days" << endl;

  //Set the date to 2/29/2008 and verify that the pre-increment operator sets the date to 3/01/2008. Then use the pre-decrement operator and verify that the date gets set back to 2/29/2008.
  cout << "Pre-increment and pre-decrement operators: " << endl;
  date1.setDate(2, 29, 2008);
  cout << "Original date: ";
  date1.printDate1();
  cout << "After pre-increment: ";
  (++date1).printDate1();
  cout << "After pre-decrement: ";
  (--date1).printDate1();
  cout << endl;

  //Repeat the previous two steps using the post-decrement and post-increment operators.
  cout << "Post-increment and post-decrement operators: " << endl;
  date1.setDate(2, 29, 2008);
  cout << "Original date: ";
  date1.printDate1();
  cout << "After post-increment: ";
  (date1++).printDate1();
  cout << "After post-decrement: ";
  (date1--).printDate1();
  cout << endl;

  //Set the date to 12/31/2024, use the post-increment operator, print the date using one of the print formats, and verify that the date is set to 1/1/2025. Then use the post-decrement operator to verify that the date gets set back to 1/1/2025.
  cout << "Post-increment and post-decrement operators: " << endl;
  date1.setDate(12, 31, 2024);
  cout << "Original date: ";
  date1.printDate1();
  cout << "After post-increment: ";
  (date1++).printDate1();
  cout << "After post-decrement: ";
  (date1--).printDate1();
  cout << endl;

  //Repeat the previous two steps using the pre-increment and pre-decrement operators.
  cout << "Pre-increment and pre-decrement operators: " << endl;
  date1.setDate(12, 31, 2024);
  cout << "Original date: ";
  date1.printDate1();
  cout << "After pre-increment: ";
  (++date1).printDate1();
  cout << "After pre-decrement: ";
  (--date1).printDate1();
  cout << endl;

  //Use cin and the >> operator to read a date typed in at the keyboard.
  cout << "Enter a date (mm dd yyyy): ";
  cin >> date1;
  cout << "You entered: " << date1 << endl;
  cout << "Note: If the date is invalid, 1/1/1900 will be printed.";

  
  return 0;
}
  
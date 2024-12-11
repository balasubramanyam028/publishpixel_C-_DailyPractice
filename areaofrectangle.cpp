#include <iostream> // header file to use libraries like print and scan etc
using namespace std; // to customize names and variables

main ()

{
    float length,breadth,area; // declaration ff variables
    cout << "enter length of rectangle "<< endl;
    cin >> length;// enter length value here
    cout << "enter breadth of rectangle "<< endl;
    cin >> breadth; // enter breadth value here 
    area = length * breadth;// formula here
    cout << " the area of rectangle is " << area << endl; // output
    return 0;
}
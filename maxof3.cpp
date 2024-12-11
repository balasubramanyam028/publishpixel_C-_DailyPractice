#include <iostream>
using namespace std;

main ()
{
    int a,b,c; // declare variables 

    cout << "enter a value : "; cin >> a; cout << " enter b value :"; cin >> b; cout << " enter c value :"; cin >> c;

    if( a>=b && a>= c) // condition to check if a is greater than b and c
    {
        cout << "a is greater than b and c " << endl;
    }
    else if (b>=a && b>=c)  // condition to check if b is greater than a and c
    
    {
        cout << "b is greater than a and c " << endl;

    }

    else 
    {
        cout << "c is greater than a and b " << endl; // this will print if c is greater than a and b
    }


    return 0;
}
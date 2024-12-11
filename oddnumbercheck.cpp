#include <iostream>
using namespace std;

 main ()
{
    int number;

    cout << " enter a number : " ;
    cin >> number;

    if (number%2 ==0)
    {
        cout <<"the given number is even " << endl; // to check if the given number is even
    }
    else {
        cout << " the given number is odd "<< endl; // to check if the given number is odd
    }
    

    return 0;
}
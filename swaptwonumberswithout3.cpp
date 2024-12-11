#include <iostream>

using namespace std;

main ()

{
    int a;
    int b;
    cout << " enter both a and b values : "<< endl;
    cin >> a >> b ;
    cout << " before swapping " << " the value of a is  : "<< a << " ,the value of b is " << b << endl;

    a= a+b;
    b= a-b;
    a = a-b;
    cout << " after swapping " << " the value of a is  : "<< a << " ,the value of b is " << b << endl;

    return 0;
}
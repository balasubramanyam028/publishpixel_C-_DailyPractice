#include <iostream>
using namespace std;

main ()
{
    int principle,rate,time,SI;

    cout << " enter principle value " << endl;
    cin >> principle;

    cout << " enter rate value " << endl;
    cin >> rate;

    cout << " enter time value " << endl;
    cin >> time ;

    SI = principle * rate * time /100;

    cout << " si for the given value is " << SI << endl;


}
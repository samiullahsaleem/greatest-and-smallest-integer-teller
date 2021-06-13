#include <iostream>

using namespace std;

int main()
{
    int num , smallestNum, largetNum, counter;
    smallestNum = 0;
    largetNum = 0;
    counter  = 0 ;
    while(counter == 0)
    {
        cout << "Please Enter any Integer: " << endl;
        cout << "IF you want to stop this program. Please Enter -99. " << endl;
        cin  >> num ;
        if(num == -99)
        {
            counter = 1;
            
        }
        if(num > largetNum)
        {
            largetNum = num;
        }
        if(num != -99)
        {
            if(num < smallestNum )
        {
            smallestNum = num;
        }
        }

        
    }
    cout << "\nThe larget Integer is: "   << largetNum << endl;
    cout << "The smallest Integer is: " << smallestNum << endl;
    cout << "-99 cannot be the smallest integer because it is used to stop the program." ;
    return 0;
}

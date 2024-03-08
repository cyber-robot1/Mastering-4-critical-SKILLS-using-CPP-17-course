#include <iostream>
using namespace std;  

int main()
{
    int X, Y;   
    cin >> X >> Y;
    
    double pow = 1; 
    
    if (Y < 0)  // if exponent is negative.
    {
        Y *= -1;
        while (Y--)
            pow *= (1 / double(X));
    }
    else   // if exponent is positive or zero.
    {
        while (Y--)      
            pow *= X;     
    }
    
    cout << pow << endl;
    
    return 0;
}

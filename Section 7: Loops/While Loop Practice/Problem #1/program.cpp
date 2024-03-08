#include <iostream>
using namespace std; 

int main()
{
    int X;
    cin >> X;
    
    int i = 1;
    while (i <= X)
    {
        if (i % 3 == 0)
            cout << i << " ";
        i++;
    }
    
    return 0;
}

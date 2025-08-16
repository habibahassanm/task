#include <iostream>
using namespace std;
int main() 
{
    int m[2][2];

    cout << "Enter 4 numbers for a 2x2 matrix:\n";

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)

            cin >> m[i][j];

    int sum = 0;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            sum += m[i][j];

    cout << "Sum of all elements = " << sum << endl;
    
    return 0;
}
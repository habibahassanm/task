#include <iostream>
using namespace std;
int main()
 {
    int a[4];
    cout << "Enter 4 integers: ";
    
    for (int i = 0; i < 4; ++i) cin >> a[i];

    int mx = a[0];
    for (int i = 1; i < 4; ++i)
        if (a[i] > mx) mx = a[i];

    cout << "Maximum = " << mx << endl;
    return 0;
}
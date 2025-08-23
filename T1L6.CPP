#include <iostream>
#include <vector>
using namespace std;
int sumVector(const vector<int>& v) {
    int sum = 0;
    for (int num : v)
     {
        sum += num;
    }
    return sum;
}

int main() {
    vector<int> numbers = {2, 4, 6, 8};
    cout << "Sum = " << sumVector(numbers) << endl;
    return 0;
}
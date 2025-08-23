#include <iostream>
#include <vector>
using namespace std;

void addValue(vector<int>& v, int value) {
    for (int &num : v) {
        num += value;
    }
}

int main() {
    vector<int> numbers = {1, 2, 3};
    addValue(numbers, 5);

    cout << "Updated vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
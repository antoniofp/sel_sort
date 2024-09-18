#include <iostream>
#include <vector>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        int minVal = i;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[minVal]) {
                minVal = j;
            }
        }
        if (minVal != i) {
            swap(vec[i], vec[minVal]);
        }
        
    }
}

int main() {
    vector<int> vec = {5, 2, 9, 1, 5, 6};
    selectSort(vec);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
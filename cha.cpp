#include <iostream>
#include <algorithm>
using namespace std;

void pairSum(int, int, int[]);

int main() {
    int arr[20], S, N;
    
    cout << "Enter the Number: " << endl;
    cin >> S;
    
    cout << "Enter No. of Numbers to be used: " << endl;
    cin >> N;
    
    cout << "Enter Numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + N); // Sort the array in ascending order
    
    pairSum(S, N, arr);
    
    return 0;
}

void pairSum(int s, int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == s) {
                cout << arr[i] << "\t" << arr[j] << "\n";
            }
        }
    }
}

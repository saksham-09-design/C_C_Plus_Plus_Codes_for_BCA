#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    void pairSum(int, int, int[]);
   int arr[20], S, N;
   cout << "Enter the Number" << endl;
   cin >> S;
   cout << "Enter No. of Numbers to be used" << endl;
   cin >> N;
   cout << "Enter Numbers";
   for(int i=0;i<N;i++){
      cin >> arr[i];
   }
   for(int i=0;i<N;i++){
      if(arr[i+1]<arr[i]){
         int temp;
         temp = arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
      }
   }
   pairSum(S,N,arr);
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
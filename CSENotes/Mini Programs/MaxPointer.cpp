#include <iostream>

using namespace std;

int main(){
    int n;
    int max = 0;
    int i;

    cout << "Enter Number of Values Wanted: " << endl;
    cin >> n;
    cout << "Enter Values into Array: " << endl;
    int arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int t = 0; t <= n; t++){
        if(arr[t]>=max){
            max=arr[t];
        }
    }
    int *pointer = &max;
    cout << *pointer << endl;
    cout << max;

    return 0;
}
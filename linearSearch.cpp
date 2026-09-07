#include <iostream>
using namespace std;

int main() {
    //building a pattern first
    for(int i= 0;i<5;i++){
        for(int j=1;j<i;j++){
            cout<<" * ";
        }
        cout<<""<<endl;
    }
    int n, key;

   
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cin >> key;
    

    
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found." << endl;
    }

    return 0;
}
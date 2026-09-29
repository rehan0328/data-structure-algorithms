#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "\nEnter a Number to be Converted: ";
     int nums;
    cin >> nums;
     int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string str[] = { "M", "CM", "D", "CD", "C", "XC","L", "XL", "X", "IX", "V", "IV", "I"};
    string result = "";
   int n = sizeof(values) / sizeof(values[0]);
   for (int i = 0; i < n; i++) {

        while (nums >= values[i]) {
            nums = nums - values[i];
            result.append(str[i]);
        }
    }
    cout << "Roman Numeral: " << result << endl;
     return 0;
}
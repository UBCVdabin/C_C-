#include <iostream>
#include <regex>

using namespace std;

void Question_01() {
    int k;
    
    cout << "Enter an integer for creating an array: ";
    cin >> k;

    int arr[k];

    for (int i = 0; i < k; i++) {
        cout << "Enter an item in arr[" << i <<  "]: ";
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++) {
        if (arr[i] % 2 == 0) {
             cout << "The Item in arr[" << i <<  "] is an even number " << arr[i] << endl;
        }
    }
}
bool SafeDblEquals(double num1, double num2, double epsilon = 0.000001) { 
    double z = abs(num1 - num2);
 
    if (z < epsilon)
        return true;
    else 
        return false;
}

void Question_02() {
    double d1, d2;

    cout << "Enter a double value for d1: ";
    cin >> d1;

    cout << "Enter a double value for d2: ";
    cin >> d2;

    if(SafeDblEquals(d1, d2)) {
        cout << "Two double values are same" << endl;
    }
    else {
        cout << "Two double values are different" << endl;
    }
}

void Question_03() {
    string str;   
    regex re("^\\d{3}-\\d{3}-\\d{3}$");

    cout << "Enter a SIN: ";
    cin >> str;

    if (regex_match(str, re)) {
        cout << str << " is a valid social insuarance number" << endl;
    }
    else {
        cout << str << " is an invalid social insuarance number" << endl;
    }  
}

int main(void)
{
    // Question_01();
    // Question_02();
    Question_03();
    return 0;
}

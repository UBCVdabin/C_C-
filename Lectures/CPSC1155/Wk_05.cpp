#include "../../Common/Util.h"

Util util;

void Question_01() {
    string str = util.getstr("Enter a string: ");
    char ch;

    if (str.length() < 6) {
        util.println("There is no character in index 5");
    }
    else {
        util.println("The character in index 5 is " + util.str(str.at(5)));
    }
}



void Example_01() {
    int value = 1;

    // switch(not enable to check range) 문이 if-else (enable to check range) 문보다 처리속도가 빠르다
    switch (value)                  // Only integer and char are  suitable as checking value (not string, double)
    {
    case 0:
        cout << "case 0" << endl;
        break;
    case 1:
        cout << "case 1" << endl;
        break;
    case 2:
        cout << "case 2" << endl;
        break;        
    default:
        cout << "default case" << endl;
        break;
    }
}

void Example_02() {
    string str;

    cout << "Enter a string: ";

    getline(cin, str, '\n');

    for (int i = 0; i < str.length(); i++) {
        cout << (char)toupper(str.at(i)) << endl;
    }
}

void Example_03() {
    int x, i = 0;
    int countHeads = 0, countTails = 0;
    util.setRandom();
    
    while (i < 100) {
        x = util.RandInt(1, 2);

        if (x == 1) {
            countHeads++;
        }
        else if (x == 2) {
            countTails++;
        }
        i++;
    }
    util.println(util.str(countHeads));
    util.println(util.str(countTails));
}

int main(void)
{
    // Question_01();
    // Example_01();
    // Example_02();
    Example_03();

    return 0;
}

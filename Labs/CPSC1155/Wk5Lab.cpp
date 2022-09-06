#include "../../Common/Util.h"

Util util;

void Question_01() {
    string str;
    int cnt = 0;

    str = util.getstr("Enter a string: ");

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str.at(i)); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cnt++;
        }
    }
    util.println("The number of vowel is " + util.str(cnt));
}

void Question_02() {
    int arr[6] = { };

    
    for (int i = 0; i < 100; i++) {
        int randInt = util.RandInt(1, 6);
        arr[randInt - 1]++;
    }

    for (int i = 0; i < 6; i++) {
        util.println("The number of " + util.str(i+1) + "'s is " + util.str(arr[i]));
    }
}

void Question_03() {
    string str, letter = "ABCDEFGHIJKLMNOPQRSTUVXYWZabcdefghijklmnopqrstuvxywz0123456789";
    int n = util.getint("Enter an integer: ");

    while (n < 3) {
        n = util.getint("Enter an integer: ");
    }

    util.setRandom();   // to get random number successfully

    while (true) {
        int digitCnt = 0, lowerCaseCnt = 0, upperCaseCnt = 0;
        str = "";
        for (int i = 0; i < n; i++) {     
            int rand = util.RandInt(letter.length() - 1);
            char ch = letter.at(rand);
            str += ch;

            if (isdigit(ch)) {
                digitCnt++;
            }
            else if (islower(ch)) {
                lowerCaseCnt++;
            }
            else {
                upperCaseCnt++;
            }
        }    

        if (digitCnt > 0 && lowerCaseCnt > 0 && upperCaseCnt > 0) {
            break;
        }
    }
    util.println("The string is " + str);
}

int main(void)
{
    // Question_01();
    // Question_02();
    Question_03();
    
    return 0;
}

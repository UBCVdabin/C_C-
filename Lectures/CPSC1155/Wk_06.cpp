#include "../../Common/Util.h"

Util util;

void Question_01() {
    int x = 0;
    int p;

    do {
        p = util.getint("Enter an integer: ");
        x += p;
    }
    while (p > 0);

    util.print("The following value represents the sum of all inputs provided\n" + util.str(x));
}

void Question_02() {
    string s;
    int n = util.getint("Enter an integer: ");
    int sum = 0, oddcnt = 1;

    s = "divisors: " + util.str(1);

    for (int i = 2; i < n / 2 + 1; i++) {
        if (n % i == 0) {
            s += ", " + util.str(i);
            sum += i;

            if (i % 2 != 0) {
                oddcnt++;
            }
        }
    }
    s += "\nThe sum of all divisors: " + util.str(sum);
    s += "\nThe number of odd divisors: " + util.str(oddcnt);

    util.print(s);
}

void Question_03() {
    string s;
    int n = util.getint("Enter an integer: ");
    int sum = 0, oddcnt = 1;

    s = "prime divisors: ";

    for (int i = 2; i < n / 2 + 1; i++) {
        if (n % i == 0) {
            bool isPrime = true;
            for (int k = 2; k <= i / 2; k++) {
                if (i % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                s += util.str(i) + " ";
            }
        }
    }
    util.println(s);
}

void Question_04() {
    int num = util.getint("Enter an integer: "); 
    int oddCnt = 0;

    while (num >= 1) {
        int lastDigit = num % 10;

        num /= 10;

        if (lastDigit % 2 != 0) {
            oddCnt++;
        }
    }
    util.println("Odd digit count is " + util.str(oddCnt));
}

void Question_05() {
    int cnt = 0;
    for (int i = 100; i <= 1000; i++) {
        if (i % 5 == 0 && i % 6 == 0) {
            if (++cnt % 10 == 0) {
                util.println(util.str(i));
            }
            else {
                util.print(util.str(i) + " ");
            }
        } 
    }
}

int main(void)
{
    /* code */
    // Question_01();
    // Question_02();
    // Question_03();
    // Question_04();
    Question_05();
    
    return 0;
}

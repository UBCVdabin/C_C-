#include "../../Common/Util.h"

Util util;


void Question_01() {
    int n = util.getint("Enter an integer: ");
    unsigned long long factorial = util.Factorial(n);

    util.println("Fatorial " + util.str(n) + " is " + util.str(factorial));
}

void GetSumDiff(int &a, int &b, int &return1, int &return2) {
    int sum = a + b;
    int diff = a - b;

    a = 100;
    b = 200;

    return1 = sum;
    return2 = diff;

    return;
}

void Question_02() {
    int x = 1, y = 2;
    int total, diff;

    GetSumDiff(x, y, total, diff);

    util.println(util.str(x) + ", " + util.str(y));
    util.println("sum is " + util.str(total));
    util.println("difference is " + util.str(diff));
}

void Question_03() {
    double area = util.GetAreaRectangle(5, 10); 
    util.println("Area is " + util.str(area));
}

void Question_04() {
    int n = util.getint("Enter an integer: ");
    double area = util.GetAreaPolygon(5, 5);
    util.println("Area is " + util.str(area));
}

double Term(int i, char flag) {
    
}

double GetSeriesSum(double x, int n) {
    
}

double numerator(double x, int power) {
    return pow(x, power);
}

long long denominator(int n) {
    if (n == 0) {
        return 1;
    }

    return n * denominator(n-1);
}
void Question_05() {
    int n = util.getint("Enter an integer: ");
    int x = util.getint("Enter an integer for x: ");
    

    // cout << r << endl;

}

int main() {
    Question_01();
    Question_02();
    Question_03();
    Question_04();
    Question_05();

    return 0;
}
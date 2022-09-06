#include <iostream>
#include <cmath>

using namespace std;

void Question_01() {
    double x1, y1, rad1;
    double x2, y2, rad2;

    double dist, sumOfRadii;

    cout << "Input center x and y coordinates and the radius of circle 1 (input in sequence, end with the enter key): ";
    cin >> x1 >> y1 >> rad1;

    cout << "Input center x and y coordinates and the radius of circle 2 (input in sequence, end with the enter key): ";
    cin >> x2 >> y2 >> rad2;

    sumOfRadii = rad1 + rad2;

    cout << "sum of radii " << sumOfRadii << endl;

    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    if (dist > sumOfRadii) {
        cout << "the circles do not overlap" << endl;
    }
    else if (dist < sumOfRadii) {
        cout << "the circles overlap" << endl;
    }
    else {
        cout << "the circles overlap on a single point" << endl;
    }
}



int main(void)
{
    Question_01();
    
    return 0;
}

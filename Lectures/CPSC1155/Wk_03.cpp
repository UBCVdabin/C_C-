#include "../../Common/Util.h"


int main() {
    Util util;

    double x1, y1, x2, y2, rad, dist;

    x1 = util.getdouble("Enter the x-coordinate of the center: ");
    y1 = util.getdouble("Enter the y-coordinate of the center: ");
    rad = util.getdouble("Enter the maximum distance from the center: ");

    for (int i = 0; i < 5; i++) {
        x2 = util.getdouble("Enter the x-coordinate of the center: ");
        y2 = util.getdouble("Enter the y-coordinate of the center: ");

        dist = util.GetDistance(x1, y1, x2, y2);
    
        util.println("Distance is " + util.str(dist));

        if (dist <= rad) {
            util.println("within range");
        }
        else {
            util.println("not within range");
        }
    }
    return 0;
}
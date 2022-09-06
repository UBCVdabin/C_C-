#include "../../Common/Util.h"

Util util;

void Question_01() {
    util.println("Degree\t\tSin\t\tCos");

    for (int i = 0; i <= 360; i += 10) {
        double rad = util.toRadians(i);
        double sin = util.getSin(rad);
        sin = util.MyRound(sin, 4);

        double cos = util.getCos(rad);
        cos = util.MyRound(cos, 4);
        
        util.println(util.str(i) + "\t\t" + util.str(sin) + "\t" + util.str(cos));
        
    }
}

int main(void)
{
    /* code */
    Question_01();
    return 0;
}

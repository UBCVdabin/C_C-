# include "../../Common/Util.h"
Util util;

int main() {
    int arr[99] = {};

    int n = util.getint("Enter the integers 1 and 100: ");

    while (n != 0) {
        arr[n - 1]++;
        n = util.getint("");
    }

    for (int i = 0; i < 99; i++) {
        if (arr[i] > 0) {
            util.println(util.str(i + 1) + " occurs " + util.str(arr[i]) + " times");
        }
    }

    return 0;
}
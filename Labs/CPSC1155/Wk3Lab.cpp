#include "../../Common/Util.h"

Util util;

void Question_01() {
    int sum = 0, avg, val;
    int negatCnt = 0, positCnt = 0;
    int max = 0;

    val = util.getint("Enter a Integer: ");

    while (val != 0)
    {
        sum += val;

        if (val < 0) {
            negatCnt++;
        }
        else {
            positCnt++;
        }

        if (val > max) {
            max = val;
        }

        val = util.getint("Enter a Integer: ");
    }
    
    if ((negatCnt + positCnt) == 0) {
        util.println("No input...");
        return;
    }

    util.println("Sum: " + util.str(sum));
    util.println("Max: " + util.str(max));
    util.println("Total Count: " + util.str(negatCnt + positCnt));
    util.println("Avg: " + util.str((double)sum / (negatCnt + positCnt)));
    util.println("The count of positive input: " + util.str(positCnt));
    util.println("The count of negative input: " + util.str(negatCnt));
}

void Question_02() {
    int standard = 0;

    while (standard < 2 && standard > -2) {
        int computer = util.RandInt(2);
        int player;

        player = util.getint("scissor (0), rock (1), paper (2): ");

        if (computer == 0) {
            if (player == 0) {
                cout << "The computer is scissor. You are scissor too. It is a draw." << endl;
            }
            else if (player == 1) {
                cout << "The computer is scissor. You are rock. You win" << endl;
                standard += 1;
            }
            
            else {
                cout << "The computer is scissor. You are paper. You lost" << endl;
                standard -= 1;
            }
        }
        else if (computer == 1) {
            if (player == 0) {
                cout << "The computer is rock. You are scissor. You lost." << endl;
                standard -= 1;
            }
            else if (player == 1) {
                cout << "The computer is rock. You are rock too. It is a draw. " << endl;
            }
            else {
                cout << "The computer is rock. You are paper. You won." << endl;
                standard += 1;
            }      
        }
        else {
            if (player == 0) {
                cout << "The computer is paper. You are scissor. You won." << endl;
                standard += 1;
            }
            else if (player == 1) {
                cout << "The computer is paper. You are rock. You lost." << endl;
                standard -= 1;
            }           
            else {
                cout << "The computer is paper. You are paper too. It is a draw." << endl;
            }
        }
    }
}

int main(void) {
    // Question_01();
    Question_02();


    return 0;
}
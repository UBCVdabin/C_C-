#ifndef Util_H
#define Util_H

#include <iostream>
#include <cmath>
#include <string.h>
#include <time.h>

using namespace std;

/**
 * @brief define constant double variable
 * 
 */
const static double _6TH_DP = 0.000001;
const static double _7TH_DP = 0.0000001;
const static double _8TH_DP = 0.00000001;

const static double F_to_M = 0.3048;     // foot -> meter 
const static double F_to_I = 12;         // foot -> meter    
const static double P_to_K = 0.45359237; // pound -> kilogram 
const static double K_to_P = 2.2;        // kilogram -> pound
const static double I_to_M = 0.0254;     // Inch -> meter
const static double M_to_K = 1.609;      // Mile -> Kilometer

const static double RADIUS_OF_EARTH = 6371.01;


class Util {
    public:
        const static int _1ST = 1;
        const static int _2ND = 2;
        const static int _3RD = 3;
        const static int _4TH = 4;
        const static int _5TH = 5;

        static int getint(string message) {
            int val; 
            cout << message;
            cin >> val;

            return val;
        }

        static double getdouble(string message) {
            double val; 
            cout << message;
            cin >> val;

            return val;
        }

        static string getstr(string message) {
            string str; 
            cout << message;
            getline(cin, str, '\n');

            return str;
        }
        
        static string str(int val) {
            return to_string(val);
        }

        static string str(double val) {
            return to_string(val);
        }
        
        static string str(unsigned long long val) {
            return to_string(val);
        }

        static void print(string message) {
            cout << message;
        }

        static void println(string message) {
            cout << message << endl;
        }

        static void setRandom() {
            srand(time(NULL));
        }

        static double getSin(double radian) {
            return sin(radian);
        }

        static double getCos(double radian) {
            return cos(radian);
        }

        // Randomized Function
        static int RandInt(int upperLimit) {
            return RandInt(0, upperLimit, true, true);
        }

        static int RandInt(int lowerLimit, int upperLimit) {
            return RandInt(lowerLimit, upperLimit, true, true);
        }

        static int RandInt(int lowerLimit, int upperLimit, bool inclusiveLowerLimit, bool inclusiveUpperLimit) {
        if (inclusiveUpperLimit) 
            upperLimit++;

        if (!inclusiveLowerLimit)
            lowerLimit++;
        
            
        int range = upperLimit - lowerLimit;
        
        if (range <= 0) {
            return -1;      // error
        }

        int randInt = rand() % range;
        
        return randInt + lowerLimit;
    }

    // Checking function whether two double variables are equal
    static bool DblEquals(double x, double y, double epsilon) {
        double z = abs(x - y);

        if (z < epsilon)
            return true;
        else 
            return false;
    }

    // Rounding value using digit place given
    static double MyRound(double value, int digits) {
        return round(value * pow(10, digits)) / pow(10, digits);
    }

    static int GetDigits(int num) {
        if (num / 10 == 0)
            return 1;
        
        return 1 + GetDigits(num / 10);
    }

    // Return the reversal of an integer, e.g., reverse(456) returns 654
    static int Reverse(int num) {
        int n = (int)pow(10, GetDigits(num) - 1);

        if (num / 10 == 0) {
            return num * n;
        }
        else {
            return num % 10 * n + Reverse(num / 10);
        }
    }

    static unsigned long long Factorial(int n) {
        if (n == 0) {
            return 1;
        }
        else {
            return n * Factorial(n - 1);
        }
    }
    
    static int Palindrome(int num) {
        int i = num % 10;
        int n = (int)pow(10, GetDigits(num) - 1); // 1의 자리 10^0
        
        if (num / 10 == 0) {
            return i * n;
        }
        else {
            return i * n + Palindrome(num / 10);
        }
    }

    static int FindDigitNumber(int numbers, int digitPlace) {
        int num = -1;
        int totalDigit = GetDigits(numbers);

        // The range is [1, 99]. The case that first digit number is zero.
        if ((totalDigit == 2 && digitPlace == 1) ||
            (totalDigit == 1 && digitPlace == 1) ||
            (totalDigit == 1 && digitPlace == 2) ||
            (totalDigit == 1 && digitPlace == 3 && num == 0)) {  
            return 0;
        }

        // intial digit place is important.
        for (int i = 3 - totalDigit; i < digitPlace; i ++) {
            num = numbers / (int)pow(10, totalDigit - 1);
            numbers %= (int)pow(10, totalDigit-- - 1);
        }

        return num;
    }

    static double GetWindChill(double fahrenheit, int speed) {
        return 35.74 + 0.6215 * fahrenheit - 35.75 * pow(speed, 0.16) + 0.4275 * fahrenheit * pow(speed, 0.16);
    }

    static string GetRankOfCard(int num) {
        string result = "";
        num %= 13;

        if (num == 0) {
            result = "King";
        }
        else if (num == 1) {
            result = "Ace";
        }
        else if (num == 11) {
            result = "Jack";
        }
        else if (num == 12) {
            result = "Queen";
        } 
        else {
            result = to_string(num); 
        }
        return result;
    }

    static string GetSuitOfCard(int num) {
        string result = "";
        num /= 13;

        if (num == 0) {
            result = "Clubs";
        }
        else if (num == 1) {
            result = "Diamonds";
        }
        else if (num == 2) {
            result = "Hearts";
        }
        else {
            result = "Spades";
        } 
        return result;
    }

    static double GetDistance(double x1, double y1) {
        return GetDistance(x1, y1, 0, 0);
    }

    static double GetDistance(double x1, double y1, double x2, double y2) {
        return sqrt(pow(x1 - x2, 2) + pow(y1 - y2,2));
    }

    static double GetPointPosition(double x0, double y0, double x1, double y1, double x2, double y2) {
        return (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);
    }

    static double GetAreaRectangle(double width = 0, double height = 0) {
        return width * height;
    }

    static double GetAreaPolygon(int n, double side) {
        return n * pow(side, 2) / (4 * tan(M_PI / n));
    }

    static double GetDistanceFromEarth(double x1, double y1, double x2, double y2) {
        return  RADIUS_OF_EARTH * acos(sin(toRadians(x1)) * sin(toRadians(x2)) + 
                cos(toRadians(x1)) * cos(toRadians(x2)) * cos(toRadians(y1) - toRadians(y2)));
    }

    static double toRadians(double angle) {
        return angle / 180 * M_PI;
    }

    static double GetAreaOfTriangleUsingPoints(double x1, double y1, double x2, double y2, double x3, double y3) {
        double side1 = sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
        double side2 = sqrt((y3 - y1) * (y3 - y1) + (x3 - x1) * (x3 - x1));
        double side3 = sqrt((y3 - y2) * (y3 - y2) + (x3 - x2) * (x3 - x2));
        
        return GetAreaOfTriangleUsingSides(side1, side2, side3);
    }

    static double GetAreaOfTriangleUsingSides(double s1, double s2, double s3) {
        double side = (s1 + s2 + s3) / 2;

        return sqrt(side * (side - s1) * (side - s2) * (side - s3));
    }
    
    static string dec2HexChar(int value) {
        string res;
        switch (value) {
            case 10:
                res = "A";
                break;
            case 11:
                res = "B";
                break;
            case 12:
                res = "C";
                break;
            case 13:
                res = "D";
                break;
            case 14:
                res = "E";
                break;
            case 15:
                res = "F";
                break;
            default:
                res = to_string(value);
                break;
        }
        return res;
    } 

    static int char2HexDec(char value) {
        value = (char)toupper(value);  
        int res;
        switch (value) {
            case 'A':
                res = 10;
                break;
            case 'B':
                res = 11;
                break;
            case 'C':
                res = 12;
                break;
            case 'D':
                res = 13;
                break;
            case 'E':
                res = 14;
                break;
            case 'F':
                res = 15;
                break;
            default:
                res = value - 'A' + 1;
                break;
        }
        return res;
    } 

    /** Return the gcd of two integers */
    static int GCD(int n1, int n2) {
        int gcd = 1; // Initial gcd is 1
        int k = 2;   // Possible gcd

        while (k <= n1 && k <= n2) {
            if (n1 % k == 0 && n2 % k == 0)
                gcd = k; // Update gcd
            k++;
        }
        return gcd; // Return gcd
    }

    // static int LinearSearch(int[] arr, int value) {
    //     for (int i = 0; i < arr.length; i++) {
    //         if (value == arr[i]) {
    //             return i;
    //         }
    //     }
    //     return - 1;
    // }

    // static int BinarySearch(int[] arr, int item) {
    //     return BinarySearch(arr, 0, arr.length - 1, item);
    // }

    // static int BinarySearch(int[] arr, int low, int high, int item) {
    //     int mid = (low + high) / 2;

    //     if (low > high) {
    //         return -1;
    //     }
    //     else if (arr[mid] < item) {
    //         return BinarySearch(arr, ++mid, high, item);
    //     }
    //     else if (arr[mid] > item) {
    //         return BinarySearch(arr, low, --mid, item);
    //     }
    //     else {
    //         return mid;
    //     } 
    // }

    // public static void PrintArray(int[] arr) {
    //     System.out.println(MakeOutputForArray(arr, '\0'));
    // }

    // public static void PrintArray(int[] arr, char ch) {

    //     System.out.println(MakeOutputForArray(arr, ch));
    // }

    // public static void PrintArray(double[] arr) {
    //     System.out.println(MakeOutputForArray(arr, '\0'));
    // }

    // public static void PrintArray(double[] arr, char ch) {
    //     System.out.println(MakeOutputForArray(arr, ch));
    // }

    // public static String MakeOutputForArray(int[] arr, char ch) {
    //     String output = "[";
    //     int n = arr.length - 1;
    //     for (int i = 0; i < n; i ++) {
    //         output += arr[i] + Character.toString(ch) + " ";
    //     }
    //     output += arr[n] + "]";

    //     return output;
    // }

    // public static String MakeOutputForArray(double[] arr, char ch) {
    //     String output = "[";

    //     int n = arr.length - 1;
    //     for (int i = 0; i < n; i ++) {
    //         output += arr[i] + Character.toString(ch) + " ";
    //     }
    //     output += arr[n] + "]";

    //     return output;
    // }

    // public static boolean isSorted(int[] list) {
    //     boolean isSorted = true;

    //     for (int i = 0; i < list.length - 1; i++) {
    //         if (list[i] > list[i + 1]) {
    //             isSorted = false;
    //             break;
    //         }
    //     }
    //     return isSorted;
    // }

    // public static boolean contains(int[] arr, int n) {
    //     boolean res = false;

    //     for (int i = 0; i < arr.length; i++) {
    //         if (arr[i] == n) {
    //             res = true;
    //             break;
    //         }
    //     }

    //     return res;
    // }

    // public static int getRandom(int start, int end, int[] numbers) {
    //     int randInt = Util.RandInt(start, end);

    //     while (contains(numbers, randInt)) {
    //         randInt = Util.RandInt(start, end);
    //     }
    //     return randInt;
    // }

    // private static void PrintCombination(int[] arr, int startIdx, int k) {
    //     String output = "";
        
    //     for (int i = k + startIdx; i < arr.length; i++) {
    //         output = "(";
    //         for (int j = startIdx; j < startIdx + k; j++) {
    //             output += arr[j] + ", ";
    //         }
    //         output += arr[i] + ")";
    //         System.out.println(output);
    //     }         
    // }

    // public static void Combination(int[] arr, int k) {
    //     Combination(arr, 0, k);
    // }
    // public static void Combination(int[] arr, int currentIdx, int k) {
    //     int indexGap = currentIdx + k;

    //     // empty set
    //     if (k == 0) {
    //         System.out.println("Ø");
    //         return;
    //     }
    //     else if (indexGap > arr.length) {
    //         return;
    //     }

    //     PrintCombination(arr, currentIdx, k - 1);       // why k - 1 ? 
    //                                                     // because the first idx always print out.
        
    //     // k is equal to 1, only once.
    //     if (k == 1) {
    //         return;
    //     }
    //     Combination(arr, ++currentIdx, k);
    // }

    // // Check whether number is prime 
    // public static boolean isPrime(int num) {
    //     for (int divisor = 2; divisor <= num / 2; divisor++) {
    //         if (num % divisor == 0) {
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // public static Integer Max(ArrayList<Integer> list) {
    //     if (list == null || list.size() == 0)
    //         return null;
        
    //     int result = list.get(0);
    //     for (int i = 1; i < list.size(); i++)
    //         if (result < list.get(i))
    //             result = list.get(i);

    //     return result;
    // }
    // public static double Sum(ArrayList<Double> list) {
    //     double sum = 0;
    //     for (int i = 0; i < list.size(); i++)
    //       sum += list.get(i);
    //     return sum;
    // }

    // static ArrayList<Integer> add(ArrayList<Integer> list1, ArrayList<Integer> list2) {
    //     ArrayList<Integer> result = new ArrayList<>();
      
    //     for (int i = 0; i < list1.size(); i++)
    //         result.add(list1.get(i));
        
    //     for (int i = 0; i < list2.size(); i++)
    //         result.add(list2.get(i));
    
    //     return result;
    // }

};

#endif
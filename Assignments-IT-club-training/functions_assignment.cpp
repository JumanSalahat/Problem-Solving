//Student Name : Juman Salahat
//Student ID : 202310150
//Submission Date : 30/11/2025

#include <bits/stdc++.h>
using namespace std;

// 1) جمع عددين
long long Add(long long a, long long b) {
    return a + b;
}

// 2) طرح عددين
long long Subtract(long long a, long long b) {
    return a - b;
}

// 3) ضرب عددين
long long Multiply(long long a, long long b) {
    return a * b;
}

// 4) قسمة عددين
double Divide(double a, double b) {
     return a / b;
}

// 5) تربيع عدد
long long Square(long long n) {
    return n*n;
}

// 6) تكعيب عدد
long long Cube(long long n) {
    return n*n*n;
}

// 7) مضروب عدد -> n!
long long Factorial(long long n) {
    long long result = 1;
    for (long long i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 8) التحقق إذا كان العدد زوجي
bool IsEven(long long n) {
    return (n % 2 == 0);
}

// 9) التحقق إذا كان العدد أولي
bool IsPrime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// 10) GCD
long long GCD(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// 11) LCM
long long LCM(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    long long g = GCD(a, b);
    long long res = (a / g) * b;
    if (res < 0) res = -res;
    return res;
}

// 12) متوسط عددين
double Average(double a, double b) {
    return (a + b) / 2.0;
}

// 13) أكبر عدد
long long maxNum(long long a, long long b) {
    return max(a,b);
}

// 14) أصغر عدد
long long minNum(long long a, long long b) {
    return min(a,b);
}

// 15) مجموع -> n -> من 1 إلى نفسها
long long sumToN(long long n) {
    if (n <= 0) return 0;
    return n * (n + 1) / 2;
}

// 16) مساحة دائرة
double AreaCircle(double r) {
    const double PI = 3.14;
    if (r < 0) r = -r;
    return PI * r * r;
}

// 17) مساحة مثلث
double AreaTriangle(double b, double h) {
    if (b < 0) b = -b;
    if (h < 0) h = -h;
    return 0.5 * b * h;
}

// 18) الفائدة البسيطة
double SimpleInterest(double P, double R, double T) {
    return (P * R * T) / 100.0;
}

// 19) power 
double Power(double a, double b) {
    return pow(a, b);
}

// 20) باقي القسمة
long long Modulus(long long a, long long b) {
    return a % b;
}

void printMenu() {
    cout << "\n===== MENU =====\n";
    cout << "1  - Add\n";
    cout << "2  - Subtract\n";
    cout << "3  - Multiply\n";
    cout << "4  - Divide\n";
    cout << "5  - Square\n";
    cout << "6  - Cube\n";
    cout << "7  - Factorial\n";
    cout << "8  - IsEven\n";
    cout << "9  - IsPrime\n";
    cout << "10 - GCD\n";
    cout << "11 - LCM\n";
    cout << "12 - Average\n";
    cout << "13 - maxNum\n";
    cout << "14 - minNum\n";
    cout << "15 - sumToN\n";
    cout << "16 - Area of Circle\n";
    cout << "17 - Area of Triangle\n";
    cout << "18 - Simple Interest\n";
    cout << "19 - Power\n";
    cout << "20 - Modulus\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    // المنيو تُعرض مرة واحدة فقط
    printMenu();
    cin >> choice;

    long long x, y;
    double a, b, c;

    switch (choice) {
    case 1: // Add
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Result = " << Add(x, y) << endl;
        break;

    case 2: // Subtract
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Result = " << Subtract(x, y) << endl;
        break;

    case 3: // Multiply
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Result = " << Multiply(x, y) << endl;
        break;

    case 4: // Divide
      cout << "Enter two real numbers: ";
      cin >> a >> b;

      if (b == 0) cout << "Error: division by zero!" << endl;
      else  cout << "Result = " << Divide(a, b) << endl;
      
    break;


    case 5: // Square
        cout << "Enter an integer: ";
        cin >> x;
        cout << "Result = " << Square(x) << endl;
        break;

    case 6: // Cube
        cout << "Enter an integer: ";
        cin >> x;
        cout << "Result = " << Cube(x) << endl;
        break;

    case 7: // Factorial
        cout << "Enter a non-negative integer: ";
        cin >> x;
        if (x < 0) {
            cout << "Factorial not defined for negative numbers.\n";
        } else {
            cout << "Result = " << Factorial(x) << endl;
        }
        break;

    case 8: // IsEven
        cout << "Enter an integer: ";
        cin >> x;
        cout << (IsEven(x) ? "Even\n" : "Odd\n");
        break;

    case 9: // IsPrime
        cout << "Enter an integer: ";
        cin >> x;
        cout << (IsPrime(x) ? "Prime\n" : "Not prime\n"); // أعجبني ولأوّل مرة رح أستخدم هالطريقة مع -> string
        break;

    case 10: // GCD
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "GCD = " << GCD(x, y) << endl;
        break;

    case 11: // LCM
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "LCM = " << LCM(x, y) << endl;
        break;

    case 12: // Average
        cout << "Enter two real numbers: ";
        cin >> a >> b;
        cout << "Average = " << Average(a, b) << endl;
        break;

    case 13: // maxNum
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Max = " << maxNum(x, y) << endl;
        break;

    case 14: // minNum
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Min = " << minNum(x, y) << endl;
        break;

    case 15: // sumToN
        cout << "Enter n: ";
        cin >> x;
        cout << "Sum = " << sumToN(x) << endl;
        break;

    case 16: // Area of circle
        cout << "Enter radius: ";
        cin >> a;
        cout << "Area = " << AreaCircle(a) << endl;
        break;

    case 17: // Area of triangle
        cout << "Enter base and height: ";
        cin >> a >> b;
        cout << "Area = " << AreaTriangle(a, b) << endl;
        break;

    case 18: // Simple Interest
        cout << "Enter Principal, Rate, Time: ";
        // P = Principal : يعني رأس المال / المبلغ الأصلي اللي استثمرته أو أقرضته
        // R = Rate : يعني معدّل الفائدة (النسبة المئوية)
        // T = Time : يعني الزمن (مدة الاستثمار/القرض) — غالباً بالسنين، إلا إذا حدد غير هيك
        cin >> a >> b >> c; // P, R, T
        cout << "Simple Interest = " << SimpleInterest(a, b, c) << endl;
        cout << "Total Amount    = " << a + SimpleInterest(a, b, c) << endl;
        break;

    case 19: // Power
        cout << "Enter base and exponent: ";
        cin >> a >> b;
        cout << "Result = " << Power(a, b) << endl;
        break;

    case 20: // Modulus
        cout << "Enter two integers: ";
        cin >> x >> y;
        if (y == 0) cout << "Error: modulus by zero!" << endl;
        else cout << "Result = " << Modulus(x, y) << endl;
        break;
        
    }

    return 0;
}

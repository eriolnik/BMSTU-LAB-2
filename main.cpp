#include <iostream>

using namespace std;

int main() {
    cout << "Task 1" << endl;
    int x, y, z;
    cin >> x >> y >> z;
    if ((x + y) % 2 == 0) { cout << "condition is true" << endl; }
    else { cout << "condition is false" << endl; }
    if ((x < 20) | (y < 20)) { cout << "condition is true" << endl; }
    else { cout << "condition is false" << endl; }
    if ((x == 0) | (y == 0)) { cout << "condition is true" << endl; }
    else { cout << "condition is false" << endl; }
    if ((x < 0) & (y < 0) & (z < 0)) { cout << "condition is true" << endl; }
    else { cout << "condition is false" << endl; }
    if ((x % 5 == 0) | (y % 5 == 0) | (z % 5 == 0)) { cout << "condition is true" << endl; }
    else { cout << "condition is false" << endl; }
    if ((x > 100) | (y > 100) | (z | 100)) { cout << "condition is true" << endl; }
    else { cout << "condition is false" << endl; }


    int a, b, c, d;
    cout << "Task 2" << endl;
    cin >> a >> b >> c >> d;
    if ((a == c) & (b == c)) { cout << "не угрожает" << endl; }
    else { cout << "угрожает" << endl; }
    if ((a - c) == (b - d)) { cout << "не угрожает" << endl; }
    else { cout << "угрожает" << endl; }
    if (((a - c) == 1) | ((b - d) == 1)) { cout << "не угрожает" << endl; }
    else { cout << "угрожает" << endl; }
    if (((a - c) == (b - d)) | ((a == c) | (b == d))) { cout << "не угрожает" << endl; }
    else { cout << "угрожает" << endl; }
    if ((((a - c) - 2) < 0.5) & (((b - d) - 2) < 0.5)) { cout << "не угрожает" << endl; }
    else { cout << "угрожает" << endl; }


    int n, p;
    cout << "Task 3" << endl;
    for (int k = 1; k < 10; k++) {
        p = k * 7;
        cout << k << "*7=" << p << endl;
    }
    cout << "Введите n\n";
    cin >> n;
    for (int k = 1; k < 10; k++) {
        p = k * n;
        cout << k << "*" << n << "=" << p << endl;
    }
/*
        int aa = 8, pr = 1;
        cout << "Task 4-1" << endl;
        while (aa <= 15) {
            pr = pr * aa;
            aa++;
        }
        cout << p;

    int f, p1 = 1;
    cout << "Task 4-2" << endl;
    cin >> f;
    while (f < 20) {
        p1 = p1*f;
        f++;
    }
    cout << p1;


    int br, p2 = 1;
    cout << "Task 4-3" << endl;
    cin >> br;
    while ((br < 20) & (br > 1)) {
        p1 = p2*br;
        br--;
    }
    cout << p1;

    int b1, m, p3 = 1;
    cout << "Task 4-4" << endl;
    cin >> b >> m;
    while (b <= m) {
        p3 = p3*b;
        b++;
    }
    cout << p3;
*/

    int s = 1;
    cout << "Task 4-1" << endl;
    for (int i = 8; i < 16; i++) {
        s *= i;
    }
    cout << s << endl;

    int a34;
    cout << "Task 4-2" << endl;
    int q = 1;
    cout << "Введите a\n";
    cin >> a34;
    if (a > 1 && a34 < 20) {
        for (int i = a34; i < 21; i++) {
            q *= i;
        }
        cout << q << endl;
    }
    int b34;
    cout << "Task 4-3" << endl;
    cout << "Введите b\n";
    cin >> b34;
    int h = 1;
    if (b34 > 1 && b34 < 20) {
        for (int i = 1; i < b34 + 1; i++) {
            h *= i;
        }
        cout << h << endl;
    }
    int a1, b1;
    cout << "Task 4-4" << endl;
    cout << "Введите a and b\n";
    cin >> a1 >> b1;
    int r = 1;
    if (b >= a) {
        for (int i = a1; i < b1 + 1; i++) {
            r *= i;
        }
        cout << r;

        return 0;

    }
}


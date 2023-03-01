#include<iostream>

using namespace std;

int romantToInt(string roman) {
    int sum = 0;
    for (int i = 0; i < roman.length(); i++) {
        if (roman[i] == 'M') sum += 1000;
        if (roman[i] == 'D') sum += 500;
        if (roman[i] == 'C') {
            if (roman[i + 1] == 'M') {
                sum += 900;
                i++;
            } else if (roman[i + 1] == 'D') {
                sum += 400;
                i++;
            } else {
                sum += 100;
            }
        }
        if (roman[i] == 'L') sum += 50;
        if (roman[i] == 'X') {
            if (roman[i + 1] == 'C') {
                sum += 90;
                i++;
            } else if (roman[i + 1] == 'L') {
                sum += 40;
                i++;
            } else {
                sum += 10;
            }
        }
        if (roman[i] == 'V') sum += 5;
        if (roman[i] == 'I') {
            if (roman[i + 1] == 'X') {
                sum += 9;
                i++;
            } else if (roman[i + 1] == 'V') {
                sum += 4;
                i++;
            } else {
                sum += 1;
            }
        }
    }
    return sum;
}

int main() {
    string roman = "MCMXCIV";
    cout << romantToInt(roman);
    return 0;
}
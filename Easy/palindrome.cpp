#include <bits/stdc++.h>
#include<string>


using namespace std;

bool solution(int x) {
    if (x < 0) return false;
    string s = to_string(x);
    string temp = s;
    reverse(temp.begin(), temp.end());
    if (temp != s) return false;
    return true;
}
  
int main() {
    int x = 121;
    cout << solution(x);
    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

string longest_common_prefix(vector<string>& strs) {
    if (strs.size() == 1) {
        if (strs[0].length() == 0) return "";
        return string(1, strs[0][0]);
    }
    for(int i = 0; i < strs[0].length(); i++) {
        for(int j = 1; j < strs.size(); j++) {
            cout << strs[j][i] << " " << strs[0][i] << endl;
            if (strs[j][i] != strs[0][i]) {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}

int main() {
    vector<string> strs = {"flower", "flower", "flower"};
    cout << longest_common_prefix(strs);
    return 0;
}
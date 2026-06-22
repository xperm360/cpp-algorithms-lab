#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) return false;

    vector<int> freq(26);

    for(char c:s) freq[c-'a']++;
    for(char c:t) freq[c-'a']--;

    for(int x:freq)
        if(x) return false;

    return true;
}

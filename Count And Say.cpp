#include <bits/stdc++.h> 

std::string writeAsYouSpeak(int n) {
    if (n == 1) {
        return "1";
    }

    std::string s = "1";
    for (int i = 2; i <= n; i++) {
        std::string t = "";
        int count = 1;
        char prev = s[0];

        for (int j = 1; j < s.length(); j++) {
            if (s[j] != prev) {
                t += std::to_string(count) + prev;
                count = 1;
                prev = s[j];
            } else {
                count++;
            }
        }

        t += std::to_string(count) + prev;
        s = t;
    }

    return s;
}


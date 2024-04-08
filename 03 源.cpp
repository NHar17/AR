#include <iostream>
using namespace std;

int pl(string& s, int l, int r)
{
    int m = r - l + 1;
    while (r > l)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else
        {
            return 0;
        }
    }
    return m;
}

class Solution {
public:
    string longestPalindrome(string s) {
        int max = 0;
        int l = 0;
        int r = 0;
        int left = 0;
        int right = 0;
        string b;
        for (left = 0; s[left + 1] != '\0'; left++)
        {
            for (right = left + 1; s[right] != '\0'; right++)
            {
                if ((right - left + 1) > max)
                {
                    int i = pl(s, left, right);
                    if (i > max)
                    {
                        max = i;
                        l = left;
                        r = right;
                    }

                }
            }
        }
        for (; l <= r; l++)
        {
            b += s[l];
        }
        return b;
    }
};
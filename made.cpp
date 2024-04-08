#include <iostream>
using namespace std;

string te(int t, string& s, int numRows)
{
    int p = 1;
    string b = "";
    int i = t - 1;
    if (t > 1 && t < numRows)
    {
        while (i < s.length())
        {
            if (p % 2 == 1)
            {
                b += s[i];
                i += 2 * numRows - 2 * t;
                p++;
            }
            else if (p % 2 == 0)
            {
                b += s[i];
                i += 2 * numRows - 2 * (numRows - t + 1);
                p++;
            }
        }
    }
    else
    {
        for (i = t - 1; i < s.length(); i += (2 * numRows - 2))
        {
            b += s[i];
        }
    }
    return b;
}
class Solution {
public:
    string convert(string s, int numRows)
    {  //2x-2
        int t = 1;
        string b = "";
        if (numRows == 1)
            return s;
        while (t <= numRows)
        {
            b += te(t, s, numRows);
            t++;
        }
        return b;
    }
};

int main()
{
    string s = "PAYPALISHIRING";
    Solution t;
    string q = t.convert(s, 3);
    cout << q << endl;
    return 0;
}
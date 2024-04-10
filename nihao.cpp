#include <iostream>
using namespace std;
 
long long add(int& x, int& i)
{
    long long p = x % 10;

    p *= pow(10, i);
    i--;
    x /= 10;
    return p;
}

void re(long long& t, int& i)
{
    i += 1;
    t /= 10;
}


class Solution {
public:
    int reverse(int x) {
        if (x == 0)
            return 0;

        int b = x;
        long long e = x;
        int i = -1;
        while (e)
        {
            re(e, i);
        }
        if (x > 0)
        {
            while (x)
            {
                e += add(x, i);
            }
        }
        else if (x < 0)
        {
            while (x)
            {
                e += add(x, i);
            }
        }
        if (e < -2147483648 || e>2147483647)
            return 0;
        else
            return e;
    }
};

int main()
{
    Solution p;
    int t = p.reverse(-1563847412);
    cout << t << endl;
    return 0;
}
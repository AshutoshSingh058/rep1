#include <iostream>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);

    // for writting output from output.txt
    freopen("output.txt", "w", stdout);
#endif


    while (true)
    {
        int N;
        cin >> N;
        if (N < 0)
        {
            break;
        }

        if (N > 100 && N % 10 == 7)
        {
            cout << -3 << endl;
        }
        else if (N > 100)
        {
            cout << -2 << endl;
        }
        else if (N % 10 == 7)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << N << endl;
        }
    }
}


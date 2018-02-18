#include <bits/stdc++.h>
using namespace std;

int fib[10000];
int calFib(int n)
{
    if (n == 0 || n==1)
    {
        fib[n]=n;
        return n;
    }
    else
    {
        if (fib[n] != -1)
        {
            return fib[n];
        }
        else
        { 
            fib[n]=calFib(n-1)+calFib(n-2);
            return fib[n];
      
        }
    }
}

int main()
{
    for(int i=0;i<10000;i++)
    {
        fib[i]=-1;
    }
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << calFib(n) << endl;
}
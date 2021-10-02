/*
B. Ordinary Numbers
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Let's call a positive integer n ordinary if in the decimal notation all its digits are the same. For example, 1, 2 and 99 are ordinary numbers, but 719 and 2021 are not ordinary numbers.

For a given number n, find the number of ordinary numbers among the numbers from 1 to n.

Input
The first line contains one integer t (1≤t≤104). Then t test cases follow.

Each test case is characterized by one integer n (1≤n≤109).

Output
For each test case output the number of ordinary numbers among numbers from 1 to n.

SAMPLE
input:
6
1
2
3
4
5
100

output:
1
2
3
4
5
18


*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,i=10;
        int sum = 9;
        cin >> n;
        if (n < 10)
        {
            cout << n << endl;
            goto path1;
        }




        if(n>=999999999)
        {
            cout<<"81"<<endl;           
            goto path1;
        }
        else if(n>=888888888)
        {
            cout<<"80"<<endl;           
            goto path1;
        }
        else if(n>=777777777)
        {
            cout<<"79"<<endl;           
            goto path1;
        }
        else if(n>=666666666)
        {
            cout<<"78"<<endl;           
            goto path1;
        }
        else if(n>=555555555)
        {
            cout<<"77"<<endl;           
            goto path1;
        }
        else if(n>=444444444)
        {
            cout<<"76"<<endl;           
            goto path1;
        }
        else if(n>=333333333)
        {
            cout<<"75"<<endl;           
            goto path1;
        }
        else if(n>=222222222)
        {
            cout<<"74"<<endl;           
            goto path1;
        }
        else if(n>=111111111)
        {
            cout<<"73"<<endl;           
            goto path1;
        }
        if(n>=99999999)
        {
            cout<<"72"<<endl;           
            goto path1;
        }
        else if(n>=88888888)
        {
            cout<<"71"<<endl;           
            goto path1;
        }
        else if(n>=77777777)
        {
            cout<<"70"<<endl;           
            goto path1;
        }
        else if(n>=66666666)
        {
            cout<<"69"<<endl;           
            goto path1;
        }
        else if(n>=55555555)
        {
            cout<<"68"<<endl;           
            goto path1;
        }
        else if(n>=44444444)
        {
            cout<<"67"<<endl;           
            goto path1;
        }
        else if(n>=33333333)
        {
            cout<<"66"<<endl;           
            goto path1;
        }
        else if(n>=22222222)
        {
            cout<<"65"<<endl;           
            goto path1;
        }
        else if(n>=11111111)
        {
            cout<<"64"<<endl;           
            goto path1;
        }
        else if(n>=9999999)
        {
            cout<<"63"<<endl;           
            goto path1;
        }
        else if(n>=8888888)
        {
            cout<<"62"<<endl;           
            goto path1;
        }
        else if(n>=7777777)
        {
            cout<<"61"<<endl;           
            goto path1;
        }
        else if(n>=6666666)
        {
            cout<<"60"<<endl;           
            goto path1;
        }
        else if(n>=5555555)
        {
            cout<<"59"<<endl;           
            goto path1;
        }
        else if(n>=4444444)
        {
            cout<<"58"<<endl;           
            goto path1;
        }
        else if(n>=3333333)
        {
            cout<<"57"<<endl;           
            goto path1;
        }
        else if(n>=2222222)
        {
            cout<<"56"<<endl;           
            goto path1;
        }
        else if(n>=1111111)
        {
            cout<<"55"<<endl;           
            goto path1;
        }
        



        for (; i <=n; i++)
        {
            long long x = i;
            int temp = 0;
        
        
            for (; (x / 10) > 0;)
            {
                int y = x % 10;
                x /= 10;
                int z = x % 10;
                if (y != z)
                {
                    goto path2;
                }
            }
            sum++;
            path2:
            int f=0;

        }

        cout<<sum<<endl;

    path1:
    int p=0;
    }

    return 0;
}

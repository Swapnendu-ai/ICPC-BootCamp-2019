#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int count,inp;
    for(int j =0; j< size; j++)
        {
            int count = 0;
            for(int i =0; i< size; i++)
                {
                    cin >> inp;
                    if(inp)
                        count++;

                }
                cout << count << " ";
        }
    return 0;
}

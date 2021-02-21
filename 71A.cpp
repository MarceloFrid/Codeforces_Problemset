// https://codeforces.com/problemset/problem/71/A

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;

        int j = 0;
        while(word[j] != '\0')
            j++;

        if(j > 10)
            cout << word[0] << j - 2 << word[j - 1] << endl;
        else
            cout << word << endl;
    }

    return 0;
}

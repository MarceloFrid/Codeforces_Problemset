// https://codeforces.com/problemset/problem/231/A

#include <iostream>

using namespace std;

int main(){
    int n, implemented = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c;

        cin >> a >> b >> c;

        if(a + b + c > 1) implemented++;
    }

    cout << implemented << endl;

    return 0;
}

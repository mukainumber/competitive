#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void comb(vector<vector<long long>> &v){
    for(int i=0; i<=v.size(); ++i){
        v[i][0] = 1;
        v[i][i] = 1;
    }

    //nCk = n-1Ck-1 + n-1Ck
    for(int i=1; i<=v.size(); ++i){
        for(int j=1; j < i; ++j){
            v[i][j] = v[i-1][j-1]+v[i-1][j];
        }
    }
    return;
}

int main(){
    int N;
    cin >> N;
    vector<vector<long long>> v(N+1, vector<long long>(N+1, 0));

    comb(v);

    cout << "v[4][2]=" << v[4][2] << endl;

    return 0;
}

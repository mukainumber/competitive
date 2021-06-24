#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> v;
    //sort with index 0 componet
    sort(v.begin(),v.end(),[](const vector<int> &a,const vector<int> &b){return a[0] < b[0];});

    //sort with index 1 componet
    sort(v.begin(),v.end(),[](const vector<int> &a,const vector<int> &b){return a[1] < b[1];});
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector< vector<int> > sudoku(9,vector<int>(9));

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>sudoku[i][j];
        }
    }


}
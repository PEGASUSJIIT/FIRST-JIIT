#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        sum+=y;
    }
    cout<<"Avg:"<<sum/n;
    return 0;
}

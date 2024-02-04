#include <iostream>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        int temp;
        int sum=0;
        int m=n;
        while(n>0){
            temp = n%10;
            sum +=(temp)*(temp)*(temp);
            n = n/10;
        }
        if(sum==m){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
};
int main(){
    int n;
    cin>>n;
    solution ob;
    cout<<ob.armstrongNumber(n);
}
// Function
#include<iostream>
using namespace std; 

class power_of_two {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return false;
        else
        return (n & (n-1)) == 0;
    }
};
int main(){
    int n;
    cin>>n;
    power_of_two sol;
    if(sol.isPowerOfTwo(n))
    cout<<"true";
    else
    cout<<"false";
    return 0;
}
//decimal to binary
#include<bits/stdc++.h>
using namespace std;

int decToBinary(int decNum){
    int ans = 0;
    int pow = 1;

    while (decNum>0)
    {
        int rem = decNum %2;
        decNum /=2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){
int decNum;
cout<<"enter a number";
cin>>decNum;

cout<<"the binary number is "<<decToBinary(decNum);
return 0;
}
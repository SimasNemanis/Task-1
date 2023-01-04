#include <iostream>
//User inputs a number
//Program finds every individual digit of the number
//Program flips the number
//Program checks if the flipped and not flipped number are the same
//Program displays on screen if numbers are palindrome or not

using namespace std;

int main() {

int n, newn, copy, a;

cout<<"Insert a number "<<endl;
cin>>n;
copy = n;
while (n != 0) {

a = n%10;
newn=newn*10+a;
n=n/10;
}
if (copy==newn & newn>0) cout<<"True "<<endl;
else cout<<"False "<<endl;
    return 0;
}

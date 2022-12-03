#include<iostream>
using namespace std;
int main(){
// C++ Program to print the reverse of the number
int num;
cout << "Enter a number: ";
cin >> num;
int reverse=0;
while(num>0){
int last;
last= num%10;
reverse= reverse*10+last;
num /=10;
}
cout <<"The reverse of enetred num is: " << reverse;

return 0;
}
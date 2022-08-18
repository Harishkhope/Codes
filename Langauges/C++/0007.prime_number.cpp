#include<bits/stdc++.h>
#include <math.h>
using namespace std;
bool prime(int num){
    if(num<=0){
        return false;
    }
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
int num;
cout<<" enter a number: ";
cin >> num;
if(prime(num)){
    cout<<num<<" number is prime";
}
else{
    cout<<num<<"  is not prime";
}

}
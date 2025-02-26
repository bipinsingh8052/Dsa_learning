// what is namespace 
// namespace is collection of identifier
// :: scope Resolution opertor
// >> this opertor overloading

#include<iostream>
using namespace std;
namespace cybrom;
{
    int a=999;
    int b=99999;
    
}
using namespace cybrom;
int main(){
    cout<<a<<"\n";
}


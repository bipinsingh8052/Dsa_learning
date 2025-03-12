#include<iostream>
using namespace std;
#include <forward_list>
int main(){
    forward_list<int>f1;
    f1.push_front(89);
    f1.push_front(89);
    f1.push_front(89);
    f1.push_front(89);
    f1.push_front(89);
    f1.pop_front(); //delete it last index 
    int c =distance(f1.begin(),f1.end()); //find the size

    f1.reverse(); ///reverse the  forward list

    forward_list<int >f2={1,2,3,4,5,6,7,7,8,8};
    forward_list<int >f3={5,6,7,8,9,999,0,6,4,3};

    f3.sort() ;//short the forward list 


    f1.merge(f2); ////merge in f1 in side f2 you
    
}
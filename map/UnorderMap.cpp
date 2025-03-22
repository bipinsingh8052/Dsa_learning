// what is unorderMap
// in this have key unique of the 
// unSorted
// hahing Techique



// what is hashing 
// two type of hashing
// 1.close hasing
// 2.open hasing


// Different 
// inside  






#include<iostream>
using namespace std;
#include <unordered_map>
int main(){
    unordered_map<int ,string> m1{{2,"Bipin"},{21,"Rinku"},{3,"Rohit"},{4,"Shubham"}};
    m1[104];
    m1[104]="bipins";
    
    for(auto p:m1){
        // this is automatically short it
        cout<<p.first<<":"<<p.second<<"\n";
    }


    unordered_map<string,int>m2{{"n",101},{"k",900},{"l",300},{"o",302}};
    m2.insert({"a",100});
    m2.insert({"b",1001});
    // m2[];

    // // m2[900]=18;
     for(auto i=m2.begin();i!=m2.end();i++){
      cout<<i->first<<":"<<i->second<<"\n";
     }





}

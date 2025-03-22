// what is Map
// you can store in data in the object form we can also call it KEY AND VALUE .
//  there are three type of Map
// 1.Order map
// 2.Unorder Map
// 3. Multipal map


// what is Order map
// 1.Key Unique
// 2. data -shorted
// 3.Self balance 
// 4. Binary Search Tree (Red black tree)


// What is Unorder Map
// 1. Key and value
// 2. Unsorted
// 3. hash Techique 



// What is Multipal Map
// 1. Key Duplicated



#include<iostream>
using namespace std;
#include <map>
int main(){
    map<int ,string> m1{{2,"Bipin"},{21,"Rinku"},{3,"Rohit"},{4,"Shubham"}};
    m1[104];
    m1[104]="bipins";
    
    for(auto p:m1){
        // this is automatically short it
        cout<<p.first<<":"<<p.second<<"\n";
    }


    map<string,int>m2{{"n",101},{"k",900},{"l",300},{"o",302}};
    m2.insert({"a",100});
    m2.insert({"b",1001});
    // m2[];

    // // m2[900]=18;
for(auto i=m2.begin();i!=m2.end();i++){
    cout<<i->first<<":"<<i->second<<"\n";
}




auto h =m2.find("a");
cout<<h;
m2.erase("a");
// if(h){
// cout<<";have account"<<"\n";
// cout<<h->first>>h->second;
// }
// else{
//     cout<<"Not have "
// }
}

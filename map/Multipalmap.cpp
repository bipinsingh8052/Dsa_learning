// what is multipal map
// all are same but in you can store a duplicate key



#include<iostream>
using namespace std;
#include <map>
int main(){
    multimap<int ,string> m1{{2,"Bipin"},{21,"Rinku"},{3,"Rohit"},{4,"Shubham"}};
    m1[104];
    m1[104]="bipins";
    
    for(auto p:m1){
        // this is automatically short it
        cout<<p.first<<":"<<p.second<<"\n";
    }


    multimap<string,int>m2{{"n",101},{"k",900},{"l",300},{"o",302}};
    m2.insert({"a",100});
    m2.insert({"b",1001});
    // m2[];

    // // m2[900]=18;
for(auto i=m2.begin();i!=m2.end();i++){
    cout<<i->first<<":"<<i->second<<"\n";
}



mp.erase(10);
// delete all this key and value





// auto h =m2.find("a");
// cout<<h;
// m2.erase("a");
// if(h){
// cout<<";have account"<<"\n";
// cout<<h->first>>h->second;
// }
// else{
//     cout<<"Not have "
// }
}

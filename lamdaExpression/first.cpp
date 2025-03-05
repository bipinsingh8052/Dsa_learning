// What is lamda Expression
// this is Bascially anonymonos function (you can also say it in line function) is called a lamda Expression




#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    cout<<[](int a,int b){return a<b;}(2,5)<<"\n";

    vector<int> v1;
    v1.push_back(90);
    v1.push_back(99);
    v1.push_back(9);
    v1.push_back(0);
    v1.push_back(92);

    for(auto p:v1){
        cout<<p<<"\n";
    }
    sort(v1.begin(),v1.end());
    for(auto p:v1){
        cout<<p<<"\n";
    }

    // decendeing order
    sort(v1.begin(),v1.end(),[](int a,int b){return a>b;});

    for(auto p: v1){
        cout<<p<<"\n";
    }


    // decendeing order 
    sort(v1.begin(),v1.end(),greater<int>());




    // // have all method in here:
    // 1.all_of()
    // 2.none_of()
    // 3.any_of();
    // they all are return only boolean values



    // have also use it lamda expression
    auto s =[](int a,int b){return a+b;};


    cout<<s(2,1)<<"\n";

}
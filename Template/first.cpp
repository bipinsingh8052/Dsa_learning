// what is template 
// Template is Generalised formated of any program that may be two type(generatoris foramte)
// 1.function type
// 2.Class type




// Function type template

// #include <iostream>
// using namespace std;
// template < typename t1>
// t1 sum (t1 a,t1 b){
// cout<<a+b;
// }
// int main(){
//     sum(7,9);
// }



// // this when you do it 2 datatype use in different that when you used it 
// #include <iostream>
// using namespace std;
// template < typename t1,typename t2>
// t2 sum (t1 a,t2 b){
// cout<<a+b;
// }
// int main(){
//     sum(7,9.9);
// }






// // class template 
// #include<iostream>
// using namespace std;
// template <typename t1>
// class Cybrom {
//     t1 a;
//     public :Cybrom (t1 c){
//         a=c;
//     };
//     void sum (){
//         cout<<a+1;
//     };
// };
// int main(){
//     Cybrom<int>obj(12);
//     obj.sum();
// }


// many are in class type
#include<iostream>
using namespace std;
template <typename t1,typename t2>
class Cybrom {
    t1 a;
    t2 b;
    
    public :void sum (t1 c ,t2 d){
        a=c;
        b=d;
        cout<<a+b;
    };
};
template <typename t3,typename t4>
class Cybrom2 {
    t3 a;
    t4 b;
    
    public :void sum (t3 c ,t4 d){
        a=c;
        b=d;
        cout<<a+b;
    };
};
int main(){
    Cybrom<int,float>obj;
    obj.sum(12,12.99);
    cout<<"\n second \n";
    Cybrom2<float ,float>kill;
    kill.sum(34.5,33.9);
}
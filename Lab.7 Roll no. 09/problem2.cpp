#include <iostream>
#include"base.h"
using namespace std;
 base::base(int val=0){
    n1 =val;
    cout<<"overloaded constructor of base class"<<endl;
 }
 void base::print()const{
    cout<<n1<<" ";
 }
 base::~base(){
   cout<<"destructor of base class"<<endl;
 }
 derived1::derived1(int val1=0,int val2=0):base(val1),n2{val2}{
    
     cout<<"overloaded constructor of derived1 class"<<endl;
 }
void derived1::print()const{
    base::print();
   cout<<n2<<" ";
}
derived1::~derived1(){
   cout<<"destructor of derived1 class"<<endl;
}
derived2::derived2(int val3=0 , int val4=0 , int val5=0):derived1(val3,val4), n3{val5}{
    
    cout<<"overloded constructor of derived2 class"<<endl;
 }
void derived2::print()const{
    derived1::print();
      cout<<n3<<endl;
}
derived2::~derived2(){
   cout<<"destructor of derived2 class"<<endl;
}

#include <iostream>
#include"prob3.h"
using namespace std;
 base::base(int val=0){
    n1 =val;
    cout<<"overloaded constructor of base class"<<endl;
 }
 void base::print()const{
    cout<<n1<<" ";
 }
 base::base(const base& obj){
    n1 = obj.n1;
    cout<<"copy constructor of base class"<<endl;
 }
 base& base::operator=(const base& rhs){
    if(&rhs!=this){
        n1 = rhs.n1;
        cout<<"Assignment operator of base class"<<endl;
       
    }
     return *this;
 }
 void base::setvalue(int v){
    n1 = v;
    cout<<"seter function of base class"<<endl;
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
derived1::derived1(const derived1& obj):base(obj),n2{obj.n2}{
cout<<"copy constructor of derived1 class"<<endl;
}
derived1& derived1::operator=(const derived1& rhs){
    if(&rhs!=this){
        base::operator=(rhs);
        n2 = rhs.n2;
        cout<<"Assignment operator of derived1 class"<<endl;
    }
    return *this;
}
void derived1::setvalue(int v){
    n2 = v;
    cout<<"seter function of derived1 class"<<endl;
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
derived2::derived2(const derived2& obj):derived1(obj),n3{obj.n3}{
cout<<"copy constructor of derived2 class"<<endl;
}
derived2& derived2::operator=(const derived2& rhs){
    if(&rhs!=this){
        derived1::operator=(rhs);
        n3 = rhs.n3;
        cout<<"Assignment operator of derived2 class"<<endl;
    }
    return *this;
}
void derived2::setvalue(int v){
    n3 = v;
    cout<<"seter function of derived2 class"<<endl;
}
derived2::~derived2(){
   cout<<"destructor of derived2 class"<<endl;
}

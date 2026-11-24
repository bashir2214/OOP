#ifndef prob4_h
#define prob4_h
#include <iostream>
using namespace std;
 class base{
    int n1{};
    public:
    base(int );
    base(const base&);
    base& operator=(const base&);
   int getnum()const;
    void setvalue(int);
    ~base();
 };
 class derived1:public base{
    int n2{};
    public:
    derived1(int , int );
    derived1(const derived1&);
    derived1& operator=(const derived1&);
   int getnum1()const;
    void setvalue(int);
 ~derived1();
 };
 class derived2:public derived1{
    int n3{};
    public:
    derived2(int , int , int );
    derived2(const derived2&);
    derived2& operator=(const derived2&);
   int getnum2()const;
    void setvalue(int);
    ~derived2();
 };
 
   ostream&operator<<(ostream& os , derived2& obj);
 #endif

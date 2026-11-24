#ifndef base_h
#define base_h
#include <iostream>
using namespace std;
 class base{
    int n1{};
    public:
    base(int );
    void print()const;
    ~base();
 };
 class derived1:public base{
    int n2{};
    public:
    derived1(int , int );
    void print()const;
 ~derived1();
 };
 class derived2:public derived1{
    int n3{};
    public:
    derived2(int , int , int );
    void print()const;
    ~derived2();
 };
 #endif

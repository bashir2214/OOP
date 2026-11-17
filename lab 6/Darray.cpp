#include <iostream>
#include "darray.h"
using namespace std;
darray::darray(){
   iptr = new int[1];
   size = 0;
   capacity = 1;

}
void darray:: push_back(int val){
   if(capacity>size){
    iptr[size] = val;
    size++;
   }
   
   else {
    
     capacity = capacity*2;
    int *temp = new int[capacity];
    for(int j{};j<size;j++){
        temp[j]=iptr[j];
    }
    temp[size] = val;
    size++;
   delete[] iptr;
   iptr = temp;
   }
    
}
darray& darray::operator=(const darray& rhs){
    if(&rhs!=this){
    delete[] iptr;
    iptr = new int[rhs.size];
    for(int i{};i<rhs.size;i++){
        iptr[i] = rhs.iptr[i];
        
    }
    size = rhs.size;
    capacity = rhs.capacity;
    }
    return *this;
}
darray::~darray(){
  delete[] iptr;
  iptr = nullptr;
}
int darray::getsize()const{
    return size;
}
int darray:: operator[](int i)const{
   return iptr[i];
}
ostream& operator <<(ostream& os , const darray& obj){
    for(int i{};i<obj.getsize();i++){
    os << obj[i]<<" ";
    }
    return os;
}

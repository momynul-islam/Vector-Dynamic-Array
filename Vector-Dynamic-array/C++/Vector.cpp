#include <iostream>
#include "Vector.h"

using namespace std;

template <class T>
Vector<T>::Vector(){
    arr = new T[1];
    size = 1;
    length = -1;
}

template <class T>
Vector<T>::Vector(int size){
    arr = new T[size];
    this->size = size;
    this->length = -1;
}

template <class T>
void Vector<T>::push_back(T value){
    if( (length+1) == size){
        T *temp = new T[2 * size];
        for(int i=0; i<=length; i++){
            temp[i] = arr[i];
        }
        delete[] arr;
        size *= 2;
        arr = temp;
    }
    arr[++length] = value;
}

template <class T>
void Vector<T>::push(T value,int position){
    if( (position-1) >= length)
        push_back(value);
    else
        arr[position-1] = value;
}

template <class T>
void Vector<T>::pop_back(){
    if(length < 0){
        cout << "Can't remove.Array is empty" << endl;
        return;
    }
    length--;
}

template <class T>
void Vector<T>::pop(int position){
    if(length < 0){
        cout << "Can't remove.Array is empty" << endl;
        return;
    }
    else if(length <= 2)
        pop_back();
    else{
        for(int i=position-1; i<length; i++){
            arr[i] = arr[i+1];
        }
        length--;
    }
}

template <class T>
void Vector<T>::print(){
    for(int i=0; i<=length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <class T>
int Vector<T>::getLength(){
    return length + 1;
}

template <class T>
int Vector<T>::getSize(){
    return size;
}

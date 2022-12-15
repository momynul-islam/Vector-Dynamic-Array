#ifndef VECTOR_H
#define VECTOR_H

template <class T>
class Vector
{
private:
    int length,size;
    T *arr;
    public:
        Vector<T>();
        Vector<T>(int size);
        void push(T value,int position);
        void push_back(T value);
        void pop_back();
        void pop(int position);
        int getLength();
        int getSize();
        void print();
};

#endif // VECTOR_H

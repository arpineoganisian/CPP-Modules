//
// Created by arpine on 31.12.2021.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include "cassert"

template <class T>
class Array {
private:
    unsigned int n;
    T *arr;
public:
    Array() : n(0), arr(new T[0]) { }

    Array(unsigned int n) : n(n), arr(new T[n]) { }

    Array(const Array &src) : n(src.n), arr(new T[n]) {
        for (unsigned int i = 0; i < n; i++)
            this->arr[i] = src.arr[i];
    }

    Array& operator=(const Array &src) {
        if (this != &src) {
            if (this->arr)
                delete[] this->arr;
            this->n = src.n;
            this->arr = new T[this->n];
            for (unsigned int i = 0; i < this->n; i++) {
                this->arr[i] = src.arr[i];
            }
        }
        return *this;
    }

    T& operator[](const int index) {
        if (index < 0 || index >= static_cast<long>(this->n))
            throw std::out_of_range("Index is out of range");
        return this->arr[index];
    }

    unsigned int size() {
        return this->n;
    }

    virtual ~Array() {
        delete[] this->arr;
    }

};


#endif //ARRAY_HPP

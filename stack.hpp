#ifndef STACK_HPP_INCLUDED
#define STACK_HPP_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <array>

using namespace std;

//modul stack
#define Nil 0       //Nil is Stack with empty element
typedef int info;   // nilai elemen array
typedef int address; // index array dari stack
int const MaxEl = 10;

typedef struct Stack
{
    info T[MaxEl];  // array untuk menyimpan elemen
    address TOP;    // alamat top element
    Stack_a();
    bool isEmpty(); // mengembalikan nilai true jika stack kosong
    bool isFull();  // mengembalikan nilai true jika stack penuh
    void push(info x);  // memasukkan nilai x ke dalam stack
    void pop(info *x);  // mengambil nilai x sebagai parameter keluaran, lalu menghapus x dari stack
    void printStack();  // mencetak isi stack
};
#endif

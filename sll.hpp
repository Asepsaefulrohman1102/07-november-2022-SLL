#ifndef SLL_HPP_INCLUDED
#define SLL_HPP_INCLUDED
#include <iostream>

using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist {
	infotype Info;
	address Next;
} ElmtList;

typedef struct List {
    address First;

    bool ListEmpty(List L);
    void CreateList(List *L);
    address Alokasi(infotype X);
    void Dealokasi(address *P);
    void insertDepan(List *L,infotype databaru);
    void PrintInfo(List info);
};


#define Info(P)  (P)->Info
#define Next(P)  (P)->Next
#define First(L) ((L).First)

#endif // SLL_HPP_INCLUDED

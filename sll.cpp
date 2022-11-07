#include "sll.hpp"

//membuat head/first bernilai NULL/Nil
//memakai bintang untuk mengubah isi list
bool List::ListEmpty(List L) {
	return First(L) == Nil; //pengosongan memori
}

//untuk mengecek apakah list kosong
void List::CreateList(List *L) {
	First(*L) = Nil;
}

//Alokasi dipanggil saat ada penambahan element
address List::Alokasi(infotype X) {
	address P;

	P = new ElmtList;
	if(P != Nil) {
		Info(P) = X;
		Next(P) = Nil;
	}
	return P;
}

void List::insertDepan(List *L, infotype databaru)
{
    address P;
    P=Alokasi(databaru);
    if (ListEmpty(List (*L)))
    { // kosong
        //head = baru;
        First(*L)=P;
    }
    else
    { // isi
        //baru->next = head;
        Next(P) = First(*L);

        //head = baru;
        First(*L) = P;
    }
}

void List::PrintInfo(List L) {
	address P;
	if(ListEmpty(L)) {
		printf("* List Kosong\n");
	} else {
		P = First(L);
		do {
			printf("|%d| ",Info(P));
			P = Next(P);
		} while (P != Nil);
	}
}

void List::Dealokasi(address *P) {
	free(*P);
}

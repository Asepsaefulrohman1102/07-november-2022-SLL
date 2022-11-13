#include "sll.hpp"

//cek list kosong
bool List::ListEmpty(List L){
	if (L.First == NULL){
		return true;
	}else{
		return false;
	}
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

//dealokasi dipanggil saat ada penghapusan element
void List::Dealokasi(address *P) {
	free(*P);
}

//insert belakang
void List::insertBelakang(List *L, infotype databaru)
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
		address Q;
		Q=First(*L);
		while (Next(Q)!=Nil)
		{
			Q=Next(Q);
		}
		Next(Q)=P;
	}
}


void List::deleteDepan(List *L)
{
	address P;
	if (ListEmpty(List (*L)))
	{
		cout<<"List Kosong"<<endl;
	}
	else
	{
		P=First(*L);
		First(*L)=Next(P);
		Next(P)=Nil;
		Dealokasi(&P);
	}
}


void List::deleteBelakang(List *L)
{
	address P;
	if (ListEmpty(List (*L)))
	{
		cout<<"List Kosong"<<endl;
	}
	else
	{
		if (Next(First(*L))==Nil)
		{
			P=First(*L);
			First(*L)=Nil;
			Dealokasi(&P);
		}
		else
		{
			address Q;
			Q=First(*L);
			while (Next(Next(Q))!=Nil)
			{
				Q=Next(Q);
			}
			P=Next(Q);
			Next(Q)=Nil;
			Dealokasi(&P);
		}
	}
}

#include "sll.hpp"

int main(){
    List L;
	address P;

	L.CreateList(&L);
	//printf("List Kosong : &d\n", L.ListEmpty(L));
	cout << "List Kosong : " << L.ListEmpty(L) << endl;

	L.insertDepan(&L,5);
	L.insertDepan(&L,3);
	L.insertDepan(&L,2);
	L.PrintInfo(L);
	return 0;
}

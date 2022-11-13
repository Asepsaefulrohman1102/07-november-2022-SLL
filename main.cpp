#include "sll.hpp"

int main(){
    List L;
	address P;

	L.CreateList(&L);
	//printf("List Kosong : &d\n", L.ListEmpty(L));
	cout << "List Kosong : " << L.ListEmpty(L) << endl;

	//insert depan
	cout << "insert depan "<<endl;
	L.insertDepan(&L,5);
	L.insertDepan(&L,3);
	L.insertDepan(&L,2);
	L.PrintInfo(L);
	cout << endl;
	cout << "insert belakang"<<endl;
	//insert belakang
	L.insertBelakang(&L,7);
	L.insertBelakang(&L,9);
	L.insertBelakang(&L,10);
	L.PrintInfo(L);
	cout << endl;
    cout << endl;
    cout << "List Kosong : " << L.ListEmpty(L) << endl;

	cout << "delete depan"<<endl;
	//delete depan
	L.deleteDepan(&L);
	L.PrintInfo(L);
	cout << endl;
	L.deleteDepan(&L);
	L.PrintInfo(L);
	cout << endl;
	L.deleteDepan(&L);
    L.PrintInfo(L);
	cout << endl;
	//delete belakang
	cout << "delete belakang" << endl;
	L.PrintInfo(L);
	cout << endl;
	L.deleteBelakang(&L);
	L.PrintInfo(L);
	cout << endl;
	L.deleteBelakang(&L);
	L.PrintInfo(L);
	cout << endl;
	L.deleteBelakang(&L);
	L.PrintInfo(L);
	cout << endl;
	cout << "List Kosong : " << L.ListEmpty(L) << endl;

	return 0;
}

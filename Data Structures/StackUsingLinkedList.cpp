#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

struct Stack
{
	Node* head;
	Node* tail;
};

void init(Stack& s)
{
	s.head = s.tail = NULL;
}

bool isEmpty(Stack s)
{
	if (s.head == NULL) return true;
	return false;
}

Node* creatNode(int x)
{
	Node* p = new Node;
	if (p == NULL) exit(1);//Thoat neu khong duoc cap phat bo nho dong
	p->next = NULL;
	p->data = x;
	return p;
}

void Push(Stack& s, int x)
{
	Node* p = creatNode(x);
	if (isEmpty(s)) {
		s.head = s.tail = p;
	}
	else {
		p->next = s.head;//Chen vao dau cua stack
		s.head = p;//Cap nhat
	}
}

int Pop(Stack& s)
{
	if (!isEmpty(s)) {
		Node* p = s.head;//Lay phan tu top ra khoi stack
		s.head = s.head->next;
		return p->data;
		delete(p);
	}
	return 0;
}

void nhap(Stack& s)
{
	int n;
	cout << "Nhap so luong phan tu ban dau: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		Push(s, i);
	}
}

void xuat(Stack s)
{
	if (!isEmpty(s)) {
		Node* p = s.head;
		while (p != NULL) {
			cout << " -> " << p->data;
			p = p->next; 
		}
	}
}

void menu()
{
	Stack s;
	init(s);
	nhap(s);
	xuat(s);
	int lc, k;
	do {
		cout << "\n____LUA CHON____\n1_Xuat\n2_Push\n3_Pop\n0_Exit\nBan chon ? ";
		cin >> lc;
		switch (lc) {
		case 0: break;
		case 1: xuat(s); break;
		case 2: cout << "Nhap k: "; cin >> k; Push(s, k); break;
		case 3: Pop(s); break;
		default:cout << "Nhap sai, nhap lai!";
		}
	} while (lc);
}

int main() {
	menu();
	return 0;
}
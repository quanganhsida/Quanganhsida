#include<iostream>
using namespace std;

int n;

struct Node
{
	int data;
	Node* next;//Node chua dia chi ke tiep ma no tro toi
};

struct list
{
	Node* head;
	Node* tail;
};

void init(list& l)//Khoi tao list rong
{	
	l.head = l.tail = NULL;
}

Node* creatNode(int x)//Tao thong tin cho Node
{
	Node* p = new Node;
	if (p == NULL) exit(1);
	p->next = NULL;
	p->data = x;
	return p; 
}

bool isEmpty(list l)//Kiem tra xem danh sach co rong hay ko
{
	if (l.head == NULL) return true;
	return false;
}

//Chen vao dau danh sach
void addHead(list& l, int x)
{
	Node* p = creatNode(x);
	if (isEmpty(l)) l.head = l.tail = p;
	else {
		p->next = l.head;//Con tro next cua p tro toi dia chi cua Node head
		l.head = p;//Cap nhat Node head (luc sau)
	}
}

//Chen vao cuoi list (Chen vao sau khi da co Node dau)
void addTail(list& l, int x)
{
	Node* p = creatNode(x);
	if (isEmpty(l)) addHead(l, x);
	else {
		l.tail->next = p;
		l.tail = p;
	}
}

//Tim kiem
Node* search(list l, int k)
{
	Node* p = l.head;
	while (p != NULL) {
		if (p->data == k) return p;
		else
		{
			p = p->next;
		}
	}
	return NULL;
}

//Chen node co data = x vao sau node co data = k
void addMid(list& l, int x, int k)
{
	Node* p = search(l, k);
	if (p != NULL) {
		Node* q = creatNode(x);
		Node* r = p->next;
		p->next = q;
		q->next = r;
	}
}

//Nhap vao 1 list bat ki
void nhap(list& l)
{
	cout << "\nNhap so phan tu ban dau cua day: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		addTail(l, i);
	}
}

//Xuat ra 
void xuat(list l) {
	Node* p = l.head;
	while (p != NULL) {
		cout << " " << p->data;
		p = p->next;
	}
}

void menu()
{
	list l;
	init(l);
	nhap(l);
	xuat(l);
	int k, x, lc;
	do {
		cout << "\n______MENU______\n1_Chen dau.\n2_Chen cuoi."
			<< "\n3_Chen node co data = k sau vi tri node co data = x."
			<< "\n4_Xuat thong tin list.\n0_Thoat.\nBAN CHON ?\n";
		cin >> lc;
		switch (lc)
		{
		case 0: break;
		case 1: cout << "Nhap x: "; cin >> x; addHead(l, x); n++; break;
		case 2: cout << "Nhap x: "; cin >> x; addTail(l, x); n++; break;
		case 3: cout << "Nhap x, k: "; cin >> x >> k; addMid(l, x, k); n++; break;
		case 4: xuat(l); break;
		}
	} while (lc != 0);
}

int main() {
	menu();
	return 0;
}

#include <iostream>
using namespace std;

// Dinh nghia kieu du lieu Node su dung typedef
typedef struct Node {
    int info;          // Gia tri cua nut
    Node* next;        // Con tro toi nut tiep theo
} Node;

// Khoi tao danh sach rong (con tro dau tro den NULL)
Node* pHead = NULL;

// Ham nhap danh sach
void InPut() {
    int n, x;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap gia tri phan tu thu " << i + 1 << ": ";
        cin >> x;
        Node* newNode = new Node;  // Cap phat bo nho cho nut moi
        newNode->info = x;
        newNode->next = NULL;

        // Them nut vao cuoi danh sach
        if (pHead == NULL) {
            pHead = newNode;  // Neu danh sach rong, nut moi la dau
        } else {
            Node* temp = pHead;
            while (temp->next != NULL) {
                temp = temp->next;  // Di chuyen den cuoi danh sach
            }
            temp->next = newNode;  // Them nut moi vao cuoi
        }
    }
}

// Ham hien thi danh sach
void OutPut() {
    if (pHead == NULL) {
        cout << "Danh sach rong " << endl;
        return;
    }

    Node* temp = pHead;
    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Ham them nut vao cuoi danh sach
void InsertLast(int x) { // them 1 node vao cuoi danh sach
    Node* newNode = new Node;
    newNode->info = x;
    newNode->next = NULL;

    if (pHead == NULL) {
        pHead = newNode;
    } else {
        Node* temp = pHead;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Ham xoa nut dau danh sach
void DeleteFirstNode() { // xoa node dau
    if (pHead == NULL) {
        cout << "Khong the xoa!" << endl;
        return;
    }

    Node* temp = pHead;
    pHead = pHead->next;  // Dua pHead tro den nut tiep theo
    delete temp;          // Giai phong bo nho cua nut cu
}

// Ham sap xep danh sach theo thu tu giam dan su dung Selection Sort
void SelectionSort() {
    if (pHead == NULL) return;

    for (Node* i = pHead; i != NULL; i = i->next) {
        Node* maxNode = i;
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (j->info > maxNode->info) {
                maxNode = j;
            }
        }

        // Hoan doi gia tri cua nut i va nut maxNode
        if (maxNode != i) {
            int temp = i->info;
            i->info = maxNode->info;
            maxNode->info = temp;
        }
    }
}

// Ham tim kiem gia tri trong danh sach
Node* SearchNode(int y) {
    Node* temp = pHead;
    while (temp != NULL) {
        if (temp->info == y) {
            return temp;  // Tra ve dia chi cua nut tim thay
        }
        temp = temp->next;
    }
    return NULL;  // Tra ve NULL neu khong tim thay
}

// Ham hien thi menu
void ShowMenu() {
    cout << "\nMenu:\n";
    cout << "1. Nhap vao danh sach\n";
    cout << "2. Hien thi danh sach\n";
    cout << "3. Them mot nut vao cuoi danh sach\n";
    cout << "4. Xoa nut dau danh sach\n";
    cout << "5. Sap xep danh sach theo thu tu giam dan\n";
    cout << "6. Tim nut co gia tri x\n";
    cout << "0. Thoat\n";
}

int main() {
    int choice;
    int x;
    Node* result;

    do {
        ShowMenu();
        cout << "Chon chuc nang: ";
        cin >> choice;

        switch (choice) {
            case 1:
                InPut();
                break;
            case 2:
                OutPut();
                break;
            case 3:
            	
                cout << "Nhap gia tri x: ";
                cin >> x;
				cout<<"Danh sach truoc khi chinh sua: "; 
            	OutPut();
            	cout<<"Danh sach sau khi chinh sua: "; 
                InsertLast(x);
                OutPut();
                break;
            case 4:
				cout<<"Danh sach truoc khi chinh sua: "; 
            	OutPut();
            	cout<<"Danh sach sau khi chinh sua: "; 
                OutPut();
				DeleteFirstNode();
                break;
            case 5:
            	cout <<"Danh sach truoc khi sap xep: "; 
            	OutPut();
                SelectionSort();
                cout << "Danh sach sau khi sap xep: ";
                OutPut();
                break;
            case 6:
                cout << "Nhap gia tri can tim: ";
                cin >> x;
                result = SearchNode(x);
                if (result != NULL) {
                    cout << "Tim thay nut co gia tri " << x << " tai dia chi: " << result << endl;
                } else {
                    cout << "Khong tim thay nut co gia tri " << x << endl;
                }
                break;
            case 0:
                cout << "Thoat chuong trinh.\n";
                break;
            default:
                cout << "Chuc nang khong hop le! Vui long chon lai.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}


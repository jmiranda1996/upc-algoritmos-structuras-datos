#include <iostream>

using namespace std;

typedef unsigned int uint;

template <typename T>
class List {
    struct Node;

    Node* init;
    uint length;

    public:
        List() { init = nullptr; length = 0; }

        uint getSize();
        bool isEmpty();
        void add(T newElement);
        void addLast(T newElement);
        void printAllElements();
};

template <typename T>
struct List<T>::Node {
    T element;
    Node* next;

    public:
        Node(T element, Node* next = nullptr): element(element), next(next) {}
};

template <typename T>
uint List<T>::getSize() {
    return length;
}

template <typename T>
bool List<T>::isEmpty() {
    return length == 0;
}

template <typename T>
void List<T>::add(T newElement) {
    Node* newNode = new Node(newElement, init);
    if(newNode != nullptr) {
        init = newNode;
        length++;
    }
}

template <typename T>
void List<T>::addLast(T newElement) {
    if (length == 0) add(newElement);
    else {
        Node* aux = init;
        for (int i = 1; i < length; i++)
        {
            cout << aux->element << endl;
            aux = aux->next;
        }
        Node* newNode = new Node(newElement);
        if (newNode != nullptr) {
            aux->next = newNode;
            length++;
        }
    }
}

template <typename T>
void List<T>::printAllElements() {
    Node* aux = init;
    for (int i = 0; i < length; i++)
    {
        cout << aux->element << endl;
        aux = aux->next;
    }   
}


int main() {

    cout << "==========" << endl;
    cout << "Lists" << endl;
    cout << "==========" << endl << endl;

    List<int> list;
    int menu;

    do
    {
        cout << "Choose any option:" << endl << endl;
        cout << "1. Get list size" << endl;
        cout << "2. Get list status" << endl;
        cout << "3. Add new number" << endl;
        cout << "4. Add new number at last" << endl;
        cout << "5. Print all elements" << endl;
        cout << "10. Exit" << endl << endl;

        do {
            cin >> menu;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a number" << endl;
            } else break;
        } while(true);

        cout << endl;
        
        int newElement;

        switch(menu) {
            case 1:
                cout << "The list size is: " << list.getSize() << endl;
                break;
            case 2:
                cout << (list.isEmpty() ? "The list is empty" : "The list is not empty") << endl;
                break;
            case 3:
                cout << "Enter new element: ";
                cin >> newElement;
                cout << endl;
                list.add(newElement);
                cout << "Added element " << newElement << endl;
                break;
            case 4:
                cout << "Enter new element: ";
                cin >> newElement;
                cout << endl;
                list.addLast(newElement);
                cout << "Added element " << newElement << endl;
                break;
            case 5:
                list.printAllElements();
                break;
            case 10:
                cout << "Goodbye!" << endl;
                break;
            default: 
                cout << "Not valid option!" << endl;
                break;
        }

        cout << endl;

    } while (menu != 10);
    
    
    return 0;
}
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class MyLinkedList {
private:
    Node* head;

public:
    MyLinkedList() {
        head = NULL;
    }

    int get(int index) {
        Node* temp = head;

        for (int i = 0; i < index && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL)
            return -1;

        return temp->data;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL)
            return;

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtIndex(int index) {
        if (head == NULL)
            return;
        Node* temp  = head;
        Node* prev =  NULL;

        for(int i  = 0;i<index;i++){
            prev = temp;
            temp =  temp->next;


        }

        if(temp ==NULL){
            return;
        }
        if(prev==NULL){
            head = head->next;
        }
        else{
            prev->next =  temp->next;
        }
        delete temp;
    }
};
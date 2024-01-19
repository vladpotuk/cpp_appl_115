#include "Queue.h"

template <typename T>
Queue<T>::Queue() : front(nullptr), rear(nullptr) {}

template <typename T>
Queue<T>::~Queue() {
    while (!isEmpty()) {
        dequeue();
    }
}

template <typename T>
void Queue<T>::enqueue(const T& value) {
    Node<T>* newNode = new Node<T>(value);
    if (isEmpty()) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }
}

template <typename T>
void Queue<T>::dequeue() {
    if (isEmpty()) {
        return;
    }

    Node<T>* temp = front;
    front = front->next;
    if (front) {
        front->prev = nullptr;
    }
    else {
        rear = nullptr;
    }

    delete temp;
}

template <typename T>
T Queue<T>::frontValue() const {
    if (isEmpty()) {
        
        return T();
    }

    return front->data;
}

template <typename T>
bool Queue<T>::isEmpty() const {
    return front == nullptr;
}


template class Queue<int>;  



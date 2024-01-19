#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node* prev;

    Node(T value) : data(value), next(nullptr), prev(nullptr) {}
};

template <typename T>
class Queue {
private:
    Node<T>* front;
    Node<T>* rear;

public:
    Queue();
    ~Queue();

    void enqueue(const T& value);
    void dequeue();
    T frontValue() const;
    bool isEmpty() const;
};

#endif 

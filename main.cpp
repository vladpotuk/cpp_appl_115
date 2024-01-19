#include <iostream>
#include "Queue.h"

int main() {
    Queue<int> myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Front value: " << myQueue.frontValue() << std::endl;

    myQueue.dequeue();

    std::cout << "Front value after dequeue: " << myQueue.frontValue() << std::endl;

    return 0;
}

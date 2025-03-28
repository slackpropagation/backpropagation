#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    std::cout << "Top: " << maxHeap.top() << std::endl; // 20

    maxHeap.pop(); // removes 20
    std::cout << "Top after pop: " << maxHeap.top() << std::endl; // 10
}
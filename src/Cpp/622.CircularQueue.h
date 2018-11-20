
#ifndef _MY_CIRCULAR_QUEUE_H
#define _MY_CIRCULAR_QUEUE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class MyCircularQueue{
  private:
    int head;
    int tail;
    int count;
    int length;
    int* data;
  public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k){
        head = k - 1;
        tail = k - 1;
        count = 0;
        length = k;
        data = new int[k];
    }

    ~MyCircularQueue(){
        delete[] data;
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value){
        if (isFull())
            return false;
        data[tail] = value;
        tail = (tail + 1) % length;
        count++;
        return true;
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue(){
        if (isEmpty())
            return false;
        head = (head + 1) % length;
        count--;
        return true;
    }

    /** Get the front item from the queue. */
    int Front(){
        if (isEmpty())
            return -1;
        return data[head];
    }

    /** Get the last item from the queue. */
    int Rear(){
        if (isEmpty())
            return -1;
        return tail == 0 ? data[length - 1] : data[(tail - 1) % length];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty(){
        return count == 0;
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull(){
        return count == length;
    }
};

#endif

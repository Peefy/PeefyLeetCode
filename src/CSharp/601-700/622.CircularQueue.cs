

using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.CircularQueue
{
public class MyCircularQueue {
    
    private int[] data;
    private int pHead;
    private int pTail;
    private int size;

    /** Initialize your data structure here. Set the size of the queue to be k. */
    public MyCircularQueue(int k) {
        data = new int[k];
        pHead = 0;
        pTail = k - 1;
        size = 0;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    public bool EnQueue(int value) {
        if (IsFull()) return false;
        data[nextTail()] = value;
        size++;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    public bool DeQueue() {
        if (IsEmpty()) return false;
        nextHead();
        size--;
        return true;
    }
    
    /** Get the front item from the queue. */
    public int Front() {
        if (IsEmpty()) return -1;
        return data[pHead];
    }
    
    /** Get the last item from the queue. */
    public int Rear() {
        if (IsEmpty()) return -1;
        return data[pTail];
    }
    
    /** Checks whether the circular queue is empty or not. */
    public bool IsEmpty() {
        return size == 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    public bool IsFull() {
        return size == data.Length;
    }
    
    private int nextTail() {
        if (pTail == data.Length - 1) {
            pTail = 0;
        } else {
            pTail++;
        }
        return pTail;
    }
    
    private int nextHead() {
        if (pHead == data.Length - 1) {
            pHead = 0;
        } else {
            pHead++;
        }
        return pHead;
    }
}
}




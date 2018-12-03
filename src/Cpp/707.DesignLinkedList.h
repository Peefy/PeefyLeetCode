
#ifndef __BINARY_SERACH_H
#define __BINARY_SERACH_H

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class DoublyListNode {
public:
    int val;
    DoublyListNode* pre;
    DoublyListNode* next;

    DoublyListNode(int _val) {
        val = _val;
        pre = nullptr;
        next = nullptr;
    }

    ~DoublyListNode(){
        pre = nullptr;
        next = nullptr;
        delete pre;
        delete next;
    }

};

class MyLinkedList {
private:
    DoublyListNode* head;
    DoublyListNode* tail;
    DoublyListNode* getNodeAtIndex(int index) {
            if (index < 0) return nullptr;
            auto temp = head;
            for (int i = 0; i <= index; i++) {
                temp = temp->next;
                if (temp == nullptr) return nullptr;
            }
            return temp;
        }
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = new DoublyListNode(0);
        tail = new DoublyListNode(0);
        head->next = tail;
        tail->pre = head;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        auto node = getNodeAtIndex(index);
        return (node == nullptr || node == tail) ? -1 : node->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        auto* node = new DoublyListNode(val);
        head->next->pre = node;
        node->next = head->next;
        head->next = node;
        node->pre = head;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        auto* node = new DoublyListNode(val);
        tail->pre->next = node;
        node->pre = tail->pre;
        node->next = tail;
        tail->pre = node;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        auto* node = getNodeAtIndex(index);
        if (node == nullptr) return;
        if (node == tail) {
            addAtTail(val);
            return;
        }
        auto* newNode = new DoublyListNode(val);
        node->pre->next = newNode;
        newNode->pre = node->pre;
        newNode->next = node;
        node->pre = newNode;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        auto* node = getNodeAtIndex(index);
        if (node == nullptr || node == tail) return;
        node->pre->next = node->next;
        node->next->pre = node->pre;
    }
};

#endif

using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.KthLargest
{

    internal class IntCompare : IComparer<int>
    {
        public int Compare(int x, int y)
        {
            return x.CompareTo(y);
        }
    }

    internal class PriorityQueue<T>
    {
        // Fields
        private IComparer<T> _comparer;
        private int _count;
        private T[] _heap;
        private const int DefaultCapacity = 6;

        // Methods
        internal PriorityQueue(int capacity, IComparer<T> comparer)
        {
            this._heap = new T[(capacity > 0) ? capacity : 6];
            this._count = 0;
            this._comparer = comparer;
        }

        private static int HeapLeftChild(int i)
        {
            return ((i * 2) + 1);
        }

        private static int HeapParent(int i)
        {
            return ((i - 1) / 2);
        }

        private static int HeapRightFromLeft(int i)
        {
            return (i + 1);
        }

        internal void Pop()
        {
            if (this._count > 1)
            {
                int i = 0;
                for (int j = PriorityQueue<T>.HeapLeftChild(i); j < this._count; j = PriorityQueue<T>.HeapLeftChild(i))
                {
                    int index = PriorityQueue<T>.HeapRightFromLeft(j);
                    int num4 = ((index < this._count) && (this._comparer.Compare(this._heap[index], this._heap[j]) < 0)) ? index : j;
                    this._heap[i] = this._heap[num4];
                    i = num4;
                }
                this._heap[i] = this._heap[this._count - 1];
            }
            this._count--;
        }

        internal void Push(T value)
        {
            if (this._count == this._heap.Length)
            {
                T[] localArray = new T[this._count * 2];
                for (int j = 0; j < this._count; j++)
                {
                    localArray[j] = this._heap[j];
                }
                this._heap = localArray;
            }
            int i = this._count;
            while (i > 0)
            {
                int index = PriorityQueue<T>.HeapParent(i);
                if (this._comparer.Compare(value, this._heap[index]) >= 0)
                {
                    break;
                }
                this._heap[i] = this._heap[index];
                i = index;
            }
            this._heap[i] = value;
            this._count++;
        }

        // Properties
        internal int Count
        {
            get
            {
                return this._count;
            }
        }

        internal T Top
        {
            get
            {
                return this._heap[0];
            }
        }
    }
    public class KthLargest
    {

        PriorityQueue<int> heap;
        int maxSize;
        public KthLargest(int k, int[] nums)
        {
            heap = new PriorityQueue<int>(k * 2, new IntCompare());
            maxSize = k;
            foreach (int num in nums) {
                this.Add(num);
            }
        }

        public int Add(int val)
        {
            if (heap.Count < maxSize) {
                heap.Push(val);
            } else if (val > heap.Top) {
                heap.Pop();
                heap.Push(val);
            }
            return heap.Top;
        }
    }
}

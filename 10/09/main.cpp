/*
  This program will
     - read integers from the keyboard and insert them into a min-heap and a max-heap
     - display the integers as they are deleted from the min-heap.
     - display the integers as they are deleted from the max-heap.
*/

#include <iostream>
#include "Heap.h"

using namespace std;

void iDisplay(int item, int level);
int compareMin(int, int);
int compareMax(int, int);

int main()
{
    Heap minHeap(32);
    Heap maxHeap(32);

    // build heap
    int num;
    cout << "Enter integers [0 - to stop]" << endl;
    cin >> num;
    while (num != 0)
    {
        /* Write your code here:
           call insertHeap to insert num into the min-heap */
        /* Write your code here:
           call insertHeap to insert num into the max-heap */
        cin >> num;
    }

    // print items as they are deleted from the min-heap (sorted in ascending order)
    cout << "Min-Heap: ";
    while (!minHeap.isEmpty())
    {
        minHeap.deleteHeap(num, compareMin);
        cout << num << " ";
    }
    cout << endl;

    // print items as they are deleted from the heap (sorted in descending order)
    cout << "Max-Heap: ";
    while (!maxHeap.isEmpty())
    {
        maxHeap.deleteHeap(num, compareMax);
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*
  indented heap display:
  displays one item including the level number
  and corresponding indentation
*/
void iDisplay(int item, int level)
{
    for (int i = 0; i < level; i++)
        cout << "..";
    cout << level << "). " << item << endl;
}

/*
  compare two data items: needed to build a min-heap
*/
int compareMin(int x, int y)
{
    if (x < y)
        return -1;
    if (x == y)
        return 0;
    return 1;
}

/*
  compare two data items: needed to build a max-heap
*/
int compareMax(int x, int y)
{
    if (x > y)
        return -1;
    if (x == y)
        return 0;
    return 1;
}

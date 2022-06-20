#include <bits/stdc++.h>
using namespace std;
int heapSize = 0;
class Student
{
public:
    string name;
    int rollNo, grade;
};
void max_heapify(Student *arr, int i)
{
    int largest = i; // Holds the index of the largest element
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    if (leftChild < heapSize && arr[leftChild].grade >
                                    arr[largest].grade)
        largest = leftChild;
    if (rightChild < heapSize && arr[rightChild].grade >
                                     arr[largest].grade)
        largest = rightChild;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        max_heapify(arr, largest);
    }
}
void build_mapheap(Student *arr)
{
    // Index of last non-leaf node
    int start = (heapSize / 2) - 1;
    // Perform reverse level order traversal from last non-leaf node 
    //and heapify each node
     for (int i = start; i >= 0; i--)
        max_heapify(arr, i);
}
Student extractMax(Student *arr)
{
    Student st = arr[0];
    // Assign the last element of the heap as first element and then heapify
    
        arr[0] = arr[heapSize - 1];
    heapSize = heapSize - 1;
    max_heapify(arr, 0);
    return st;
}
int main()
{
    Student arr[30];
    Student st;
    string name;
    int rollNo, grade, opt;
    do
    {
        cout<<"\n\n1.Insert\n2.Next topper fpr internship\n3.Ascending order\n0.Quit\nEnter your choice:-"<<endl;
        cin >>opt;
        switch (opt)
        {
        case 1:
            cout << "\nEnter Student's Name: ";
            cin >> arr[heapSize].name;
            cout << "Enter Student's Roll No. : ";
            cin >> arr[heapSize].rollNo;
            cout << "Enter Student's Grade: ";
            cin >> arr[heapSize].grade;
            heapSize = heapSize + 1;
            build_mapheap(arr);
            break;
        case 2:
            if (heapSize <= 0)
            {
                cout << "Heap Underflow" << endl;
                continue;
            }
            else
            {
                st = extractMax(arr);
                cout << "\nNext Topper For Internship: \nName: " << st.name << "\nRoll No.: " << st.rollNo << "\nGrade: " << st.grade << endl;
            }
            break;
        case 3:
            cout << "\nData in Ascending order of grades: \n";
            while (heapSize)
            {
                st = extractMax(arr);
                cout << "\nName: " << st.name << "\nRoll No.: " << st.rollNo << "\nGrade: " << st.grade << endl;
            }
            break;
        default:
            break;
        }
    } while (opt != 0);
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

class sorting
{
public:
    int Selection_Sort(vector<int> &arr, int n)
    {
        int min;
        for (int i = 0; i < n - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            swap(arr[i], arr[min]);
        }
        return 0;
    }
    void Merge(vector<int> &arr, int start, int mid, int end)
    {
        vector<int> temp;
        int i = start, j = mid + 1;

        while (i <= mid && j <= end)
        {
            if (arr[i] <= arr[j])
            {
                temp.push_back(arr[i++]);
            }
            else
            {
                temp.push_back(arr[j++]);
            }
        }
    }

            int Merge_Sort(vector<int> & arr, int start, int end)
            {
                if (start >= end)
                    return 0;
                int mid = start + (end - start) / 2;

                Merge_Sort(arr, start, mid);
                Merge_Sort(arr, mid + 1, end);
                Merge(arr, start, mid, end);
            }

            int Linear_Search(vector<int> & arr, int target)
            {
                for (int i = 0; i < arr.size(); i++)
                {
                    if (arr.at(i) == target)
                    {
                        return i;
                    }
                }
                return -1;
            }
            int Binary_Search(vector<int> & arr, int key)
            {
                int start = 0;
                int end = arr.size() - 1;
                while (start == end)
                {
                    int mid = start + (end - start) / 2;
                    if (arr[mid] == key)
                    {
                        return mid;
                    }
                    else if (arr[mid] < key)
                    {
                        start = mid + 1;
                    }
                    else
                    {
                        end = mid - 1;
                    }
                    return -1;
                }
            }
            void Print_Array(vector<int> & arr, int n)
            {
                cout << endl;
                cout << "Array is : ";
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        };

        int main()
        {
            vector<int> arr;
            int choice, value, n;
            sorting sort;

            do
            {
                cout << "\n-------- MENU --------\n";
                cout << "1. Enter Array" << endl;
                cout << "2. Selection Sort" << endl;
                cout << "3. Merge Sort" << endl;
                cout << "4. Linear Search" << endl;
                cout << "5. Binary Search" << endl;
                cout << "6. Print Array" << endl;
                cout << "0. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "Enter size of array: ";
                    cin >> n;
                    for (int i = 0; i < n; i++)
                    {
                        int value;
                        cout << "Enter value a[" << i << "]: ";
                        cin >> value;
                        arr.push_back(value);
                    }
                    break;
                case 2:
                    sort.Selection_Sort(arr, arr.size());
                    cout << "Array sorting using selection sort" << endl;
                    sort.Print_Array(arr, n);
                    break;
                case 3:
                    sort.Merge_Sort(arr, 0, arr.size() - 1);
                    cout << "Array sorting using merge sort" << endl;
                    sort.Print_Array(arr, arr.size());

                    break;
                case 4:
                    int element, result;
                    cout << "Enter target element : ";
                    cin >> element;
                    result = sort.Linear_Search(arr, element);
                    // return -1 it means it is returning error.
                    if (result != -1)
                    {
                        cout << "element at : " << result << endl;
                    }
                    else
                    {
                        cout << "not found!" << endl;
                    }
                    break;
                case 5:
                    cout << "Enter value to search (Binary): \n (do not enter unsorted array)";
                    cin >> element;
                    result = sort.Linear_Search(arr, element);
                    if (result != -1)
                    {
                        cout << "Element at : " << result << endl;
                    }
                    else
                    {
                        cout << "Element not found!" << endl;
                    }
                    break;
                case 6:
                    sort.Print_Array(arr, n);
                    break;
                case 0:
                    cout << "Exiting....." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                }
            } while (choice != 0);

            return 0;
        }
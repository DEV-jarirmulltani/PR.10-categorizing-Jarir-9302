#include<iostream>
#include<vector>

using namespace std;


class sorting
{
    public:
    int selection_sort(int a[] , int n)
    {
        int min , temp;
        for (int i = 0 ; i < n-1 ; i++)
        {
            min = i ;
            for (int j = 0; i < i+1; i++)
            {
                if (a[min]>a[j])
                {
                    min=j;
                }
                
            }
            swap(a[i] , a[min]);
            
        }
    }
    int Merge(vector<int>&arr , int start , int mid , int end)
    {
      vector<int>temp;

      int i =start , j = mid + 1;

      while (i<=mid && j <= end)
      {
        if (arr[i]<= arr[j])
        {
            temp.push_back (arr[i]);
        }
        else
        {
            temp.push_back (arr[j]);
        }
      }


    while (i <= mid)
    {
        temp.push_back(arr[i]);
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
    }

    for (int k = 0; k < temp.size(); k++)
    {
        arr.at(start + k) = temp.at(k);
    }

}
    int Merge_sort(vector<int>&arr,int start ,  int end)
    {
        if (start>= end)
        return 0 ;
          int mid = start + (end - start) / 2;

    Merge_sort(arr, start, mid);
    Merge_sort(arr, mid + 1, end);
    Merge(arr, start, mid, end);
}

int LinearSearch(vector<int> &array,int target)
{
    for (int i = 0; i < array.size(); i++)
    {
        if (arr.at(i) == target)
        {
            return i;
        }
    }
    return -1;
}
};


int main()
{
    int
    return 0 ;
}
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
      while (i<=mid && j<= end)
      {
        /* code */
      }
      

    }
    int linear_serch(){}
    int binary_serch(){}
};


int main()
{
    int
    return 0 ;
}
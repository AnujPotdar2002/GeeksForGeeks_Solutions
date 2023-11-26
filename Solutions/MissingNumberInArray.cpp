// User function template for C++

class Solution
{
  public:
    int missingNumber(vector<int>& array, int n)
    {
        int i,temp,sum=0;
        temp=(n*(n+1))/2;
        for(i=0;i<n-1;i++)
        {
            sum+=array[i];
        }
        return temp-sum;
    }
};

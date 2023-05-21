class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         if(n <= 2) {
             return -1;
         }
         
         int max = 0;
         for(int i = 0; i < n; i++) {
             if(a[i] > max) {
                 max = a[i];
             }
         }
         int second = INT_MIN;
         for(int i = 0; i < n; i++) {
             if (second < a[i] && a[i] < max) {
                 second = a[i];
             }
         }
         
         int third = INT_MIN;
         for(int i = 0; i < n; i++) {
             if(third < a[i] && a[i] < second) {
                 third = a[i];
             }
         }
         return third;
    }

};

//Input: 55 60 87 90 95 
//Output: 90
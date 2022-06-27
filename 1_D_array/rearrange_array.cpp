// Input:
// N = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
// Explanation: Max element = 6, min = 1, 
// second max = 5, second min = 2, and 
// so on... Modified array is : 6 1 5 2 4 3.


void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
        deque<int> gquiz;
        for(int i=0;i<n;i++){
            gquiz.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                int x= gquiz.back();
                gquiz.pop_back();
                arr[i]=x;
            }
            else{
                int x= gquiz.front();
                gquiz.pop_front();
                arr[i]=x;
            }
        }
    	 
    }
galat queston not comes output 
code by ritesh
#include<vector>
 using namespace std;
 int firstOcc( vector<int> & arr , int n, int key){
    int s=0, e =n-1;
    int mid = s +(e-s)/2;
    int ans = -1;
    while ( s<=e){
        int (arr[mid]==key){
        ans =mid;
        e = mid-1;
        }
        else if (key>arr[mid]){
            s=mid+1;
        }
        else if (key < arr[mid]){
            e=mid -1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
 }
  int lastOcc( vector <int> & arr, int n , int key){
    int s=0, e = n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if (arr[mid]== key){
            ans = mid;
            s = mid +1;
        }
        else if  (key > arr[mid]){
            s=mid+1;
        }
        else if (key>arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    mid= s+(e-s)/2;
  }
   return ans;
 }
  
   pair <int , int > firstAndlastPosition (vector<int> & arr, int n, int key){
    pair<int , int> p;
    p.first= firstocc(arr,n,key);
    p.second= lastOcc(arr, n, key);

    return p;
   }

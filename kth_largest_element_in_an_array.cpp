#include <bits/stdc++.h>
using namespace std;

// type 1 sort the array time nlog(n) space o(1)

// int findKthLargest(vector<int>& nums, int k) {
//   sort(nums.begin(), nums.end());
//   reverse(nums.begin(), nums.end());
//   int ans = k - 1;
//   return nums[ans];
// }


// type 2 priority_queue use here time nlogn space o(k)

// int findKthLargest(vector<int>& nums, int k) 
// { 
//     priority_queue<int,vector<int>,greater<int>> pq; 
    
//     for(int i = 0; i < (int)nums.size(); i++){
//         if(pq.size() > k){
//             pq.pop();
//         }
//         pq.push(nums[i]);
//     }
//     if(pq.size() > k){
//         pq.pop();
//     }
//     int ans = pq.top();
//     return ans;
// }

// type 3 time o(n) space o(n)

int findKthLargest(vector<int>& nums, int k) 
{ 
    int freq[20000 + 5] = {0};
    for(int i = 0; i < nums.size(); i++){
        freq[nums[i] + 10000]++;
    }
    int ans = 0;
    for(int i = 2e4 + 2; i >= 0; i--){
        k -= freq[i];
        if(k <= 0){
            ans = i - 10000;
            break;
        }
    }
    return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  vector<int> nums;
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    nums.push_back(x);
  }
  cout << findKthLargest(nums, k) << "\n";
}
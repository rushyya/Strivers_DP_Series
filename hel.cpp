#include <iostream>
#include <vector>
using namespace std;

/*
 Memoization:
 TC: O(n)
 SC: O(n)+O(n) StackSpace + dp array
*/
int fib(int n, vector<int> &dp){
  
  if(n<=1){
    return n;
  }

  if(dp[n] != -1){
    return dp[n];
  }

  return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

/*
Tabulation without extra space
TC: O(n)
SC: O(1)
*/
int fib(int n){
  int prev2 = 0;
  int prev1 = 1;
  int temp;
  // Tabulation without extra space
  for(int i=2; i<=n; i++){
     temp = prev2 + prev1;
     prev2 = prev1;
     prev1 = temp;
  }

  return prev1;
}

int main() {
  int n;
  cin>>n;

  vector<int> dp(n+1, -1);

  cout<<fib()<<endl;
  

}
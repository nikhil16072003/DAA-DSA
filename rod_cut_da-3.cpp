/*
RodCutting
Given a rod of length 'n' units, the price of a rod of length (i) units, p(i), i = 1, 2, ..., n and another positive integer k(k ≤ n), Design a pseudocode (Dynamic Programming approach) and write the program to compute the maximum-revenue that is obtainable by selling the rod of length 'n' after cutting them into 'k' smaller pieces. For each possible value of 'k', your code should return the maximum-revenue obtainable by selling the 'k' pieces. 

For example:

if the given rod cutting price table as

 

Length (i)

1

2

3

4

5

Price (i)

2

5

8

10

11

 

If the length of the rod (n) is given as 6 and the number of cuts (k) is given as 3

Then you have to find the maximum price for exactly with 3 pieces.

In the above example:

The possible combinations of 6 are

Length (i)

Total Price

1+1+1+1+1+1

12

1+1+1+1+2

13

1+1+2+2

14

1+2+3

15

1+5

13

2+4

15

2+2+2

15

3+1+1+1

14

4+1+1

14

3+3

16


 

Out of the above combinations even though the maximum profit obtained by 3+3 = 16 since it does not have the number of cuts as 3, you cannot consider it as a valid answer.

With 3 cuts the choices are

1+2+3 = 15

2+2+2=15

4+1+1 = 14

Out of this the maximum profits are 1+2+3 and 2+2+2

So you have to print either 1 2 3 15 (The cuts size followed by the profit) or 4 1 1 14

 

 Test case sample:

1st Line: the total number of cut with price

2nd Line: The Length of the cuts

3rd Line: The price of cuts

4th Line: The given length (n)

5th Line: the integer value (k)

Output:

The cut Length followed by the profit.

 

Example:

 

Input

5

1 2 3 4 5

2 5 8 10 11

6

3

Output

1 2 3 15
*/
#include <iostream>
#include <vector>
using namespace std;
#define INT_MIN -1000;
int maxRevenueRecursive(vector<int>& lengths, vector<int>& cost, int n, int k);
int main()
{
    int numberOfrodplace;
    cin >> numberOfrodplace;
    vector<int> rodLengths(numberOfrodplace);
    vector<int> cost(numberOfrodplace);
    for (int i = 0; i < numberOfrodplace; i++) 
    {
        cin >> rodLengths[i];
    }
    for (int i = 0; i < numberOfrodplace; i++) 
    {
        cin >> cost[i];
    }
    int rodLength, numberOfPieces;
    cin >> rodLength >> numberOfPieces;
    int maxProfit = maxRevenueRecursive(rodLengths, cost, rodLength, numberOfPieces);
    vector<int> rodplace;
    for(int i=0;i<numberOfPieces;i++)
    {
        int revenue = cost[i] + maxRevenueRecursive(rodLengths, cost, rodLength - rodLengths[i], numberOfPieces - 1);
        if ( revenue > maxProfit )
        {
            maxProfit = revenue;
            rodplace.clear();
            rodplace.push_back(i);
        } 
        else if (revenue == maxProfit)
        {
            rodplace.push_back(i);
        }
    }
    for (int i = 0; i < rodplace.size() - 1; i++) 
    {
        cout << rodplace[i] + 1 << " ";
    }
    cout << rodplace.back() + 1 << " "<< maxProfit << endl;
    return 0;
}
int maxRevenueRecursive(vector<int>& lengths, vector<int>& cost, int n, int k) 
{
    if (k == 0) 
    {
        return 0;
    }
    if (n <= 0)
       return INT_MIN;
    int maxProfit = INT_MIN;
    for (int m = 1; m <= n; m++) 
    {
        int revenue = cost[m - 1] + maxRevenueRecursive(lengths, cost, n - m, k - 1);
        if (revenue > maxProfit) 
        {
            maxProfit = revenue;
        }
    }
    return maxProfit;
}

// A. Competitive Programmer
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Bob is a competitive programmer. He wants to become red, and for that he needs a strict training regime. He went to the annual meeting of grandmasters and asked n of them how much effort they needed to reach red.

// "Oh, I just spent xi hours solving problems", said the i-th of them.

// Bob wants to train his math skills, so for each answer he wrote down the number of minutes (60⋅xi), thanked the grandmasters and went home. Bob could write numbers with leading zeroes — for example, if some grandmaster answered that he had spent 2 hours, Bob could write 000120 instead of 120.

// Alice wanted to tease Bob and so she took the numbers Bob wrote down, and for each of them she did one of the following independently:

// rearranged its digits, or
// wrote a random number.
// This way, Alice generated n numbers, denoted y1, ..., yn.

// For each of the numbers, help Bob determine whether yi can be a permutation of a number divisible by 60 (possibly with leading zeroes).

// Input
// The first line contains a single integer n (1≤n≤418) — the number of grandmasters Bob asked.

// Then n lines follow, the i-th of which contains a single integer yi — the number that Alice wrote down.

// Each of these numbers has between 2 and 100 digits '0' through '9'. They can contain leading zeroes.

// Output
// Output n lines.

// For each i, output the following. If it is possible to rearrange the digits of yi such that the resulting number is divisible by 60, output "red" (quotes for clarity). Otherwise, output "cyan".

// Example
// inputCopy
// 6
// 603
// 006
// 205
// 228
// 1053
// 0000000000000000000000000000000000000000000000
// outputCopy
// red
// red
// cyan
// cyan
// cyan
// red
// Note
// In the first example, there is one rearrangement that yields a number divisible by 60, and that is 360.

// In the second example, there are two solutions. One is 060 and the second is 600.

// In the third example, there are 6 possible rearrangments: 025, 052, 205, 250, 502, 520. None of these numbers is divisible by 60.

// In the fourth example, there are 3 rearrangements: 228, 282, 822.

// In the fifth example, none of the 24 rearrangements result in a number divisible by 60.

// In the sixth example, note that 000…0 is a valid solution.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        char a[105];
        cin>>a;
        int cz=0,ce=0,sum=0;
        int l=strlen(a);
        for(int i=0;i<l;i++){
            int no = a[i]-'0';
            if(no==0){
                cz++;
            } 
            if(no%2==0){
                if(no==0 && cz>1){
                    ce++;
                }
                if(no!=0){
                    ce++;
                }
            }
            sum+=no;
            }
        if(cz>0 && ce>0 && sum%3==0){
            cout << "red" << endl;
        }
        else{
            cout << "cyan" << endl;
        }
    }
}


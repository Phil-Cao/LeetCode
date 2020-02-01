/*
 * @lc app=leetcode.cn id=326 lang=c
 *
 * [326] 3的幂
 */


bool isPowerOfThree(int n){
    if(n<1)
        return false;
    while(n%3==0)
    {
        n=n/3;
    }
    return n==1;
}




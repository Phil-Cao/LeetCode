/*
 * @lc app=leetcode.cn id=342 lang=c
 *
 * [342] 4的幂
 */


bool isPowerOfFour(int num){
    if(num<1||num&(num-1))
    {
        return false;
    }
    return num&0x55555555;
}




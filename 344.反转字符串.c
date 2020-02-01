/*
 * @lc app=leetcode.cn id=344 lang=c
 *
 * [344] 反转字符串
 */
 void swap(char * s, int i,int j)
 {
     char temp = s[i];
     s[i]=s[j];
     s[j]=temp;
 }


void reverseString(char* s, int sSize){
    int i=0;
    int j=sSize-1;
    while(i<j)
    {
        swap(s,i,j);
        i++;
        j--;
    }
}




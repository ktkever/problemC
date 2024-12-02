#include <stdio.h>
#include <string.h>

void makeAna(char *str,int size){
    char str1[size];
    strcpy(str1, str);
    for(int i = 0; i < size; i++)
        str[i] = str1[size-1-i];
}
int isAna(char *str,int size) {
    char originStr[size];
    strcpy(originStr,str);
    makeAna(str,size);
    if(strcmp(originStr,str)==0)
        return 1;
    else
        return 0;
}

int main() {
    char testStr[] = "hello,world!";
    int size = strlen(testStr);
    printf("original String: %s\n",testStr);
    makeAna(testStr,size);
    printf("anagram: %s\n",testStr);
    int res = isAna(testStr,size);
    if(res==1)
        printf("is Anagram");
    else
        printf("is not Anagram");
    
}
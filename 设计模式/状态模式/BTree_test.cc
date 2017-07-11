#include <iostream>  
#include <cstdlib>  
#include <ctime>  
#include "BTree.h"  
using namespace std;  
  
int main()  
{     
    char iKey[] = {'C','N','G','A','H','E','K','Q','M','F','W','L','T','Z','D','P','R','X','Y','S'};  
    char dKey[] = {'C','N','G','A','H','E','K','Q','M','F','W','L','T','Z','D','P','R','X','Y','S'};  
    int iSize = sizeof(iKey)/sizeof(char);  
    int dSize = sizeof(dKey)/sizeof(char);  
  
    int i;  
    BTree<char> btree(5, NULL);     
    cout<<"----------插入测试----------"<<endl;  
    for(i = 0; i < iSize; i++) //插入测试  
    {  
        cout<<"插入"<<iKey[i]<<"以后"<<endl;  
        btree.Insert(iKey[i]);  
        btree.PrintBTree();  
    }  
    cout<<"----------删除测试----------"<<endl;  
    for(i = 0; i < dSize; i++) //删除测试  
    {  
        cout<<"删除"<<dKey[i]<<"以后"<<endl;  
        btree.Delete(dKey[i]);  
        btree.PrintBTree();  
    }  
    return 0;  
}  
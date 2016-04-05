/*************************************************************************
	> File Name: queue.cpp
	> Author: zyh_helen
	> Mail: zyh_helen@yeah.net 
	> Created Time: Tue 05 Apr 2016 02:44:50 AM EDT
 ************************************************************************/

#include"queue.h"

int main()
{
	Queue q;
	for(int i = 0;i<10;++i){
		q.Push(i);
	}

	while(!q.IsEmpty()){
		cout<<q.Top()<<" ";
		q.Pop();
	}
	return 0;
}

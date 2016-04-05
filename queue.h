/*************************************************************************
	> File Name: queue.h
	> Author: zyh_helen
	> Mail: zyh_helen@yeah.net 
	> Created Time: Tue 05 Apr 2016 02:44:57 AM EDT
 ************************************************************************/

/*
 *    stack_assist（辅助空间：调整数据顺序）
 *    stack_actual（实际空间：用于数据的pop/push）
 *    插入时操作：
 *    1：实际空间--> 辅助空间
 *    2：新数据  --> 实际空间
 *    3：辅助空间-->实际空间
 *
 * */
#include<stack>
#include<iostream>
using namespace std;

class Queue{
public:
	void Push(const int val){
		int tmp;
		//实际空间--->辅助空间
		while(!stack_actual.empty()){
			tmp = stack_actual.top();
			stack_actual.pop();
			stack_assist.push(tmp);
		}

		//新数据  --->实际空间
		stack_actual.push(val);
		//辅助空间--->实际空间
		while(!stack_assist.empty()){
			tmp = stack_assist.top();
			stack_assist.pop();
			stack_actual.push(tmp);
		}
	}

	void Pop(){
		return stack_actual.pop();
	}

	int Top(){
		return stack_actual.top();
	}

	bool IsEmpty()const{
		return stack_actual.empty();
	}

private:
	stack<int> stack_assist;
	stack<int> stack_actual;
};


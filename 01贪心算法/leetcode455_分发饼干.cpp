#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {

public :
	static int findContentChildren(vector<int>& children, vector <int>& cookies) {
		sort(children.begin(), children.end());
		sort(cookies.begin(), cookies.end());
		int child = 0, cookie = 0;
		// 思想：遍历每一块饼干，看它是否符合当前最小胃口的同学。
		// 如果符合，则将当前饼干分配给他，饼干和小孩均往前移动
		// 如果不符合，则将当前饼干往前移动，看下一块饼干能否符合当前最小胃口的同学
		while ((child < children.size()) && (cookie < cookies.size()))// 当孩子胃口或者饼干尺寸都还没有遍历结束，可以为小孩子继续分配
		{
			if(children.at(child)<=cookies.at(cookie))  //当前孩子胃口小于或等于当前饼干的尺寸
				child++;
			cookie++;
		}
		return child;
	}	
};

int main() {
	vector<int> children;
	children.push_back(1);
	children.push_back(2);

	vector<int> cookies;
	cookies.push_back(1);
	cookies.push_back(2);
	cookies.push_back(3);

	int num = Solution::findContentChildren(children, cookies);
	cout << num << endl;
	system("pause");
	return 0;
}


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
		// ˼�룺����ÿһ����ɣ������Ƿ���ϵ�ǰ��Сθ�ڵ�ͬѧ��
		// ������ϣ��򽫵�ǰ���ɷ�����������ɺ�С������ǰ�ƶ�
		// ��������ϣ��򽫵�ǰ������ǰ�ƶ�������һ������ܷ���ϵ�ǰ��Сθ�ڵ�ͬѧ
		while ((child < children.size()) && (cookie < cookies.size()))// ������θ�ڻ��߱��ɳߴ綼��û�б�������������ΪС���Ӽ�������
		{
			if(children.at(child)<=cookies.at(cookie))  //��ǰ����θ��С�ڻ���ڵ�ǰ���ɵĳߴ�
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


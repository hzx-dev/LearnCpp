#include<iostream>
#include<string>
using namespace std;

void all_lower(string &str)
{
	int len = str.size();
	for(int i = 0; i< len; i++)
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return;
}



int main()
{
	string s, ss;
	int cnt = 0, inx;
	getline(cin, s);
	getline(cin, ss);
	all_lower(s);
	all_lower(ss);
	s = ' ' + s + ' ';
	ss = ' ' + ss + ' ';
	int pos = ss.find(s);
	if(pos != -1)
	{
		pos = 0; // 从零开始查找
		while(true)
		{
			inx = ss.find(s, pos);
			if(inx != -1)
			{
				cnt ++;
				pos = inx + s.size() - 1;
			}
			else break;			
		}
		cout << cnt << ' ' << ss.find(s);
		
	}
	else cout << -1;
}
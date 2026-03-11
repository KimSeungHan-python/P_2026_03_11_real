#include <iostream>
#include <vector>

using namespace std;

void charchange(char* c, char origin, char change)//void func(char s[])는 void func(char* s)와 동일한 의미로 해석됩니다.
{
	int j = 0;
	while (c[j] != '\0' && j < 100)
	{
		if (c[j] == origin)
		{
			c[j] = change;
		}
		j++;
	}
	cout << c << endl;
}

void charcount(char c[])
{
	int count = 0;
	while (c[count] != '\0' && count < 100)
	{
		count++;
	}
	cout << count << endl;
}

void charfind(char c[], char origin)
{
	int k = 0;
	while (c[k] != '\0' && k < 100)
	{
		if (c[k] == origin)
		{
			cout << "입력 단어: " << origin << " 인덱스: " << k << endl;
		}
		k++;
	}
}


int main()
{
	char c[100];
	char s1;
	char s2;
	cout << "문자열을 입력해주세요: ";
	cin.getline(c, 100); // 공백이 있음

	cout << endl;
	cout << "배열에 있는 글자: " << endl;
	cin >> s1;
	cout << "바꿀 글자: " << endl;
	cin >> s2;
	charcount(c);
	charchange(c, s1, s2);

	char s3;
	cout << "찾을 글자: ";
	cin >> s3;
	charfind(c, s3);
}
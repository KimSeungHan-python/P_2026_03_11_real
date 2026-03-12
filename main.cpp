#include <iostream>
#include <vector>
#include <random>

using namespace std;

//void charchange(char* c, char origin, char change)//void func(char s[])는 void func(char* s)와 동일한 의미로 해석됩니다.
//{
//	int j = 0;
//	while (c[j] != '\0' && j < 100)
//	{
//		if (c[j] == origin)
//		{
//			c[j] = change;
//		}
//		j++;
//	}
//	cout << c << endl;
//}
//
//void charcount(char c[])
//{
//	int count = 0;
//	while (c[count] != '\0' && count < 100)
//	{
//		count++;
//	}
//	cout << count << endl;
//}
//
//void charfind(char c[], char origin)
//{
//	int k = 0;
//	while (c[k] != '\0' && k < 100)
//	{
//		if (c[k] == origin)
//		{
//			cout << "입력 단어: " << origin << " 인덱스: " << k << endl;
//		}
//		k++;
//	}
//}

//void Allocate()
//{
//	int Num1;
//	cin >> Num1;
//
//	int* P = new int[Num1];
//	for (int i = 0; i < Num1; i++)
//	{
//		P[i] = i + 1;
//		cout << (P+i) << "의 값: "<< P[i] << endl;
//	}
//
//	delete[] P;
//	P = nullptr;
//}
//
//int main()
//{
//	//char c[100];
////char s1;
////char s2;
////cout << "문자열을 입력해주세요: ";
////cin.getline(c, 100); // 공백이 있음
//
////cout << endl;
////cout << "배열에 있는 글자: " << endl;
////cin >> s1;
////cout << "바꿀 글자: " << endl;
////cin >> s2;
////charcount(c);
////charchange(c, s1, s2);
//
////char s3;
////cout << "찾을 글자: ";
////cin >> s3;
////charfind(c, s3);
//
//
////Allocate();
//}

//void PickBall(int* Ptr, int Size)
//{
//	srand(unsigned(time(NULL)));
//	for (int i = 0; i < Size; i++)
//	{
//		Ptr[i] = i + 1;
//	}
//	// Swap
//	int temp;
//	for (int i = 0; i < Size; i++)
//	{
//		temp = Ptr[i];
//		Ptr[i] = Ptr[(rand() % (Size))];
//		Ptr[(rand() % (Size))] = Ptr[i];// Shuffle 해줌
//	}
//
//	for (int i = 0; i < 6; i++)
//	{
//		cout << Ptr[i] << endl;
//	}
//
//}
//
//
















void DrawMap(char* c, int size) // draw map and player start position
{
	for (int i = 0; i < size * size; i++) // 배열 채워줌
	{
		if (i / size == 0) //위에칸 채우기
		{
			c[i] = '*';
		}
		else if ((i / size) >= size - 1)
		{
			c[i] = '*';
		}
		else if (i % size == 0)//왼쪽 칸 채우기
		{
			c[i] = '*';
		}
		else if ((i + 1) % size == 0)// 오른쪽 칸 채우기 
		{
			c[i] = '*';
		}
		else
		{
			c[i] = ' ';
		}
	}
	c[size + 1] = 'p'; // 플레이어 시작 위치
}

void Playing(char* c, int size)// 출력 처리
{
	//출력 처리
	for (int i = 0; i < size * size; i++)
	{
		cout << c[i];
		if ((i + 1) % size == 0)
		{
			cout << endl;
		}
	}
}

void Move(char* c, int size) // 키 입력 받고 움직임 처리
{
	char s = ' ';
	int currentposition = size + 1;
	while (cin >> s) // 입력이 있으면 계속 진행
	{
		if (s == 'w') // 위로 움직임
		{
			if (c[currentposition - size] == '*')
			{
				cout << "위로 못감" << endl;
			}
			else
			{
				c[currentposition] = ' ';
				currentposition -= size;
				c[currentposition] = 'p';
			}

		}
		else if (s == 's') //아래로 움직임
		{
			if (c[currentposition + size] == '*')
			{
				cout << "아래로 못감" << endl;
			}
			else
			{
				c[currentposition] = ' ';
				currentposition += size;
				c[currentposition] = 'p';
			}
		}
		else if (s == 'a')
		{
			if (c[currentposition - 1] == '*')
			{
				cout << "왼쪽으로 못감" << endl;
			}
			else
			{
				c[currentposition] = ' ';
				currentposition -= 1;
				c[currentposition] = 'p';
			}
		}
		else if (s == 'd')
		{
			if (c[currentposition + 1] == '*')
			{
				cout << "오른쪽로 못감" << endl;
			}
			else
			{
				c[currentposition] = ' ';
				currentposition += 1;
				c[currentposition] = 'p';
			}
		}
		else
		{
			cout << "다시 입력해주세요" << endl;
		}

		Playing(c, size);
	}
}






int main()
{
	//W,A,S,D로 움직임
	int n;
	cin >> n; // 11이면 0~10 11~21 22
	char* c = new char[n * n]; //10 100까지 나오면 0~9, 10~ 19 90 ~ 99
	DrawMap(c, n);
	Move(c, n);
}
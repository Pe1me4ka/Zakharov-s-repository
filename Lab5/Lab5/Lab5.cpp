#include <iostream>
#include <forward_list>

using namespace std;

//void push_front();	//добавить элемент в начало
void push_back();		//добавить элемент в конец
//void pop_front();		//удалить элемент из начала
void pop_back();		//удалить элемент из конца
void pop_element();		//удалить i-элемент списка
void isEmpty();			//проверка, пустой ли список
void getSize();			//получить размер списка

template <typename T>
void printList(forward_list<T> set)
{
	for (int n : set)
		cout << n << "\t";
	cout << endl;
}

int main()
{
	forward_list<int> num{ 1, 2, 3 };
	int i = 0;
	//push_front()
	num.push_front(2);
	printList(num);
	//push_back()
	auto iter = num.begin();
	while (iter != num.end())
	{
		i++;
		++iter;
	}
	int N;
	cin >> N;
	num.resize(i + 1, N);
	printList(num);
	return 0;
}
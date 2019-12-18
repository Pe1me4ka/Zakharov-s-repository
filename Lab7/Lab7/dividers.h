#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

class dividers
{

	friend int MaxDivSearch2(int, int);

private:

	struct Node {
		Node() : m_next(NULL) { }

		Node(const int& t) : m_t(t), m_next(NULL) { }

		int m_t;
		Node* m_next;
	};

	Node* m_tail;
	Node* m_head;

public:

	class Iterator {

	private:
		Node* m_node;

	public:
		Iterator(Node* node) : m_node(node) { }

		bool operator==(const Iterator& other) const {
			if (this == &other) {
				return true;
			}
			return m_node == other.m_node;
		}

		bool operator!=(const Iterator& other) const {
			return !operator==(other);
		}

		int operator*() const {
			if (m_node)
				return m_node->m_t;
			return int();
		}

		void operator++() {
			if (m_node)
				m_node = m_node->m_next;
		}
	};

	dividers(int x) {
		m_tail = NULL;
		m_head = NULL;
		if (x == 0) {
			cout << "There is no dividers for this number" << endl;
			return;
		}
		int i = 1;
		Node* node = new Node(i);
		m_tail = node;
		m_head = node;
		for (i = 2; i <= x; i++) {
			if (x % i == 0) {
				Node* node = new Node(i);
				m_tail->m_next = node;
				m_tail = node;
			}
		}
	}

	~dividers(){
		delete m_head;
		delete m_tail;
	}

	void erase() {
		delete m_head;
		delete m_tail;
		m_head = NULL;
		m_tail = NULL;
	}

	Iterator begin() const {
		return Iterator(m_head);
	}

	Iterator end() const {
		return Iterator(NULL);
	}

};

static int MaxDivSearch(int a, int b) {
	if ((a == 0) || (b == 0)) return 0;
	dividers div1(a), div2(b);
	int maxDiv = 1;
	for (auto elem : div1) {
		auto result = find_if(div1.begin(), div1.end(), [&elem](int x) {
			return elem == x;
			});
		if ((result != div1.end()) && (*result > maxDiv))
			maxDiv = *result;
	}
	return maxDiv;
}

static int MaxDivSearch2(int a, int b) {
	if ((a == 0) || (b == 0)) return 0;
	dividers div1(a), div2(b);
	dividers::Node* node = div2.m_head;
	int maxDiv = 1;
	int p;
	while(div2.m_head != NULL) {
		p = div2.m_head->m_t;
		auto result = find_if(div1.begin(), div1.end(), [&p](int x) {
			return p == x;
			});
		if ((result != div1.end()) && (*result > maxDiv))
			maxDiv = *result;
		div2.m_head = div2.m_head->m_next;
	}
	div2.m_head = node;
	return maxDiv;
}

static int DivAvg(int a) {
	dividers div(a);
	int Avg = 0, i = 0;
	int* p = &Avg, *it = &i;
	auto result = find_if(div.begin(), div.end(), [p, it](int x) {
		*p += x;
		(*it)++;
		return x != x; });
	return Avg / i;
}
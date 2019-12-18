//class dividers
//{
//private:
//
//	struct Node {
//		Node() : m_next(NULL) { }
//
//		Node(const int& t) : m_t(t), m_next(NULL) { }
//
//		int m_t;
//		Node* m_next;
//	};
//
//	Node* m_tail;
//	Node* m_head;
//
//public:
//
//	class Iterator {
//
//	private:
//		Node* m_node;
//
//	public:
//		Iterator(Node* node) : m_node(node) { }
//
//		bool operator==(const Iterator& other) const {
//			if (this == &other) {
//				return true;
//			}
//			return m_node == other.m_node;
//		}
//
//		bool operator!=(const Iterator& other) const {
//			return !operator==(other);
//		}
//
//		int operator*() const {
//			if (m_node)
//				return m_node->m_t;
//			return int();
//		}
//
//		void operator++() {
//			if (m_node)
//				m_node = m_node->m_next;
//		}
//	};
//
//	dividers(int x) {
//		delete m_tail;
//		delete m_head;
//		m_head = NULL;
//		m_tail = NULL;
//		if (x == 0) {
//			cout << "There is no dividers for this number" << endl;
//			return;
//		}
//		int i = 1;
//		Node* node = new Node(i);
//		m_tail = node;
//		m_head = node;
//		for (i = 2; i <= x / 2; i++) {
//			if (x % i == 0) {
//				Node* node = new Node(i);
//				m_tail->m_next = node;
//				m_tail = node;
//			}
//		}
//	}
//
//	Iterator begin() const {
//		return Iterator(m_head);
//	}
//
//	Iterator end() const {
//		return Iterator(NULL);
//	}
//
//};

//-------------------------------------------------------------------------------------------------


//class dividers
//{

	//friend int MaxDivSearch(int, int);

//private:
//
//	list<int> div;
//
//public:
//
//	dividers(int x) {
//		if (x == 0) {
//			cout << "There is no dividers" << endl;
//			return;
//		}
//		for (int i = 1; i <= x / 2; i++)
//			if (x % i == 0)
//				div.push_back(i);
//		div.push_back(x);
//	}
//
//	~dividers() {
//		div.clear();
//	}
//
//	void erase() {
//		div.clear();
//	}
//
//	list<int>::iterator begin() {
//		return div.begin();
//	}
//
//	list<int>::iterator end() {
//		return div.end();
//	}
//
//};
//
//static int MaxDivSearch(int a, int b) {
//	if ((a == 0) || (b == 0)) return 0;
//	dividers div1(a);
//	list<int>::iterator result;
//
//	return 1;
//}

//if ((a == 0) || (b == 0)) return 0;
//dividers div1(a), div2(b);
//auto iter = div2.end();
//--iter;
//list<int>::iterator result;
//for (iter; iter != div2.begin(); --iter) {
//	result = find_if(div1.begin(), div1.end(), [iter](int it) {
//		/*cout << "a = " << it << endl;
//		cout << "b = " << *iter << endl;*/
//		return it == *iter;
//		});
//	if (result != div1.end())
//		return *result;
//}
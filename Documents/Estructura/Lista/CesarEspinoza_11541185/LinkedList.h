

class LinkedList
{
	class Node{
	public:
		Object* data;
		Node* next;
		Node(Object* = NULL, Node* = NULL);
		~Node();
	};

public:
	LinkedList();
	~LinkedList();

	virtual bool insert(Object*, int);
	virtual Object* remove(int);
	virtual Object* first() const;
	virtual Object* last() const;
	virtual void clear();
	virtual int indexOf(Object*) const;
	virtual Object* get(int);
	virtual int Capacity() const;
	virtual bool isEmpty() const;
	virtual bool isFull() const ;
};
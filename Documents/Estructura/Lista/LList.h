#include "ADTList.h"
#include "Node.h"

class LList : public ADTList
{
	Node* head;
public:
	LList();
	LList(Object*);
	~LList();
	
	virtual bool insert(Object*, int);
	virtual Object* remove(int);
	virtual Object* first();
	virtual Object* last();
	virtual void clear();
	virtual int indexOf(Object*);
	virtual Object* get(int);
	virtual int Capacity() const;
	virtual bool isEmpty() const;
	virtual bool isFull() const;
};
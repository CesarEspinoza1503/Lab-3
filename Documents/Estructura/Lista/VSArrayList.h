#include "ADTList.h"

class VSArrayList : public ADTList
{
private:
	int current_capacity;
	int  delta;
	void resize();
	Object** array;
public:
	VSArrayList(int);
	VSArrayList(int, int);
	virtual ~VSArrayList();
	

	virtual bool insert(Object*, int) ;
	virtual Object* remove(int) ;
	virtual Object* first() const ;
	virtual Object* last() const;
	virtual void clear() ;
	virtual int indexOf(Object*) const;
	virtual Object* get(int);
	virtual int Capacity() const;
	virtual bool isEmpty() const;
	virtual bool isFull() const;
};
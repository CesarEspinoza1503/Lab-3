#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"
#include "Object.h"

class Tree : public Object
{
private:
	TreeNode* root;
public:
	Tree();
	~Tree();
	TreeNode* getRoot();
	void setRoot(TreeNode*);
	virtual string toString() const;
	virtual bool Equals(Object*) const; 
};

#endif
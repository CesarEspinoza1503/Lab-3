#ifndef TREENODE_H
#define TREENODE_H
#include "Object.h"

class TreeNode : public Object
{
protected:

	TreeNode* Father;
	Object* Data;
	TreeNode* leftSon;
	TreeNode* rightBrother;
public:
	TreeNode();
	TreeNode(Object*);//Sets Data
	TreeNode(Object*,TreeNode*,TreeNode*); //Sets Data, Father and leftson
	TreeNode(Object*,TreeNode*);//sets Data and Father
	TreeNode(Object*,TreeNode*,TreeNode*,TreeNode*); //Sets Data, Father, leftSon and the rightBrother
	~TreeNode();
	TreeNode* getFather();
	Object* getData();
	TreeNode* getLeftSon();
	TreeNode* getRightBrother();
	void setFather(TreeNode*);
	void setData(Object*);
	void setLeftSon(TreeNode*);
	void setRightBrother(TreeNode*);


	virtual string toString() const;
	virtual bool Equals(Object*) const; 
};



#endif
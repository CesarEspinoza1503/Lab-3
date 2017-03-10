#include "TreeNode.h"

TreeNode::TreeNode(){
	this->Father = NULL;
	this->leftSon = NULL;
	this->rightBrother = NULL;
}

TreeNode::TreeNode(Object* Data){
	this->Data = Data;
	this->Father = NULL;
	this->leftSon = NULL;
	this->rightBrother = NULL;
}

TreeNode::TreeNode(Object* Data,TreeNode* Father,TreeNode* leftSon, TreeNode* rightBrother){
	this->Data = Data;
	this->Father = Father;
	this->leftSon = leftSon;
	this->rightBrother = rightBrother;
}

TreeNode::TreeNode(Object* Data,TreeNode* Father,TreeNode* leftSon){
	this->Data = Data;
	this->Father = Father;
	this->leftSon = leftSon;
}

TreeNode::TreeNode(Object* Data,TreeNode* Father){
	this->Data = Data;
	this->Father = Father;
	this->rightBrother = NULL;
}

TreeNode* TreeNode::getFather(){
	return Father;
}

TreeNode* TreeNode::getLeftSon(){
	return leftSon;
}

Object* TreeNode::getData(){
	return Data;
}

TreeNode* TreeNode::getRightBrother(){
	return rightBrother;
}

void TreeNode::setFather(TreeNode* Father){
	this->Father = Father;
}

void TreeNode::setLeftSon(TreeNode* leftSon){
	this->leftSon = leftSon;
}

void TreeNode::setRightBrother(TreeNode* rightBrother){
	this->rightBrother = rightBrother;
}
void TreeNode::setData(Object* Data){
	this->Data = Data;
}

TreeNode::~TreeNode(){

}

string TreeNode::toString() const{
	stringstream ss;
	ss << Data->toString();
	return ss.str();
}

bool TreeNode::Equals(Object* other) const{
	TreeNode* temp = dynamic_cast<TreeNode*>(other);
	return temp->getData() == Data;
}
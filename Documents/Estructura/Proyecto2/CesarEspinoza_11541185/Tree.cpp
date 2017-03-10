#include "Tree.h"

Tree::Tree(){
	root = NULL;
}


TreeNode* Tree::getRoot(){
	return root;
}

void Tree::setRoot(TreeNode* root){
	this->root = root;
}


string Tree::toString() const{
	stringstream ss;
	ss << root->toString();
	return ss.str();
}

bool Tree::Equals(Object* other) const{
	Tree* temp = dynamic_cast<Tree*>(other);
	return other == this;
}

Tree::~Tree(){

}
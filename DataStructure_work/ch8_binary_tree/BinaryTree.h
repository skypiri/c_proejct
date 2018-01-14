/*
 * BinaryTree.h
 *
 *  Created on: 2018. 1. 14.
 *      Author: skypiri
 */

#ifndef BINARYTREE_H_
#define BINARYTREE_H_

typedef int BTData;

typedef struct _bTreeNode {
	BTData data;
	struct _bTreeNode* left;
	struct _bTreeNode* right;
}BTreeNode;

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);

void MakeLeftSubTree(BTreeNode* bt, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* bt, BTreeNode* sub);


#endif /* BINARYTREE_H_ */

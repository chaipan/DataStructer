/*
	���Ա�����ʽ�洢�ṹ 
*/
#include <stdlib.h>
#include <stdio.h>
typedef int ElemType;

typedef struct Node{
	ElemType data;
	struct Node *next;	
}LinkList, Node;

//�󳤶�
int Length(LinkList *PtrL){
	int i = 0;
	LinkList *p = PtrL;
	while( p ){
		i++;
		p = p->next;
	}
	return i;
} 

LinkList *Init(){
	int i = 0;
	//ͷ��� 
	Node *head = (Node *)malloc(sizeof(Node));
	Node *p, *q;
	p = head;
	for(i=1; i<10; i++){
		q = (Node*)malloc(sizeof(Node));
		q->next = NULL;
		q->data = i;
		p->next = q;
		p = q;
	} 
	//����10����� 
	return head;
}

//��������
void PrintList(LinkList *PtrL){
	LinkList *p = PtrL->next;
	while( p ){
		printf("%d\n",p->data);
		p = p->next;
	}
}

//����Ų���
LinkList *FindKth(int K, LinkList *PtrL){
	int i = 0;
	LinkList *p = PtrL;
	while(p && i!=K){
		p = p->next;
		i++;
	}
	if(i < K){
		printf("�������Ȳ���");
		return NULL; 
	}else return p;
} 

//��ֵ����
LinkList *Find(ELemType e, LinkList *PtrL){
	LinkList *p = PtrL->next;
	if(p && p->data!=e ){
		p = p->next;
	}
	if(p->data == e){
		return p;
	}else{
		printf("û�ҵ�"); 
		return NULL;
	}
} 

//����ڵ�
void Insert(ElemType e, LinkList *PtrL){
	
}


int main(){
	LinkList *L = Init();
	PrintList(L);
	Node *node1 = FindKth(1, L);
	Node *node2 = FindKth(2, L);
	Node *node3 = FindKth(3, L);
	printf("1%d\n",node1->data);
	printf("2%d\n",node2->data);
	printf("3%d\n",node3->data);
	return 0;
}
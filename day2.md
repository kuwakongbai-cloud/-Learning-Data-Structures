# 链表

链表结构体
```c
typedef int ElemType;

typedef struct node{
    ElemType data;
    struct node *next;
}Node;
```

单链表初始化
```c
Node* initList(){
    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    return head;
}
```

单链表-头插法
```c
int insertHEad(Node* L,ElemType e){
    Node *p = (Node*)malloc(sizeof(Node));
    p->data = e;
    p->next = L->next;
    L->next = p;
}
```

单链表-遍历
```c
void listNode(Node* L){
    Node *p = L->next;
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
    printf("\n")
}
```

单链表-尾插法
```c
Node* insertTail(Node *tail,ElemType e){
    Node *p = (Node*)maollc(sizeof(Node));
    p->data = e;
    tail->next =p;
    p->next = NULL;
    return p;
}
```

单链表-在指定位置插入数据
```c
int insertNode(Node *L,int pos,ElemType e){
    Node *p = L;
    while(i < pos-1){
        p = p->next;
        i++;
        if(p == NULL){
            return 0;
        }
    }
    Node *q = (Node*)malloc(sizeof(Node));
    q->data = e;
    q->next = p->next;
    p->next = q;
    return 1;
}
```

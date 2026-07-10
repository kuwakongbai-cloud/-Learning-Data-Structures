## ADT
ADT-对内隐藏数据、对外暴露接口
```text
//ADT思想如何设计一台电视机
ADT 电视机{
    打开电视机；
    关闭电视机；
    调节电视机音量；
    换台；
}
```
其实更像是一个函数为了实现某种功能的集合

---

# 线性表
**定义：** 由n(>=0)个数据特性相同的元素构成的有限序列
`个人感觉定义比较像数组`
对于非空的线性表或者线性结构，其特点是：
1. **存在唯一的一个被称作“第一个”的数据元素**
2. **存在唯一的一个被称作“最后一个”的数据元素**
3. **除第一个元素外，结构中每一个数据元素都均只有一个前驱 `前一个元素`**
4. **除最后一个元素外，结构中的每个数据元素均只有一个后继**

## 顺序表
用一组连续的内存单元依次存储线性表的各个元素，也就是说，逻辑上相邻的元素，实际的物理存储空间也是连续的。
``` c
#define MAXSIZE = 100
typedef int ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SeqList;
```
|a1|a2|…|an|…|…|
|[0]|[1]| |[n-1]| |[MAXSIZE-1]|
顺序表
```c
#define MAXSIZE = 100
typedef int ElemType;
typedef struct{
    ElemType data[MAXSIZE];
    int length;
}SeqList;//声明顺序表
void initList(SeqList *L){
    L->length = 0;
}//初始化顺序表
SeqList* initList(Seqlist *L){
    SeqList *L = (SeqList*)malloc(sizeof(SeqList));
    L->data = (ElemType*)malloc(sizeof(ElemType)*MAXSIZE);
    L->length = 0;
    return L;
}//动态内存分配+初始化（别忘了free）

main(int argc, char* const argv[]){
    SeqList.list;
    initList(&list);
    printf("初始化成功，目前长度占用%d\n",list.length);
    printf("目前占用内存zu字节\n", sizeof(list.data));
return 0;
}//声明顺序表并初始化

int appendElem(SeqList *L,ElemType e){
    if(L->length >= MAXSIZE){
        printf("顺序表已满\n");
        return 0;
    }
    L->data[L->length] = e;
    L->length++;
    return 1;
}//在尾部添加元素

void listElem(SeqList *L){
    for(int i=0;i<L->Length;i++){
        printf("%d",L->data[i]);
    }
    printf("\n");
}//遍历顺序表

int insertElem(SeqList *L,int pos,ElemType e){
    if(pos <= L->length){
        for(int i=L->length-1;i>=pos-1;i--){
            L->data[i+1]=L->data[i];
        }
        L->data[pos-1] = e;
        L->length++;
    }
    return 1;
}//在顺序表中插入元素

int delateElem(SeqList *L,int pos,ElemType *e){
    *e = L->data[pos-1];
    if(pos<L->length){
        for(int i=pos;i<L->length;i++){
            L->data[i-1] = L->data[i];
        }
    }
    L->length--;
    return 1;
}//删除指定元素

int findElem(SeqList *L,ElemType e){
    for(int i=0;i<L->length;i++){
        if(L->data[i] == e){
            return i+1;
        }
    }
    return 0;
}//查找顺序表中元素
```

#include <stdio.h>
#include <stdlib.h>

/* 
InitStack(s):初始化，建立空栈
StackEmpty(s):检测是否为空栈，若空返回1，否则返回0
GetTop(s, &e):获取栈顶元素
Push(s, e):入栈
Pop(s, &e):出栈
StackLength(s):获取栈的长度
CloseStack(s):关闭栈
*/

#define StackSize 100
typedef struct{
    int Number;
    char name[50];
}DataType;//数据类型

typedef struct {
    DataType stack[StackSize];
    int top;
}SeqStack;//定义栈
void InitStack(SeqStack *s){
    s->top = -1;//栈顶指针设为0；
}
int StackEmpty(SeqStack *s){
    if(s->top == -1){
        return 1;
    }else{
        return 0;
    }
}//检测栈空
int GetTop(SeqStack s,DataType *e){
    if(s.top == -1){
        return 0;
    }else{
        *e = s.stack[s.top];
        return 1;
    }
}//获得顶栈
int PushStack(SeqStack *s,DataType e){
    if(s->top >= StackSize){
        printf("栈满，无法入栈\n");
        return 0;
    }
    else{
        s->top++;//栈顶指针加1
        s->stack[s->top]=e;//e入栈
        return 1;
        }
    }//入栈
int PopStack(SeqStack *s,DataType *e){
    if(s->top == -1){
        printf("栈空，无法出栈\n");
        return 0;
    }
    else{
        *e = s->stack[s->top];//将栈顶元素赋值给e
        s->top--;//栈顶指针减1
        return 1;
    }
}//出栈
int StackLength(SeqStack s){
    return s.top+1;
}//计算栈的长度
void CloseStack(SeqStack *s){
    s->top = -1;
}//清楚栈

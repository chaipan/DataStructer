/*
	栈（Stack）是限制仅在表的一端进行插入和删除运算的线性表。
　　	(1)通常称插入、删除的这一端为栈顶（Top），另一端称为栈底（Bottom）。
　　	(2)当表中没有元素时称为空栈。
　　	(3)栈为后进先出（Last In First Out）的线性表，简称为LIFO表。
    栈的修改是按后进先出的原则进行。每次删除（退栈）的总是当前栈中"最新"的元素，即最后插入（进栈）的元素，
	而最先插入的是被放在栈的底部，要到最后才能删除。
	
	栈的基本运算： 
	（1）InitStack（S）
    　构造一个空栈S。
	（2）StackEmpty（S）
    　判栈空。若S为空栈，则返回TRUE，否则返回FALSE。
	（3）StackFull（S）
    　判栈满。若S为满栈，则返回TRUE，否则返回FALSE。
	注意：
　    该运算只适用于栈的顺序存储结构。
	（4）Push（S，x）
    　进栈。若栈S不满，则将元素x插入S的栈顶。
	（5）Pop（S）
    　退栈。若栈S非空，则将S的栈顶元素删去，并返回该元素。
	（6）StackTop（S）
    　取栈顶元素。若栈S非空，则返回栈顶元素，但不改变栈的状态。
*/
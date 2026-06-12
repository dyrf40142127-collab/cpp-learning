#include <iostream>
void Increment(int* value) {
    (*value)++;//如果写成*value++，就会先value++，再解引用，导致地址偏移，解引用后的变量不是对应的变量值
}
void Increment1(int& value) {
    value++;
}

int main()
{
    int var = 8;
    void* ptr = &var;//void* ptr,void的意思是不管返回数据的类型，ptr中存储的是var的地址，
    //var这个地址所指向的内存中存有数据,但是解引用时不能使用void，因为编译器不知道写入的数据是什么类型
    std::cout << "Hello World!\n";
    //*ptr=2就是错误操作
    char* hld = new char[8];//堆内存，使用完不会自动删除，需要用delete删除
    delete[] hld;
    int b = 5;
    int& reference = b;//reference不存在实际的内存，指针需要内存空间来存储地址，reference更像是别名,reference的地址和b的地址是相同的

}



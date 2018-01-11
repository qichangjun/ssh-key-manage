//  Charpter 5 循环和关系表达式
//  myNote.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;      //create a counter
    for (i = 0; i < 5; i++){  //这里i<5得出bool型，为true时继续执行
        cout << "C++ knows loops. \n";
    }
    /** for循环组成部分
     * for (initialization;test-expression;update-expression)
     *  body
     * C++语法将整个for看作一条语句－－虽然循环体可以包含多条语句（包含多条
     * 语句时，需要使用符合语句或代码块）。
     * test-expression决定循环是否执行。值不只限制为真或假。可以使用任意表达式
     * C++将其结果枪支转换为bool型。0转为false,非0转为true.
     */
    int limit;
    cin >> limit;
    for (i = limit; i; i--)  //循环一直到i减到0为止
        cout << " i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";

    //C++常用的方式是，再for和括号之间加上一个空格，省略函数名和括号之间的空格
    //以这种方式避免for循环和函数执行混淆

    //C++可以编写下面这样的语句:
    int maids;
    int cooks;
    maids = (cooks = 4) * 3; //但C++不鼓励这样赋值
    // x = y = z =0 //这种编写也是允许的。
    int x;
    cout << "The expression x = 100 has the value";
    cout << (x = 100) << endl; //此时x已经被赋值为100
    cout << "The expression x < 3 has the value";
    cout << (x < 3) << endl; //0

    cout.setf(ios_base::boolalpha); //新的C++特性
    cout << "The expression x < 3 has the value";
    cout << (x < 3) << endl; //false
    //cout在显示前，将表达式转化为int,但cout.setf(ios_base::boolalpha)函数
    //调用设置了一个标记，命令cout显示true,false

    //表达式和语句的区别在于 ';'
 
    //用for循环计算并存储前16个阶乘
    const int ArSize = 16;
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i< ArSize;i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i< ArSize;i++)
        cout << i << "! = " << factorials[i] << endl;

    //使用for循环访问字符串
    cout << "Enter a word";
    string word;
    cin >> word;
    for (i = word.size() - 1; i >= 0; i--)
        cout << word[i];

    //递增／递减运算符和指针
    double arr[5] = {21.1,32.0,32.4,24.1,17.4};
    double * pt = arr; //pt point at arr[0];
    ++pt; //point at arr[1]
    
    int k = 5;
    k += 3; //k set to 8
    int * pa = new int [10];
    pa[4] = 12; //12
    pa[4] += 6; //18
    *(pa + 4) += 7; //pa[4] set to 25
    pa += 2; //pa point to pa[2]
    return 0;
}


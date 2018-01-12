//  Charpter 5 循环和关系表达式
//  myNote.cpp

#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
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

    // //递增／递减运算符和指针
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

    //语句快中申明变量
    int num = 20;  //original num
    {
        cout << num << endl; //original num
        int num =100;       //new num
        cout << num << endl; //use new num
    }
    cout << num <<endl; //original num

    //将数组中的字符顺序反转
    cout << "Enter a word";
    cin >> word;
    char temp;
    int j;
    for (i = 0,j = word.size() - 1; i < j; --j,++i) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";

    //C++可以直接对字符进行++,以下可以遍历出A-Z字符
    char ch;
    for (ch = 'a';ch<='z';ch++)
        cout << ch;

    char compstrWords[5] = "?ate";
    for (ch = 'a';strcmp(compstrWords,"mate");ch++)
    {
        cout << compstrWords << endl;
        compstrWords[0] = ch;
    }
    cout << "word is " << compstrWords << endl;

    //while循环
    //while (test-condition)
    //  body

    const int ArSize = 20;
    char name[ArSize];
    cout << "Your first name,please";
    cin >> name;
    cout << "Here is your name:\n";
    i = 0;
    while (name[i] != '\0') //可以这样修改: while(name[i])
    {
        cout << name[i] << ":" << int (name[i]) << endl;
        i++;
    }

    /**
     * for 与 while
     * for (init-expression;test-expression;update-expression)
     * {
     *    statement(s)
     * }
     * 可以改写成这样:
     * init-expression
     * while(test-expression)
     * {
     *  statement(s);
     *  pdate-expression
     * }
     * 由于for循环和while循环几乎是等效的，因此使用哪个知识风格上的问题，它们之间存在三个差别
     * 1.for循环中省略了测试条件时，将任务条件问true
     * 2.在for循环中，可以使用初始化语句声明一个局部变量，但在while中不能这样做
     * 3.如果循环体中包括continue语句，情况将会不同
     * 通常在无法遇险知道循环将执行的次数时，使用while循环
    */

    //利用clock()和头文件ctime来创建延迟循环
    cout << "Enter the delay time,in seconds";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "done \a\n";

    /** 类型别名
    * C++为类型建立别名的方式有两种，一种是使用预处理器
    * #define  BYTE char //preprocessor replaces BYTE with char
    * 这样，预处理器在编译程序时使用char替换所有BYTE,从而使BYTE成为char的别名
    * 第二种方式是使用C++关键字typedef来创建别名
    * typedef char byte;
    * typedef typeName aliasName;
    * 要将byte_pointer成为char指针的别名，可将其声明为char指针，再在前面加上typedef:
    * typedef char * byte_pointer;
    * 也可以使用#define,但声明一系列变量时，这种方法不适用，例如:
    * #define PLOAT_POINTER float *
    * FLOAT_POINTER pa,pb;
    * 预处理器置换将该声明转换为这样:
    * float * pa,pb;
    */
    
    
    return 0;
}


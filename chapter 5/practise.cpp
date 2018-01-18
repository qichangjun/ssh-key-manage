//  Charpter 5
//  practise.cpp


#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int main()
{
    /** 练习题2
     *  int i;
     *  for (i = 0;i < 5; i++)
     *      cout << i;
     *      cout << endl;
     *  打印内容 : 0,1,2,3,4
    **/

    /** 练习题3
     *  int j;
     *  for (j = 0; j < 11; j +=3)
     *      cout << j;
     *  cout << endl << j << endl;
     *  打印内容 : 0,3,6,9
     *              12
    **/

    /** 练习题4
     * int j = 5;
     * while ( ++j < 9 )
     *      cout << j++ << endl;
     * 打印内容 : 6,8
     * 
     **/ 

    /** 练习题6
     *  int i;
     *  for (i = 1; i <= 64; i = i*2)
     *      cout << i << endl;
    **/ 

    /** 练习题8
     *  下面的语句是否有效，原因？他完成的是什么工作?
     *  int x = (1,024);
     *  八进制为20,对x赋值20,
     *  int y;
     *  y = 1,024;
     *  有效，将y设置成1
    **/ 

    /** 编程题1
     *  输入两个整数，计算出两整数之间的所有整数的合，包括这两个数自己
    **/ 
    // int i,j,k;
    // cout << "输入第一个整数:";
    // cin >> i;
    // cout << "输入第二个整数";
    // cin >> j;
    // int sum = 0;
    // for (k = i; k <= j; k++){        
    //     sum += k;
    // }
    // cout << "两值之间所有整数合为:" << sum << endl;

    /** 编程题3
     *  计算每次用户输入的所有数的总和，以0结束
     **/ 
    // sum = 0;
    // do {
    //     cout << "输入一个整数,0为结束:";
    //     cin >> i;
    //     sum += i;
    //     cout << "合为:" << sum << endl;
    // }        
    // while (i != 0);

    /** 编程题4
     * 
     **/
    double Daphne = 100;
    double Cleo = 100; 
    int i = 1;
    do {
        Daphne += 0.10 * 100;
        Cleo += Cleo * 0.050;
        cout << "第" << i << "年的投资价值为:" << endl;
        cout << "Daphne:" << Daphne <<endl;
        cout << "Cleo:" << Cleo <<endl;
        i++;
    }
    while(Daphne > Cleo);
    cout << "第" << i - 1 << "年,Cleo将超过Daphne";
    return 0;
}



//
//  Charpter 4
//  practise.cpp
//
//  Created by zizaidian on 17/12/18.
//  Copyright (c) 2017年 test. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

int main()
{
//  创建vector数组 : vector<typename> vt(n_elem); n_elem : default=0
    vector<int> vi;
    int n;
    cin >> n;
    vector<double> vd(n);
//  创建array数组 : array<typename,n_elem> arr; n_elem不能是变量,array长度不能改变
    array<int,5> ai; 
    array<double,4>ad = {1.2,2.1,3.43,4.3};
//  练习题11
//  假设ted是一个double变量，请声明一个指向ted的指针，并使用该指针来显示ted的值
    double ted = 0.3;
    double * pd = &ted;
//  练习题12
//  假设treacle是一个包含10个元素的float数组，请声明一个指向treacle的第一个元素的执政,
//  并使用改指针来显示数组的第一个元素和最后一个元素
    float treacle[10];
    treacle[0] = 1.1;
    float * ps = treacle;
    cout << "treacle第一个元素指针" << ps << "值" << ps[0] <<endl;
    cout << "treacle最后一个元素指针" << ps + 9 << "值" << ps[9] <<endl;
//  练习题13
//  编写一段代码,要求用户输入一个正整数，然后创建一个动态的int数组，其中包含的元素树木
//  等于用户输入的值。首先使用new来完成这项任务，再使用vector对象来完成这项任务
    unsigned int num;
    cin >> num;
    int * dyn = new int [num];
    vector<int> vdyn(num);
//  练习题14  
//  打印出字符串的地址
    cout << (int *) "home of the jolly btyes"<<endl;
//  练习题15
//  编写一段代码，给问题8中描述的结构动态分配内存，再读取该结构的成员的值
    struct fish
    {
        char kind[20];
        int weight;
        float length;
    };
    fish * pole = new fish;
    cin >> pole->kind;
//  练习题17
//  声明一个vector和一个array,他们都包含10个string对象。指出所需的头文件，但不要使用using,
//  使用const来指定要包含的string对象数.
    const int num1 = 10;
    vector<string> vstr(num1);
    array<string, num1> astr;
    return 0;
}


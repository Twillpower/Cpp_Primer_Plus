#include <iostream>
#include "7_stock20.h"

const int STKS = 4;

int main()
{
    //  创建一个初始化对象的数组
    Stock stocks[STKS] = { 
        Stock ( "NanoSmart", 12, 20.0), 
        Stock ("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25), 
        Stock("Fleep Enterprises", 60, 6.5) 
    };

    std::cout << "Stock holdings: \n";
    int st;

    for (st = 0; st < STKS; st++)
        stocks[st].show();
    //将指针设置为第一个元素
    const Stock * top = &stocks[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);
    // 现在top指向最有价值的持股
    std::cout << "\nMost valuable holding: \n";
    top->show();
    
    return 0;
}


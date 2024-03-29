// stockOO.h - -股票类接口
// version 00 
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock
{
    private:
        std::string company;
        long shares;  // 持有的股票数量
        double share_val; // 每股的价格
        double total_val; // 股票总价格
        /* 其定义位千类声明中的函数都将自动成为内联函数
         * 类声明常将短小的成员函数作为内联函数，
         * 也可以在类声明之外定义成员函数， 并使其成为内联函数，只需在类实现部分中定
         * 义函数时使用 inline 限定符即可。
        */
        void set_tot(){ total_val = shares * share_val; }
    public:
        void acquire(const std::string & co, long n, double pr); // 获得股票
        void buy(long num, double price);  // 增持股票
        void sell(long num, double price);
        void update(double price);
        void show();
};  // 注意末尾的分号

#endif
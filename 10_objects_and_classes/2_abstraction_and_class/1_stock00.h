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
        void set_tot(){ total_val = shares * share_val; }
    public:
        void acquire(const std::string & co, long n, double pr); // 获得股票
        void buy(long num, double price);  // 增持股票
        void sell(long num, double price);
        void update(double price);
        void show();
};  // 注意末尾的分号

#endif
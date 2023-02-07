#include <iostream>
#include <cstring>

using namespace std;

struct widget {
    char brand[20]; 
    int type; 
    union id
    { 
        int id_num; 
        char id_char[20];
    }id_val; 
    // 匿名共用体 (anonymous union) 没有名称，其成员将成为位于相同地址处的变量
    // 由于共用体是匿名的，因此 id_num 和 id_char 被视为 prize 的两个成员，它们的地址相同，所以不需
    // 要中间标识符 id_val。
    union 
    {
        int id_num; 
        char id_char[20];
    };
    
};

int main(int argc, char const *argv[])
{  
    widget prize;

    prize.type = 1;
    cout << prize.type << endl;
    
    prize.id_val.id_num = 123;
    cout << prize.id_val.id_num << endl;

    strcpy(prize.id_val.id_char, "id_val.id_char");
    cout << prize.id_val.id_char << endl;

    prize.id_num = 456;
    cout << prize.id_num << endl;
    
    strcpy(prize.id_char, "id_char");
    cout << prize.id_char << endl;

    return 0;
}

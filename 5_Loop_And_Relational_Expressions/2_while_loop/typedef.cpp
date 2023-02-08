/* 建立别名
 * #define BYTE char
 * typedef char byte;
 * 
 * #define FLOAT_POINTER float*
 * FLOAT_POINTER pa, pb;
 * 预处理器置换将该声明转换为这样：
 * float* pa, pb;  // pa为指针，pb为float变量
 * 
 * typedef char* byte_pointer;
 * byte_pointer pa, pb;   // pa, pb都是指针
*/
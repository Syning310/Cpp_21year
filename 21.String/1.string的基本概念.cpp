


/*string是c++的风格的字符串，而string本质上是一个类
  string和char*的区别
    char*是一个指针
    string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器
    特点：
    string类内部封装了很多成员方法
    例如：查找find、拷贝copy、删除delete、替换replace、插入insert
    string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
*/
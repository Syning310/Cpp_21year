



/*
  简介：
    map中所有元素都是pair
    pair中第一个元素为key（键值），起到索引的作用；第二个元素为value（实值）
    所有元素都会根据元素的键值自动排序
  本质：
    map/multimap属于关联式容器，底层结构是用二叉树实现
  优点：
    可以根据key值快速找到value值
  map和multimap的区别：
    map不允许容器中有重复key值元素
    multimap允许容器中有重复key值元素

    可以把map的key（键值）理解为身份证号码，能够在十亿人中找到value（实值）翁金港；
    身份证号码不能够相同，但名字可以有相同
*/
``

![image-20231112101314618](C:\Users\86191\AppData\Roaming\Typora\typora-user-images\image-20231112101314618.png)

![image-20231112101212645](C:\Users\86191\AppData\Roaming\Typora\typora-user-images\image-20231112101212645.png)

什么时候添加作用域 Person::

类内函数的类外实现  Buiding::building(){}![image-20231112110752724](C:\Users\86191\AppData\Roaming\Typora\typora-user-images\image-20231112110752724.png)

全局函数做友元

`friend void goodGay(Building * building);`

类做友元

`friend class goodGay;`

 成员函数做友元

（注意goodGay:: 表示visit是goodGay类中的成员函数

`friend void goodGay::visit();`

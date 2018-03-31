# c_plus_plus_stdlib(C++标准库)
## 通用工具
### pair和tuple
#### pair
#### tuple
### Smart Pointer(智能指针)
#### shared_ptr
#### weak_ptr
#### unique_ptr
#### auto_ptr
### Type Trait和Type Utility
#### Type Trait
#### Reference Warpper(外覆器)
#### Function Type Warpper(外覆器)
### 辅助函数
#### std::min/std::max
#### std::swap
#### 增补的比较操作符(Comparison Operator)
### Class ratio的编译期分数运算
### Clock和Timer
#### chrono
#### duration
#### clock/timepoint
### C和POSIX提供的Date/Time函数
## 标准模版库
### STL组件(Component)
### 容器(Containner)
#### 序列式容器(Sequence Containner)
#### 关联式容器(Associative Containner)
#### 无序容器(Unordered Containner)
#### 关联式数组(Associative Array)
#### 其它容器
#### 容器适配器(Containner Adapter)
### 迭代器(Iterator)
####  关联式及无序容器
#### 迭代器种类
### 算法(Algorithm)
#### 区间(Range)
#### 多重区间(Multiple Ranges)
### 迭代器之适配器(Iterator Adapter)
#### 安插型迭代器(Insert Iterator)
#### 串流迭代器(Stream Iterator)
#### 反向迭代器(Reverse Iterator)
#### 搬移迭代器(Move Iterator)
### 用户自定义的泛型函数(User-Defined Generic Function)
### 更易型算法(Manipulating Algorithm)
#### 移除元素
#### 更易关联式和无序容器
#### 算法/成员函数
### 以函数作为算法的参数
#### 以函数作为算法实参的实例示范
#### 判断式(Predicate)
### 使用Lambda
### 函数对象(Function Object)
### 容的元素
### STL内部的错误和异常
### 扩展STL
## STL容器
### std::array
### std::vector
### std::deque
### std::list
### std::forward_list
### std::set
### std::multiset
### std::map
### std::multimap
### std::unorded_set
### std::unorded_multiset
### std::unorded_map
### std::unorded_multimap
## STL迭代器
### 迭代器种类
#### Output迭代器
#### Input迭代器
#### Forward迭代器
#### Bidirectional迭代器
#### Random-Access迭代器
#### Vector迭代器
### 迭代器相关辅助函数
#### adnvace()
#### next()/prev()
#### distance()
#### iter_swap()
### 迭代器适配器
#### Reverse迭代器
#### Insert迭代器
#### Stream迭代器
#### Move迭代器
### 迭代器特性(Iterator Trait)
### 用户自定义迭代器
## STL函数对象及Lambda
### 函数对象(Function Object)
### Function Object的Binder
### Lambda
## STL算法
### for_each算法
### 非更易性算法 (Nonmodifying Algorithm)
#### 元素计数
#### 最小值和最大值
#### 查找元素
#### 区间的比较
#### Predict用以检验区间
### 更易型算法 (Modfiying Algorithm)
#### 复制元素(Copying Element)
#### 搬移元素(Moving Element)
#### 转换和结合元素(Transforming and Combining Element)
#### 互换元素(Swapping Element)
#### 赋值(Assigning New Value)
#### 替换元素(Replacing Element)
### 移除型算法(Removing Algorithm)
#### 移除某些元素
#### 移除重复元素
### 变序性算法(Mutating Algorithm)
#### 反转元素次序(Reversing Elements)
#### 旋转元素(Rotating Elements)
#### 排列元素(Permuting Elements)
#### 打乱元素(Shuffing Elements)
#### 对元素向前搬(Moving Elements to the Front)
#### 划分为两个子区间(Partition into Two Subranges)
### 排序算法(Sorting Algorithm)
#### 对所有元素排序
#### 局部排序
#### 根据第n个元素排序
#### Heap算法
### 已序区间算法(Sorted-Range Algorithm)
#### 查找元素(Searhing Elements)
#### 合并元素(Merging Elements)
### 数据算法(Numeric Algorithm)
#### 运算后产生结果
#### 相对数列和绝对数列之间的转换
## 特殊容器
### 堆栈(std::stack)
### 队列(std::queue)
### 带优先级的队列(std::priority_queue)
### Containner Adapter
### Bitset(std::bitset)
## 字符串
### 创建、复制、销毁(Create,Copy and Destroy)
### 大小和容量(Size and Capacity)
### 元素访问(Element Access)
### 比较(Comparison)
### 更改内容(Modifier)
### 子字符串及字符串接合
### I/O操作
### 搜索和查找(Searching and Finding)
### 数值转换(Numeric Conversion)
## 正则表达式(Regex)
### Regex的匹配和查找接口(Match and Search Interface)
### 处理次表达式
### Regex Iterator
### Regex Token Iterator
### 用于替换的正则表达式
### Regex Flag
### Regex的异常
## 以Stream完成I/O
### I/O Stream的共通基础
### 基本Stream Class和其对象
### 标准的Stream操作符
### Stream的状态
### 标准I/O函数
### 操控器
### 格式化
### 国际化
### 文件访问
### 为String而设计的Stream Class
### 用户自定义类型之I/O操作符
### 连接Input和Output Stream
### Stream Buffer Class
### 效能(Perfomance)
## 国际化
### 字符编码和字符集
### 地域(Locale)
### Facet
## 数值
### 随机数及分布(Random Number and Distribution)
### 复数(Complex Number)
### 全局数值函数(Glboal Numberic Function)
### Valarray
## 并发
### 高级接口:async()/Future
### 低层接口:Thread/Promise
### 启动线程
#### async()
#### Future
#### Shared Future
#### std::promise
#### std::packaged_task
#### std::thread
#### Namespace this_thread
### 线程同步化与并发(Concurrency)问题
### Mutex/Lock
### Condition Variable(条件变量)
### Atomic
## 分配器(Allocator)

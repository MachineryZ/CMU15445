# Modern SQL

where 和 having 的区别：
1. where 是一个约束声明，在查询数据库的结果返回之前对数据库中的查询条件进行约束，即在结果返回之前起作用，且 where 之后不能使用聚合函数
2. having 是一个过滤声明，所谓过滤是查询数据库的结果返回之后进行过滤，即在结果返回之后起作用，并且 having 后面可以接聚合函数
3. 所谓聚合函数是对一组值进行计算并且返回单一值的函数：sum-求和，count-计数，max-最大值，avg-平均值
4. 执行的顺序不一样
    1. where 的搜索条件是在执行语句进行分组之前应用
    2. having 的搜索条件是在分组条件后执行

where 和 having 都可以使用的场景
~~~sql
#where
select goods_price, goods_name from sw_goods where goods_price > 100
#having
select goods_price, goods_name from sw_goods having goods_price > 100 
~~~

只可以用 where，不可以用 having 的情况
~~~sql
#where
select goods_name, goods_number from sw_goods where goods_price > 100
#having
select goods_name, goods_number from sw_goods having goods_price > 100
#报错，因为前面并没有筛选出 goods_price 字段
~~~

只可以用 having， 不可以用 where 情况
~~~sql
# having 
select goods_category_id, avg(goods_price) as ag from sw_goods group by goods_category having ag > 1000
# where
select goods_category_id, avg(goods_price) as ag from sw_goods where ag > 1000 group_by goods_category
# 报错 因为 from sw_goods 这张数据表里面没有 ag 这个字段
~~~
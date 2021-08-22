[toc]

# 老李终于开始学Javascript了



## js是什么？

js能让网页动起来，如果用nodejs的话可以让js变成后端语言，还可以用js来写Android&iOS app（套网页）。



## ECMA标准

![image-20210821232256483](D:\Github_Clone\KeXie_HARDWARE_Files\js\img\image-20210821232256483.png)



## 环境？

前端：任意浏览器，例如Chrome

后端：NodeJS



## *大纲*

![image-20210821232726149](D:\Github_Clone\KeXie_HARDWARE_Files\js\img\image-20210821232726149.png)

![image-20210821234538940](D:\Github_Clone\KeXie_HARDWARE_Files\js\img\image-20210821234349073.png)



## 创建变量&变量运算

```javascript
//let var const均可以创建变量 const为不可改变的变量

let myName = 'I am a human.'  //string字串
console.log(myName)

let score = 99.999 //number数字
console.log(myName)

let isFake = true //bool布尔值
let isFake = false //修改变量
console.log(isFake)

let bag = undefined //空变量
console.log(bag)

let bag2 = null //空变量 与上一种有区别
console.log(bag2)
```

*字符串相加：*

```java
let title1 = '提示信息：'
let title2 = '错误'
let title3 = '成功'
let word = title1 + title2
console.log(word)
```

*数字运算：*

```javascript
let num = 100
let num2 = 200
console.log(num / num2)
console.log(100 % 3)
// + - * / %
```



## 阵列&物件

<font color = orange>*阵列：Array  物件：Object* </font>

```javascript
let classA = ['小明','小白','小黄']
console.log('转学前：',classA)
classA.push('小黄')
console.log('第一个同学',classA[0])
console.log('转学后：',classA)
console.log(classA.length)  //显示阵列长度
//阵列

const card = {
    name: 'certain one',
    address: '中国',
    age: 999,
    comment: ['666','999','233'],
}
console.log('名字',card.name)
```



## 逻辑控制

```javascript
/*
if...else  switch...case

+ - * / % 　　              算数运算子
&& || ！ < > >= <=　=== !== 逻辑运算子
*/
let condition = 100 < 50 //比较运算符，结果返回为bool类型
console.log(condition)
if(condition)
{
    console.log('成功')
}
else
{
    console.log('错误')
}

stuA = 99
stuB= 100
let condition = stuA === stuB

if(score === 100){  //漏斗式if else
    console.log('好棒棒')
}
else if(score >= 60 && socre <= 99){
    console.log('小心点')
}
else{
    console.log('重修吧')
}

var key = 100
switch(key){
    case 100:
        console.log('100')
        break;
    case 99:
        console.log('99')
        break;
    default:
        console.log('233')
        break;
}
```


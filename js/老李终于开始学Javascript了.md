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



## 回圈控制

```javascript
for(let i = 0;i < 10; i++)
{
    console.log('i:',i)
}

let array = [0,1,2,3,4,5,6,7]
for(let k = 0;k < array.length;k++)
{
    console.log('k:',array[k])
    if(k === 2){
        k = 999
    }
}

const posts = [
    {
        name:'a'
        content: 'aa'
    },
    {
        name:'b'
        content:'bb'
    },
]

for(let j = 0;j < psots.length;j++)
{
    let post = posts[j]
    console.log(post.name)
    console.log(post[j])
}

let target = 10
let h = 0
while(target !== h)
{
    console.log(h)
    h++
}
```



## function函数

```javascript
function hello(){
    console.log('helloworld')
}

hello()

function add(num1,num2,num3){
    console.log(num1 + num2 - num3)
}

add(100,200,10)

function add(num1,num2,num3){
    //console.log(num1 + num2 - num3)
    let add = num1 + num2 - num3
    return add
}

console.log(add(100,200,300))

function createCard(initName)
{
    this.name = initName  //this表明当前这个函数  构造函数
}

const a1 = new createCard('小明0')
const a2 = new createCard('小明1')
const a3 = new createCard('小明2')  //通过this和new创建多个物件，在此this分别代表a1,a2,a3

console.log('a1')
console.log('a2')
console.log('a3')

function hello(){}
let hello = function(){}
let hello = () =>{}
```



## class & this

```javascript
class Card  //class命名要大写
{
    constructor(initName)
    {
        this.name = 'initName'
    }
}

const a1 = new Card("test")

console.log('a1')
console.log('a1.name')
```


### 学 Build Your Own Lisp 的代码和笔记
原地址:  http://www.buildyourownlisp.com/contents  
<br/>

这个教程教你学编译器  
用 C 语言写个 LISP 编译器,    
不过这里编译的 LISP 语法并不和正统 LISP 完全一致,   
作者根据教程的目的改了下语法  
 
 

<br/>
### 第4章 Read, Evaluate, Print
这章全是教你写命令行交互窗口  

<br/>
#### 代码1: 用 C 写个命令行交互窗口 (1.Prompt.c)
```c
cc -std=c99 -Wall 1.Prompt.c -o 1prompt
```

#### 代码2: 解决代码1无法用上下左右按键的问题 (2.Prompt.c)
```c
cc -std=c99 -Wall 2.Prompt.c -ledit -o 2prompt
```

#### 代码3: (命令行交互窗口)使用预处理器解决不同平台的编译问题 (3.Prompt.c)






<br/>
<br/>
### 第5章 




<br/>
<br/>
##### 环境
Win10, VMware, Ubuntu 14.04(x64)


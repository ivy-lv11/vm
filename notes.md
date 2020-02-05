查看物理cpu个数  
cat /proc/cpuinfo |grep "physical id" |sort |uniq|wc -l  
查看逻辑cpu的个数  
cat /proc/cpuinfo |grep "processor"|wc -l  
查看cpu是几核的  
cat /proc/cpuinfo |grep "cores"|uniq  

## strace用法  
strace cat foo  

重命名  
mv old-name new-name  

删除文件  
rm file-name

rmdir 只能删去空文件夹  

ln 为文件创建别名（指向同一个文件的指针），rm时减少引用次数，引用次数=0时删除文件。  

## stat用法  
stat file-name查看详细信息  

文件访问限制ls -l foo.txt  

## perf安装和使用
安装sudo get-apt install linux-perf  
使用sudo perf stat ./hello  
详见perf --help 

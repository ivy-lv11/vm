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

## bc安装和使用  
sudo apt-get install bc
输入bc进入,用ctrl+D/quit退出  
bc -l用数学库  
改变进制：obase=2;ibase=16;FFC1  
reset: obase=A;ibase=A  
逆波兰表示法：栈  

## RTFM/STFW  

## cp命令
拷贝，和ln不同，产生一个一模一样的文件，而不是link+1  
cp file backup  

## ls命令  
ls看文件夹下有哪些文件  
ls -a可以看到.和..，分别指向自己和父目录  
ls -l file-name 可以看到文件的访问权限等详细信息    
ls -i file-name可以看到文件inode  
  
* command-name options arguments *   
command-name,比如说cp,ls,mv,rm  
options,比如说-l,-a,-v,-h;--version,--help  
arguments,比如file-name  





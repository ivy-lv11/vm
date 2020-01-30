查看物理cpu个数
cat /proc/cpuinfo |grep "physical id" |sort |uniq|wc -l
查看逻辑cpu的个数
cat /proc/cpuinfo |grep "processor"|wc -l
查看cpu是几核的
cat /proc/cpuinfo |grep "cores"|uniq



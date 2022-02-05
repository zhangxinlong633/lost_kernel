/*

# example
malloc memory success

# fork 
fork success

# test_100_thread
process 1 on cpu 0
process 2 on cpu 1 
process 3 on cpu 2 
process 4 on cpu 3 
...

# 进程通信
进程1 发送 hello world.
进程2 收到 hello world.

# 复杂内存分配
分配1字节  X 10000
分配10字节 X 10000
分配100字节 X 10000
分配1000字节 X 10000
分配10000字节 X 10000

# 复杂进程内存场景测试
分配1万个进程，每个进程10个线程
每个线程分配随机大小内存, 范围：0-100KB.

# 文件系统接入
读写文件测试:
打开文件: /etc/resolve.conf
关闭文件: /etc/resolve.conf

# 网络系统接入
ping baidu.com

# web服务器测试
nginx started

web服务器测试为综合测试，系统测试完这个说明系统具备生产可用.

*/
# lost_kernel
lost kernel 是一个小内核，名字含义是被遗忘的内核，在这个系统里不会有多少人关心它。

## 架构
1. HAL
  硬件全部由HAL层来代表，无论硬件是RISC-V, 还是x86, arm.都需要注册HAL.
2. 任务调度管理
  提供类似Unix的任务管理功能
3. 内存管理
  提供对物理内存，虚拟内存的管理功能，提供基础库的malloc, free.

## 功能
1. 提供fork, pthread_create, signal等Unix线程相关的api访问接口。
2. 提供malloc, free相关的内存接口。
3. 提供一组基础的命令行，如: ls, cat等。

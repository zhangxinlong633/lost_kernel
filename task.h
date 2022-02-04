#ifndef __LOST_KERNEL_TASK_H
#define __LOST_KERNEL_TASK_H 

/**
* ring 是指特权，还是用户态的cpu ring.  不同的ring创建的是不同ring的任务.
*/
task_create(int ring, ... );


#endif

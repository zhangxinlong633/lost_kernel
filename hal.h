#ifndef __LOST_KERNEL_HAL_H
#define __LOST_KERNEL_HAL_H

struct lost_kernel_hal_ops {
  
};

int lost_kernel_hal_register(struct lost_kernel_hal_ops *ops);
int lost_kernel_hal_unregister(struct lost_kernel_hal_ops *ops);

#endif

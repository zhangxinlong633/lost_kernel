#ifndef __LOST_KERNEL_HAL_H
#define __LOST_KERNEL_HAL_H

struct lost_kernel_hal_ops {
  int switch_task(void *task_before, void *task_after);
  int timer(void *data);
  void *phys_memory_base(void);
  int cpu_num();
  int bind_task_to_cpu(void *task, int cpu);
};

int lost_kernel_hal_register(struct lost_kernel_hal_ops *ops);
int lost_kernel_hal_unregister(struct lost_kernel_hal_ops *ops);

#endif

#ifndef _SCHEDULER_CFS_QUEUE_H_
#define _SCHEDULER_CFS_QUEUE_H_

void cfs_queue_init ();
void cfs_queue_enqueue (struct sched_entity *en);
void cfs_queue_dequeue (struct sched_entity* en);
struct sched_entity* cfs_queue_find_first ();
struct sched_entity* cfs_queue_dequeue_first ();
int cfs_queue_size ();

#endif /* _SCHEDULER_CFS_QUEUE_H_ */
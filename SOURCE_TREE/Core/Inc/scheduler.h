#ifndef INC_SCH_H_
#define INC_SCH_H_

#include "main.h"
#include "global.h"

typedef struct {

	void (* pTask)(void) ;
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe; //timerflag
	uint32_t TaskID;
} sTask;

#define SCH_MAX_TASKS	5
#define NO_TASK_ID		0
//sTask SCH_tasks_G[SCH_MAX_TASKS];
sTask SCH_tasks_G[SCH_MAX_TASKS];
extern int counter;
extern int delay_time;


void SCH_Init(void);
void SCH_Update(void); //timerRun
unsigned char SCH_Add_Task(void (* pFunction)(), unsigned int DELAY, unsigned int PERIOD); //setTimer
void SCH_Dispatch_Tasks(void); //timer_flag
unsigned char SCH_Delete_Task(const int TASK_INDEX);

#endif /* INC_SCH_H_ */








///*
// * scheduler.h
// *
// *  Created on: Dec 11, 2024
// *      Author: DELL
// */
//
//#ifndef INC_SCHEDULER_H_
//#define INC_SCHEDULER_H_
//
//
//#include <stdint.h>
//#include "main.h"
//#include "global.h"
//
//#define SCH_MAX_TASKS 5
//#define NO_TASK_ID 0
//
//
//typedef struct {
//    void (*pTask)(void);
//    uint32_t Delay;
//    uint32_t Period;
//    uint8_t RunMe;
//    uint32_t TaskID;
//} sTask;
//
//extern sTask SCH_tasks_G[SCH_MAX_TASKS];
////extern uint8_t current_index_task;
//extern int counter;
//extern int delay_time;
//
//void SCH_Init(void);
//void SCH_Update(void);	//timerRun
//void SCH_Dispatch_Tasks(void);	//timer_flag
//unsigned char SCH_Add_Task(void (* pFunction)() , unsigned int DELAY, unsigned int PERIOD); // setTimer
//unsigned char SCH_Delete_Task(const int TASK_INDEX);
//
////extern void Task1(void);
////extern void Task2(void);
////extern void Task3(void);
//
//
//#endif /* INC_SCHEDULER_H_ */



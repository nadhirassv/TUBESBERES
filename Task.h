#ifndef TASK_H_INCLUDED
#define TASK_H_INCLUDED
#include <iostream>

using namespace std;



typedef struct elmTask *adr_Task;
typedef struct elmCourse *adr_Course;
typedef struct elm_Relation *adr_Relation;

struct elm_Relation{
    adr_Task nextTask;
    adr_Relation next;
};

struct Task{
    adr_Relation first;
};


struct infotype_Task{
    string nama;
    string tglTask;
    string dlTask;
    string isi;
};

struct infotype_Course{
    string nama;
    string kelas;
    string matkul;
};

struct listCourse{
    elmCourse first;
};

struct listTask{
    elmTask first;
};

struct elmTask{
    infotype_Task info;
    adr_Task next;
};

struct elmCourse{
    infotype_Course info;
    adr_Course next;

};






#endif // TASK_H_INCLUDED

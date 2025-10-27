#pragma once
#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Human.h"
#include "Teacher.h"
#include "CommissionMember.h"
#include "TeacherCommissionMember.h"


void menuTeacher(Teacher& t);
void menuCommissionMember(CommissionMember& c);
void menuTeacherCommissionMember(TeacherCommissionMember& tcm);

#endif

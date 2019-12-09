//
//  GroupClass.cpp
//  Nastya_Konopleva_16v
//
//  Created by Andrei Konoplev on 05.12.2019.
//  Copyright © 2019 Коноплев Андрей. All rights reserved.
//

#include "GroupClass.hpp"

GroupClass::GroupClass() {
    surname = "";
    university_name = "";
    faculty = "";
    course = 0;
}

//Иннициализаторы
GroupClass::GroupClass(string sname, string universityName, string faculties, int course1) {
    surname = sname;
    university_name = universityName;
    faculty = faculties;
    course = course1;
}

GroupClass::~GroupClass() {}

//Сеттеры свойств (Задают закрытым свойствам значения)
void GroupClass::setSurname(string surnameArg) {
    surname = surnameArg;
};

void GroupClass::setUniversityName(string nameArg) {
    university_name = nameArg;
};

void GroupClass::setFaculty(string facultyArg) {
    faculty = facultyArg;
};

void GroupClass::setCourse(int courseArg) {
    course = courseArg;
};

//Геттеры (Получить значения закрытых свойств)
string GroupClass::getSurname() {
    return surname;
};

string GroupClass::getUniversityName() {
    return university_name;
};

string GroupClass::getFaculty() {
    return faculty;
};

int GroupClass::getCourse() {
    return course;
};


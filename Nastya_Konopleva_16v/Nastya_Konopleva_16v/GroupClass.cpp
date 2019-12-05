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
GroupClass::GroupClass(string surname, string university_name, string faculty, int course) {
    surname = surname;
    university_name = university_name;
    faculty = faculty;
    course = course;
}

GroupClass::~GroupClass() {}

//Сеттеры свойств (Задают закрытым свойствам значения)
void GroupClass::setSurname(string surname) {
    surname = surname;
};

void GroupClass::setUniversityName(string name) {
    university_name = name;
};

void GroupClass::setFaculty(string faculty) {
    faculty = faculty;
};

void GroupClass::setCourse(int course) {
    course = course;
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


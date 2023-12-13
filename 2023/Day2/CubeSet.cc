#include "CubeSet.hh"
#include <iostream>

CubeSet::CubeSet(){
    this->red = 0;
    this->green = 0;
    this->blue = 0;
}

CubeSet::CubeSet(int red, int green, int blue){
    this->red = red;
    this->green = green;
    this->blue = blue;
}

void CubeSet::setRed(int red){
    this->red = red;
}

void CubeSet::setGreen(int green){
    this->green = green;
}

void CubeSet::setBlue(int blue){
    this->blue = blue;
}

int CubeSet::getRed(){
    return red;
}

int CubeSet::getGreen(){
    return green;
}

int CubeSet::getBlue(){
    return blue;
}

bool CubeSet::isValid(){
    if(red > 12 || green > 13 || blue > 14){
        return false;
    }
    return true;
}

int CubeSet::calcPower(){
    return red * blue * green;
}

CubeSet::~CubeSet(){}

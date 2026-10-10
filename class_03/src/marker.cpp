#include "marker.h"
#include <iostream>
int countPriority(const std::vector<Marker>&markers){
    int sum=0;
    for(const Marker&marker:markers){
        
        if(marker.priority>=80){
            ++sum;
        }
    }
    return sum;
}
bool MarkerManager::contains(int id)const{
    for(const Marker&markerco:markerhelper){
        if(markerco.id==id){
            return true;
        }
    }
    return false;
}
bool MarkerManager::add(const Marker&markeradd ){
    if(markeradd.id<0){
        return false;
    }
    if(markeradd.priority<=0 || markeradd.priority>100){
        return false;
    }
    if(contains(markeradd.id)){
        return false;
    }
    markerhelper.push_back(markeradd);
    return true;
    
}
int MarkerManager::markershower(int mask)const{
    int all=0;
    for(int i=0;i<markerhelper.size();i++){
    const Marker&marker=markerhelper[i];
    if(marker.priority>=mask){
        ++all;
    }
   }
   return all;
}
#include "marker.h"
#include <iostream>
#include <algorithm>
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
bool cmpmarker(const Marker&a,const Marker&b){
    if(a.priority!=b.priority){
        return a.priority>b.priority;
    }
    else 
    {
        return a.id<b.id;
    }
}
void MarkerManager::markersort(){
    int a=0;
    for(const Marker&option:markerhelper){
        if(option.id<0||option.id>100){
            ++a;
        }
    }
    if(a==0){
    std::sort(markerhelper.begin(),markerhelper.end(),cmpmarker);
    for(const Marker&option:markerhelper){                      //测试是否排列完毕
        std::cout<<option.id<<" "<<option.priority<<'\n'<<std::endl;   
    }}
    else{
        std::cout<<"false";
    }

}
void MarkerManager::put1(){
    for(const Marker&m:markerhelper){
        std::cout<<m.id<<" "<<m.x_mm<<' '<<m.y_mm<<" "<<m.priority<<'\n';
    }
}
void MarkerManager::put2(){
    int id,x,y,pr;
    std::cout<<"请输入id,x,y,priority";
    std::cin>>id>>x>>y>>pr;
    Marker temp;
    temp.id=id;
    temp.y_mm=y;
    temp.x_mm=x;
    temp.priority=pr;
    add(temp);
}
void MarkerManager::put3(){
    int a;
    std::cin>>a;
    for(const Marker&m:markerhelper){
        if(a==m.id){
            std::cout<<"true";
        }
        else{
            std::cout<<"false";
        }
    }
}
void MarkerManager::put4(){
    int mask;
    std::cout<<"请输入统计阈值：";
    std::cin>>mask;
    int cnt=markershower(mask);
    std::cout<<cnt<< "\n";
}


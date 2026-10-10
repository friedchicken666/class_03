#include "inc/marker.h"
#include <vector>
#include <iostream>
#include <map>

int main()
{
    //1
    std::vector<Marker>markers;
    markers.push_back({1,100,200,80});
    markers.push_back({2,200,-50,95});
    markers.push_back({3,0,0,60});
    for(const Marker&marker:markers){
        std::cout<<"编号"<<marker.id<<":"<<"位置("<<marker.x_mm<<","<<marker.y_mm<<"),"<<"优先级"<<marker.priority<<"\n";
        
    }
    int a=countPriority(markers);
    std::cout<<a<<std::endl;
    Marker&ref=markers[0];
    Marker*ptr=&markers[0];
    std::cout<<ref.id<<' '<<ptr->id<<std::endl;
    //2
    MarkerManager manager;
    Marker t1{1,100,200,80};
    Marker t2{2,200,-50,95};
    Marker t3{3,0,0,60};
    manager.add(t1);
    manager.add(t2);
    manager.add(t3);
    Marker t4{2,0,0,60};;
    bool end1=manager.add(t4);
    std::cout<<end1<<"\n";
    Marker t5{4,0,0,101};
    bool end2=manager.add(t5);
    std::cout<<end2<<"\n";
    //3
    int input;
    std::cout<<"请输入阈值";
    std::cin>>input;
    int result=manager.markershower(input);
    std::cout<<result<<'\n';  

return 0;
}

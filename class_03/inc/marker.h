#pragma once
#include <vector>
#include <algorithm>
struct Marker{
    int id,x_mm,y_mm,priority;
};

int countPriority(const std::vector<Marker>& marker_list);

class MarkerManager{
    public:
    bool add(const Marker& marker);
    bool contains(int id) const;
    int markershower(int mask)const;
    void markersort();
    void put1();
    void put2();
    void put3();
    void put4();
    private:
    std::vector<Marker>markerhelper;
};
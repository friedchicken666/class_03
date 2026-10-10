#pragma once
#include <vector>

struct Marker{
    int id,x_mm,y_mm,priority;
};

int countPriority(const std::vector<Marker>& marker_list);

class MarkerManager{
    public:
    bool add(const Marker& marker);
    bool contains(int id) const;
    int markershower(int mask)const;


    private:
    std::vector<Marker>markerhelper;
};
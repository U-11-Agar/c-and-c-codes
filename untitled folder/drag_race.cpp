// You are in charge of organizing a drag racing championship. The competition will be held at a large empty field, which can be modelled as an infinite plane. The most important thing is to take a lot of cool photos for the media, so you've identified n
//  points in the plane with the most beautiful scenery. Each of these points has to be a midpoint of a separate track, and each track has to be aligned with one of cardinal directions (either horizontal or vertical). Of course, no tracks may have a common point due to obvious safety reasons. Finally, all tracks should have equal length 2d
//  for some integer d
//  so that all competitors are in equal conditions.

// You now want to find the largest length of the tracks so that directions can be chosen for each track without any possible collision.

// Input:
// The first line of input contains T
// , i.e. number of test cases per file.

// The first line of each test case contains a single integer n
//  −
//  the number of tracks (1≤n≤100000).

// Each of the next n
//  lines contains two integers xi
//  and yi−
//  midpoint of the respective track (0≤xi,yi≤109
// ). All n
//  points are distinct.

// Output:
// On the first line print a single integer −
//  the largest non-negative number d
//  such that directions of tracks of length 2d
//  with given midpoints can be chosen without any collisions, or −1
//  if d
//  can be arbitrarily large. On the following line print a string of n
//  characters | and -, denoting directions of the tracks in the same order as given in the input.
// class coordinate
// {
//     public:
//     int n;
//     vector<int> x;
//     x.resize(n);
//     y.resize(n);
//     vector<int> y;
//     void vertical();
//     void horizontal();

// };
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
### Problem Statement :

Goodland is a country with a number of evenly spaced cities along a line. The distance between adjacent cities is  unit. There is an energy infrastructure project planning meeting, and the government needs to know the fewest number of power plants needed to provide electricity to the entire list of cities. Determine that number. If it cannot be done, return -1.

You are given a list of city data. Cities that may contain a power plant have been labeled . Others not suitable for building a plant are labeled . Given a distribution range of , find the lowest number of plants that must be built such that all cities are served. The distribution range limits supply to cities where distance is less than k.

Input Format

The first line contains two space-separated integers  and , the number of cities in Goodland and the plants' range constant.
The second line contains  space-separated binary integers where each integer indicates suitability for building a plant.

Output Format

Print a single integer denoting the minimum number of plants that must be built so that all of Goodland's cities have electricity. If this is not possible for the given value of k , print -1.

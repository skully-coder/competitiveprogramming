## Problem Statement

Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

The vacation consists of N days. For each i (1≤i≤N), Taro will choose one of the following activities and do it on the i-th day:

- Swim in the sea. Gain a<sub>i</sub> points of happiness.
- Catch bugs in the mountains. Gain b<sub>i</sub> points of happiness.
- Do homework at home. Gain c<sub>i</sub> points of happiness.

As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

Find the maximum possible total points of happiness that Taro gains.

## Constraints

All values in input are integers.

- 1≤N≤10<sup>5</sup>

- 1 ≤a<sub>i</sub>, b<sub>i</sub>, c<sub>i</sub>≤ 10<sup>4</sup>

## Input

N\
a<sub>1</sub> b<sub>1</sub> c<sub>1</sub>\
a<sub>2</sub> b<sub>2</sub> c<sub>2</sub>  
a<sub>3</sub> b<sub>3</sub> c<sub>3</sub>  
.  
.  
.  
a<sub>N</sub> b<sub>N</sub> c<sub>N</sub>

## Output

Print the maximum possible total points of happiness that Taro gains.

## Example Input - Output

Input \
3\
10 40 70\
20 50 80\
30 60 90

Output  
210

Explaination

If Taro does activities in the order C, B, C, he will gain 70+50+90=210 points of happiness.

## Note

This problem is taken from an online judge atcoder. Feel free to try it on your own before moving to solution

Problem link https://atcoder.jp/contests/dp/tasks/dp_c

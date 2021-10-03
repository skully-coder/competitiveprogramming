Problem Statement : Victoria is splurging on expensive accessories at her favorite stores. Each store stocks  types of accessories, where the  accessory costs  dollars (). Assume that an item's type identifier is the same as its cost, and the store has an unlimited supply of each accessory.

Victoria wants to purchase a total of  accessories according to the following rule:

For example, if , , and , then she must choose  accessories such that any subset of  of the  accessories will contain at least  distinct types of items.
Given , , , and  values for  shopping trips, find and print the maximum amount of money that Victoria can spend during each trip; if it's not possible for Victoria to make a purchase during a certain trip, print SAD instead. You must print your answer for each trip on a new line.


Input Format

The first line contains an integer, , denoting the number of shopping trips.
Each of the  subsequent lines describes a single shopping trip as four space-separated integers corresponding to L, A , N , and D, respectively.


Output Format

For each shopping trip, print a single line containing either the maximum amount of money Victoria can spend; if there is no collection of items satisfying her shopping rule for the trip's L, A , N , and D  values, print SAD instead.

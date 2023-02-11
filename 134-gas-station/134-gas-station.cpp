class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // tank is initially 0
        int tank = 0;
        int starting_index = 0;
        int total_gas = 0, total_cost = 0;
        for(int i = 0; i< gas.size(); i++) {
            total_gas += gas[i];
            total_cost += cost[i];
            tank = tank + gas[i] - cost[i];
            if(tank < 0) {
                cout << "tank < 0" << endl;
                starting_index = i + 1;
                tank = 0;
            }
            cout << starting_index << endl;
        }
        if(total_gas < total_cost) return -1;
        else return starting_index;
    }
};
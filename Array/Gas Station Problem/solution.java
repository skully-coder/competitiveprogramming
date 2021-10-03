class solution {
    public int canCompleteCircuit(int[] gas, int[] cost) { 
        int gasCostDiff = 0;
        int n = gas.length;
        int sum = 0;
        int i = 0, previous = 0, start = 0;
        ArrayList<int[]> list = new ArrayList(n); // Reduced input list.
        for(i = 0 ; i < n; i++){
            int diff = gas[i] - cost[i];
            gasCostDiff += diff; 
            if(previous < 0 && diff >0){
                list.add(new int[]{sum, start}); // (Piled up gas, Start Station) Pair
                sum = 0;
                start = i;
            }
            sum += diff;
            previous = diff;
        }
        list.add(new int[]{sum, start});
        
        //If total gas less than total cost. We cannot complete our trip
        if (gasCostDiff < 0)
            return -1;
        
        
        //Now work on shorter version of our input.
        for(i = 0 ; i < list.size() ; i++){
            int[] pair = list.get(i); 
            if(pair[0] < 0) //If piled up gas is negative. This index cannot be start point. Look for next possible start point. 
                continue;
            sum = 0;
            start = i; // Let start Station be Index i. Check if round trip possible.
            do{
                sum += (list.get(start))[0];
                if(sum < 0) //If gas goes below zero. We cannot continue. 
                    break;
                start = (start + 1) % list.size();
            }while (start != i);
            if(start == i && sum >= 0) // Start station is same as end station. And gas available is positive. This is our answer.
                return (list.get(start))[1];
        }

        return -1;
    }
}
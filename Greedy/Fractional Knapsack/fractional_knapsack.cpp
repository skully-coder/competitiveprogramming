//Fractional Knapsack Algo
class Solution
{
    public:
    static bool compare(Item a,Item b){
        double v1=(double)a.value/(double)a.weight;
        double v2=(double)b.value/(double)b.weight;
        return v1>v2;
    }
  
    double fractionalKnapsack(int w, Item arr[], int n) //Fn def
    {
        sort(arr,arr+n,compare);
        double curr_weight=0;
        double ans=0;
        for(int i=0;i<n;i++){
            if(curr_weight+arr[i].weight<=w){   //Condition check
                curr_weight+=arr[i].weight;
                ans+=arr[i].value;
            }
            else{
                double r=w-curr_weight;
                ans+=arr[i].value*
                	(r/(double)arr[i].weight);
                break;
            }
        }
        return ans;
    }     
};

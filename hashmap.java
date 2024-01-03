import java.util.*;
 class pl{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter total no of no.s");
        int n=sc.nextInt();
        System.out.println("Enter the no.s");
        HashMap<Integer,Integer> map= new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++){
            int no=sc.nextInt();
            map.put(no,map.getOrDefault(no,0)+1);
        }
        int counter=0;
        for(int i: map.keySet()){
            if(map.containsKey(i+1)){
                int c=(map.get(i)<map.get(i+1))?map.get(i):map.get(i+1);
                counter+=c;
            }
        }
        System.out.println("count-"+counter);
        
    }
}

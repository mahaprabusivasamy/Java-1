\\
To insert element in a Array,short it & to find the 2nd largest num :
sample input:
5
5 4 3 2 1
expected output:
4
\\
import java.util.*;
class main
{
    public static void main(String args[])
    {
        int a;
        Scanner s= new Scanner(System.in);
        a=s.nextInt();
        ArrayList<Integer> gg=new ArrayList<Integer>(a);
        
        for(int i=0;i<a;i++){
            gg.add(s.nextInt());
        }
        Collections.sort(gg);
        System.out.println(gg.get(a-2));
    }
}

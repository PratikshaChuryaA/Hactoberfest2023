import java.util.HashSet;
import java.util.*;
public class Hashing {
    public static void main(String[] args) {
        HashSet<Integer> set=new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(5);
        set.add(6);
        System.out.println(set);
        set.remove(5);
        System.out.println(set);
        System.out.println(set.size());
        if(set.contains(6)){
            System.out.println("Present");
        }
        Iterator it=set.iterator();
        while(it.hasNext()){
            System.out.print(it.next()+", ");
        }
    }
}

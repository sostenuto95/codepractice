import java.util.ArrayList;
import java.util.List;
import java.util.Random;
 
public class GFG {
 
    // Drive Function
    public static void main(String[] args)
    {
 
      List<Integer> list = new ArrayList<>(); 
     for(int i=1; i!=49; i++ ){
        list.add(i);
     }
        GFG obj = new GFG();
 
        // boundIndex for select in sub list
        int ourSixNumbers = 6;
 
        // take a random element from list and print them
        System.out.println(
            obj.getRandomElement(list, ourSixNumbers));
    }
 
    // Function select an element base on index and return
    // an element
    public List<Integer>
    getRandomElement(List<Integer> list, int totalItems)
    {
        Random rand = new Random();
 
        // create a temporary list for storing
        // selected element
        List<Integer> newList = new ArrayList<>();
        for (int i = 0; i < totalItems; i++) {
 
            // take a random index between 0 to size
            // of given List
            int randomIndex = rand.nextInt(list.size());
 
            // add element in temporary list
            newList.add(list.get(randomIndex));
 
            // Remove selected element from original list
            list.remove(randomIndex);
        }
        return newList;
    }
 
}
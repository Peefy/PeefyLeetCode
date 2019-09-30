
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;


public class Vector2D {
    List<List<Integer>> listOfList;
    int listIndex;
    int elemIndex;
    public Vector2D(List<List<Integer>> vec2d) {
        listOfList = vec2d;
        listIndex = 0;
        elemIndex = 0;
    }

    public int next() {
        return listOfList.get(listIndex).get(elemIndex++);
    }

    public boolean hasNext() {
        while(listIndex < listOfList.size()){
            if(elemIndex < listOfList.get(listIndex).size()){
                return true;
            }else{
                listIndex++;
                elemIndex = 0;
            }
        }
        return false;
    }
}


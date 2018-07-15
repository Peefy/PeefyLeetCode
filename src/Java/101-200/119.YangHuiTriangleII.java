
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;

class Solution {
    public List<Integer> getRow(int rowIndex) {
        ++rowIndex;
        ArrayList<Integer> init = new ArrayList<>();
        if (rowIndex == 0)
            return init;
        init.add(1);
        for (int i = 0; i < rowIndex - 1; i++) {
            init.add(0);
            init.add(0, 0);
            for (int j = 0; j < init.size() - 1; j++) {
                init.set(j, init.get(j) + init.get(j + 1));
            }
        }
        init.removeIf((i1) -> {return i1 == 0;});
        return init;
    }
}

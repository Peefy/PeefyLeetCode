
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

class PeekingIterator implements Iterator<Integer> {
    int cur;
    List<Integer> res;

    public PeekingIterator(Iterator<Integer> itr) {
        res = new ArrayList<Integer>();
        while (itr.hasNext()) {
            res.add(itr.next());
        }
    }

    public Integer peek() {
        if (res.isEmpty() || cur >= res.size()) {
            return -100000;
        }
        return res.get(cur);
    }

    @Override
    public Integer next() {
        int result = -100000;
        if (cur < res.size()) {
            result = res.get(cur++);
        }
        return result;
    }

    @Override
    public boolean hasNext() {
        boolean result = false;
        if (cur < res.size()) {
            result = true;
        }
        return result;
    }
}

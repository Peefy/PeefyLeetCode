
// cd src/Java
// javac Main.java
// java Main

import java.lang.*;
import java.lang.System;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

import Java.ValidParentheses;

/**
 * main
 */
public class Main {
    public static void main(String[] args) {
        TwoSum two = new TwoSum();
        int[] result = two.twoSum(new int[]{1, 2, 3, 4, 5}, 7);
        System.out.println(result[0]);
        System.out.println(result[1]);
        IntergerReverse re = new IntergerReverse();
        System.out.println(re.reverse(1534236469));
        System.out.println("123");
        System.out.println("code runner");
        ValidParentheses solution = new ValidParentheses();
        System.out.println(solution.isValid(""));
        System.out.println(solution.isValid("()"));
        System.out.println(solution.isValid("[(])"));
        System.out.println(solution.isValid("{()}"));
        System.out.println(solution.isValid("){"));
        System.out.println(solution.isValid(""));
    }
}

// cd src/Java
// javac Main.java
// java Main


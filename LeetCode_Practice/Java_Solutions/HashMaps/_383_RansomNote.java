package LeetCode_Practice.Java_Solutions.HashMaps;

import java.util.HashMap;

public class _383_RansomNote {
    public boolean canConstruct (String ransomNote, String magazine) {
        HashMap<Character, Integer> mag = new HashMap<>();
        for (char ch : magazine.toCharArray()) {
            if (mag.containsKey(ch))
                mag.put(ch, mag.get(ch) + 1);
            else
                mag.put(ch, 1);
        }

        for (char c : ransomNote.toCharArray()) {
            if (mag.containsKey(c)) {
                if (mag.get(c) == 1)
                    mag.remove(c);
                else
                    mag.put(c, mag.get(c) - 1);
            }
            else
                return false;
        }
        return true;
    }
}

// A Java example of working with a hash table
public HashMap<Integer, Student> buildMap(Student[], students) {
    HashMap<Integer, Student> map = new HashMap<Integer, Student>();
    for (Student s : students) {
        map.put(s.getId(), s);
    }
    return map;
}


// A Java example of an ArrayList (Dynamically Resizing Array)
public ArrayList<String> merge(String[] words, String[] more) {
    ArrayList<String> sentence = new ArrayList<String>();
    for (String w : words) {
        sentence.add(w);
    }
    for (String w : more) {
        sentence.add(w);
    }
    return sentence;
}


// The total time for this method is O(x(n^n))
public String joinWords(String[] words) {
    String sentence = "";
    for (String w : words) {
        sentence = sentence + w;
    }
    return sentence;
}
// A Java example of a StringBuffer
public String joinWords(String[] words) {
    StringBuffer setence = new StringBuffer();
    for (String w : words) {
        sentence.append(w);
    }
    return sentence.toString();
}
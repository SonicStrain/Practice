class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        // Reverse the string str
        char[] ch = str.toCharArray();
        String s="";
        for (int i = ch.length - 1; i >= 0; i--)
            {
                s+=ch[i];
            }
        return s;
    }
}
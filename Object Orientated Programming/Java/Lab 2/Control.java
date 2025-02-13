/****************************************
* Control: the purpose of this class is to control the pet class in terms of assigning and printing
* Author: Bartosz Sobiegraj
* Date: 06/02/2025
*****************************************/

public class Control 
{
    public static void main (String [] args)
    {
        Pet p1 = new Pet("Clara", "Cat", true);
        // System.out.println(p1.name);
        // System.out.println(p1.toString());

        System.out.println(p1); // prints the already assigned attributes from above

        p1.setName("Jim"); // assigns a new name
        p1.setType("dog"); // assigns a new type
        p1.setTrained(true); // assigns whether it was trained

        System.out.println(p1.getName()); // prints out individual attributes
        System.out.println(p1.getType());
        System.out.println(p1.getTrained());
        System.out.println(p1); // prints the newly assigned attributes from above

        p1.makeNoise();
        
        String s1 = "this is the first string"; // part 4 test to compare both sentences
        String s2 = "this is the first string1";
        if (s1.compareToIgnoreCase(s2) == -1)
        {
            System.out.println("The two sentences are not equal");
        }
        else
        {
            System.out.println("The two sentences are equal");
        }
    }
}

/****************************************
* 1) a) it's in the Module java.desktop and Package javax.swing
*    b) the purpose of it allows to edit single lines of text 
*    c) there are 5 constructors 
*    d) 
        public class textfield1
        {
            JTextField textfield = new Jtextfield("test");
            textfield.setHorizontalAlignment(3);
        }
*
*
*****************************************/
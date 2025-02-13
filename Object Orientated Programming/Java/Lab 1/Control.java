
/****************************************
* Control: the purpose of this class.. etc
* Author: Bartosz Sobiegraj
* Date: 30/01/2025
*****************************************/
public class Control 
{
    public static void main(String[] args)
    {
        Car o1 = new Car("John Smyth", "171-D-12345");
        Car o2 = new Car("Ronald Mcdonald", "182-C-12343", 200, "blue", true, 4);
        Car o3 = new Car("Taylor Swift", "05-D-12341", 140, "brown", false, 3);

        System.out.println(o2);
        System.out.println(o2.toString());
        System.out.println(o3.toString());
    }  
}

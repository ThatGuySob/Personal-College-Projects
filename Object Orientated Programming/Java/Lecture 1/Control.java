
// special method in Java called the "main" method - entry for all java programmes

    public class Control
    {

        public static void main (String [] args)
        {
            Student s1 = new Student("John Smyth", 23, "22 Dunlaoghaire main st");

            Student s2 = new Student();

            Student s3 = new Student ("Seana Lewis");

            System.out.println(s1.getName());
            System.out.println(s2.getName());
            System.out.println(s3.getName());
            
            // call the getName() method for the S3 objects

        }





    }
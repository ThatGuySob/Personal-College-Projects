
    public class Student
    {

        // attributes

        private String name; // delcaring attributes as private keeps them from unintended change
        private String address; // only This class can change or see the value of the attributes
        private int age;
        private boolean feesPaid;

        public Student ( String name, int howOld, String address) // receive in the name and the age
        {
            this.name = name;
            age =       howOld;
            this.address = address;
        }

        public Student ( String name) // receive in the name 
        {
            this.name = name;

        }

        public Student () // blank placeholder
        {

        }

        //methods

        public String getName()
        {

            return "The name of this student is " + name;

        }

        public static void main(String[] args) {
            
        }

    }
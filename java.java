public class Student {
    private String name;
    private int rollNo;
    private String course;
    
    public Student(String name, int rollNo, String course) {
        this.name = name;
        this.rollNo = rollNo;
        this.course = course;
    }
    
    public void displayInfo() {
        System.out.println("Student Information:");
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Course: " + course);
    }
    
    public static void main(String[] args) {
        Student student = new Student("John Doe", 123, "BCA");
        student.displayInfo();
    }
}
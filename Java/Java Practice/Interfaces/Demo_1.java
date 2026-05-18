class Demo1{
    public static void main(String[] args) {
        Honda h = new Honda();
        h.drive();
    }
}
interface Car{
    void drive();
}

class Honda implements Car{
    @Override
    public void drive(){
        System.out.println("Honda Car Drive");
    }
}
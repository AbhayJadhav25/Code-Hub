class Demo1{
    // final int X = 10; valiid

    // final int X ;
    // X =10;    --->not valid . can be possible in static method

    // final int X;
    // Demo1(){
    //     this.X = 10;  //-->valid
    // }

    public static void main(String[] args) {
        Demo1 d = new Demo1();
        // System.out.println("x = "+d.X);

        final int x;
        x = 10;
        System.out.println("X = "+x);

        // x = 16;
        // System.out.println(x);  //ERROR -> variable x might already have been assigned

        updateFinal();
    }

    static void updateFinal(){
        final int y;
        y = 20;
        System.out.println("y = "+y);
    }
}
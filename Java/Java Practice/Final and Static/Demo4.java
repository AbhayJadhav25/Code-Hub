public class Demo4 {

    static int Add(final int x ,final int y ){
        // return x+y; --->valid

        x = 20;
        return x+y;  //final parameter x may not be assigned
    }
    public static void main(String[] args) {
        int x = 10;
        int y = 20;

        int ans = Add(x ,y);
        System.out.println("Addition = "+ans);
    }
}

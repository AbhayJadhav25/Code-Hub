public class Q4_1 extends Thread {
    String msg;

    Q4_1(String msg){
        this.msg = msg;
    }

    @Override
    public void run(){
        while(true){
            System.out.println(msg);
            System.out.println("Message from "+Thread.currentThread().getName());
            System.out.println("----------------------------------------");

            try{
                Thread.sleep(1000);
            }catch(Exception e){
                System.out.println(e);
            }
        }
    }
    public static void main(String[] args) {
        Q4_1 t1 = new Q4_1("Hello From Thread 1");
        Q4_1 t2 = new Q4_1("Hello From Thread 2");
        
        t1.setName("Thread 1");
        t2.setName("Thread 2");

        t1.start();
        t2.start();
    }
}

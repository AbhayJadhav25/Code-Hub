class Q1 extends Thread{
    String msg;
    
    Q1(String msg){
        this.msg = msg;
    }

    @Override
    public void run(){
        while(true){
            System.out.println(msg);
            System.out.println("Thread Name  =  "+Thread.currentThread().getName());
            
            System.out.println("--------------------");

            try{
                Thread.sleep(1000);
            }catch(Exception e){
                System.out.println("Error");
            }
        }
    }
    public static void main(String[] args) {
        Q1 t1 = new Q1("Hello from Thread 1");
        Q1 t2 = new Q1("Hello from Thread 2");

        t1.setName("Thread 1");
        t2.setName("Thread 2");
        t1.start();
        t2.start();
    }
}



class ATM2{
    public void withdrawMoney(int amount){
        pinVerified();
        checkBalance(amount);
        UpdateBalance(amount);
        printReceipt(amount);

        System.out.println("Transaction Successful");
    }

    private void pinVerified(){
        System.out.println("Pin verified");
    }
    private void checkBalance(int amount){
        System.out.println("Balanced Checked");
    }

    private void UpdateBalance(int amount){
        System.out.println("Balanced Update");
    }

    private void printReceipt(int amount){
        System.out.println("Receipt print");
    }

}

public class LowLevelAbstraction {
    public static void main(String[] args) {

        ATM2 atm = new ATM2();

        atm.withdrawMoney(5000);
    }
}


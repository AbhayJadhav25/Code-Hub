package MScCAI;
public class MscCAIMarks {
    int SemITotal;
    int SemIITotal;

    public MscCAIMarks(int SemITotal , int SemIITotal){
        this.SemITotal = SemITotal;
        this.SemIITotal = SemIITotal;
    }

    public int total1(){
        return (SemITotal + SemIITotal)/2;
    }
}

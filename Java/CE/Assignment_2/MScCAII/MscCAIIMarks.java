package MScCAII;
public class MscCAIIMarks {
    int SemITotal;
    int SemIITotal;

    public MscCAIIMarks(int SemITotal , int SemIITotal){
        this.SemITotal = SemITotal;
        this.SemIITotal = SemIITotal;
    }

    public int total2(){
        return (SemITotal + SemIITotal)/2;
    }

}

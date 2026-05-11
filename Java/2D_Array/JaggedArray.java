class JaggedArray{
    public static void main(String[] args) {
        int[][] brr = {
            {1,2},
            {2,3,4,5},
            {3,4,4,5,6,7},
            {4}
        };

        System.out.println("Jagged Array\n");
        for(int i = 0 ; i<brr.length ; i++){
            for(int j=0 ; j<brr[i].length ;j++){
                System.out.print(brr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
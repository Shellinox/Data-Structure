public class quickSort {
    static int partition(int a[],int low,int high){
        int pivot=a[high];
        int i=low-1;
        for (int j = low; j <high; j++) {
            if(a[j]<pivot){
                i++;
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        i++;
            int temp=a[i];
            a[i]=a[high];
            a[high]=temp;
            return i;
    }
    static void sort(int a[],int low,int high){
        if(low<high){
            int pi=partition( a, low,high);
            sort(a,low,pi-1);
            sort(a,pi+1,high);
        }
    }
    public static void main(String[] args) {
        int[]a={6,3,9,5,2,8};
        int high=a.length;
        sort(a, 0, high-1);
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }
    }
}

/* pattern simple pattern print 1 */
#include<stdio.h>
#include<conio.h>

int main()
{
  int n = 5, rowCount = ((n*2))-1, c, spaceCount, j, mockRow;
  /// row
  for(int r = 1; r<=rowCount; r++){
    mockRow = r>n ? (rowCount-r+1) : r;
    c = mockRow*2-1;
    spaceCount = (n-mockRow)*2;
    // print front spaces
    printf("%*s", spaceCount, "");
    /// column
    for(j = 1; j<=c; j++){
        printf("1 ");
    }
    printf("\n");
  }

  getch();
  return 0;
}
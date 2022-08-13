#include <stdio.h>
struct Time{
    int hour ;
    int minute;
    int second;
};
struct Interval{
    struct Time start;
    struct Time end;
};

int main()
{
    struct Interval diff={
        {5,30,0 },
        {10,30,0 }
    };
    printf("%d.%d.%d\n",diff.start.hour,diff.start.minute,diff.start.second);
    printf("%d.%d.%d",diff.end.hour,diff.end.minute,diff.end.second);

    return 0;
}

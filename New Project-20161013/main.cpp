#include <stdio.h>
#include <string.h>
#include <linux/can.h>

typedef struct can_frame CAN_FRAME;

int main()
{
    CAN_FRAME c_frame;
    memset(&c_frame, 0, sizeof(CAN_FRAME));
    c_frame.can_id = 100;
    printf("%d", c_frame.can_id);
    
    return 0;
}


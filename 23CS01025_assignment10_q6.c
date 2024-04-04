#include<stdio.h>

union Packet {
    int opcode;
    int statuscode;
    char k[637];
};

enum Flag {
    Control,
    Data,
};

struct DataPacket {
    enum Flag c;
    union Packet q;
};

void assignpacketvalues(struct DataPacket i[], int nopacket) {
    for (int j = 0; j < nopacket; j++) {
        i[j].c = (j % 2 == 0) ? Control : Data;
        if (i[j].c == Control) {
            i[j].q.opcode = j * 10;
            i[j].q.statuscode = j * 6;
            i[j].q.k[0] = 'A' + j;
            i[j].q.k[1] = '\0'; // Null-terminate the string
        } else {
            i[j].q.opcode = j * 17;
            i[j].q.statuscode = j * 5;
            i[j].q.k[0] = 'a' + j;
            i[j].q.k[1] = '\0'; // Null-terminate the string
        }
    }
}

void printconte(struct DataPacket i[], int nopacket) {
    for (int j = 0; j < nopacket; j++) {
        printf("Packet %d:\n", j + 1);
        printf("Type: %s\n", (i[j].c == Control) ? "Control" : "Data");
        if (i[j].c == Control) {
            printf("opcode: %d\n", i[j].q.opcode);
            printf("statuscode: %d\n", i[j].q.statuscode);
            printf("k: %s\n", i[j].q.k);
        } else {
            printf("opcode: %d\n", i[j].q.opcode);
            printf("statuscode: %d\n", i[j].q.statuscode);
            printf("k: %s\n", i[j].q.k);
        }
        printf("\n");
    }
}

int main() {
    int nopacket;
    printf("Enter nopacket: ");
    scanf("%d", &nopacket);
    struct DataPacket i[nopacket];
    assignpacketvalues(i, nopacket);
    printf("The packets:\n");
    printconte(i, nopacket);
    return 0;
}

#include <stdio.h>

int CountCutableLines(int *lines, int count, int lineLength) {
    int cutableCount = 0;
    for (int i = 0; i < count; i++) {
        cutableCount += lines[i] / lineLength;
    }

    return cutableCount;
}

int getMaxLine(int *lines, int count) {
    int maxLine = -1;
    for (int i = 0; i < count; i++) {
        if (lines[i] > maxLine) {
            maxLine = lines[i];
        }
    }

    return maxLine;
}

int round(float num) {
    return (num - (int) num) >= 0.5 ? (int) num + 1 : (int) num;
}
int binarySearch(int *lines, int count, int needCount) {
    unsigned int left = 1;
    unsigned int right = getMaxLine(lines, count) + 1;
    int lineLength = right;

    while (left <= right) {
        unsigned int mid = (left / 2 + right / 2);
        int cutableCount = CountCutableLines(lines, count, mid);

        if (cutableCount >= needCount) {
            lineLength = mid;
            left = mid + 1;
        } else {
            right = mid;
        }

        if (left == right) {
            break;
        }
    }

    return lineLength;
}

int main() {
    int count, needCount;

    scanf("%d%d", &count, &needCount);

    int lines[count];
    int longestLine = -1;

    for (int i = 0; i < count; i++) {
        scanf("%d", &lines[i]);
        if (lines[i] > longestLine) {
            longestLine = lines[i];
        }
    }


    int lineLength = binarySearch(lines, count, needCount);

    printf("%d", lineLength);

}
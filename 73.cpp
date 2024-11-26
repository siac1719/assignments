#include <stdio.h>

int main() {
    int votes[5] = {0}, spoilt = 0, vote;

    printf("Enter votes (0 to stop):\n");

    while (1) {
        scanf("%d", &vote);

        if (vote == 0) {
            break;
        }

        if (vote >= 1 && vote <= 5) {
            votes[vote - 1]++;
        } else {
            spoilt++;
        }
    }

    printf("\nVote count:\n");
    for (int i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }

    printf("Spoilt ballots: %d\n", spoilt);

    return 0;
}

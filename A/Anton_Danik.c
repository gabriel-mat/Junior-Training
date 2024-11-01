#include <stdio.h>

int main() {
  char winner;
  int num_games, A_wins, D_wins;

  scanf("%d ", &num_games);

  A_wins = D_wins = 0;

  for (int i = 0; i < num_games; i++) {
    scanf("%c", &winner);

    if (winner == 'A')
      A_wins++;
    else if (winner == 'D')
      D_wins++;
  }

  if (A_wins > D_wins)
    printf("Anton");
  else if (A_wins < D_wins)
    printf("Danik");
  else
    printf("Friendship");

  return 0;
}
#include <stdio.h>

typedef int time;

int next_multiple(int floor, int n);

int main() {
  int cakes_needed, time_needed, baked_paralel, time_second, cakes_baked,
      cakes_missing;
  time t1, t2, td, t3;

  scanf("%d %d %d %d", &cakes_needed, &time_needed, &baked_paralel,
        &time_second);

  // 1 oven calc
  if (cakes_needed % baked_paralel == 0)
    t1 = (cakes_needed / baked_paralel) * time_needed;
  else
    t1 = (cakes_needed / baked_paralel + 1) * time_needed;

  // 2 oven calc
  // it starts with 1 oven
  td = next_multiple(time_second, time_needed);

  if (cakes_needed % baked_paralel == 0)
    t2 = (cakes_needed / baked_paralel) * time_needed;
  else
    t2 = (cakes_needed / baked_paralel + 1) * time_needed;

  if (t2 > td) {
    cakes_baked = (td / time_needed) * baked_paralel;

    // 2nd oven built
    t2 = td;
    baked_paralel *= 2;
    cakes_missing = cakes_needed - cakes_baked;

    if (cakes_missing % baked_paralel == 0)
      t2 += (cakes_missing / baked_paralel) * time_needed;
    else
      t2 += (cakes_missing / baked_paralel + 1) * time_needed;
  }

  if (t1 <= t2)
    printf("NO");
  else
    printf("YES");

  return 0;
}

int next_multiple(int floor, int n) {
  if (floor % n == 0)
    return floor;

  return (floor + n - (floor % n));
}
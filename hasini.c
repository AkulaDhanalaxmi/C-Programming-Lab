#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int process[n], burst_time[n], waiting_time[n], turnaround_time[n];
    float total_waiting = 0, total_turnaround = 0;

    for(i = 0; i < n; i++) {
        process[i] = i + 1;
        printf("Enter burst time for process %d: ", process[i]);
        scanf("%d", &burst_time[i]);
    }

    waiting_time[0] = 0;
    for(i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
    }
    for(i = 0; i < n; i++) {
        turnaround_time[i] = waiting_time[i] + burst_time[i];
        total_waiting += waiting_time[i];
        total_turnaround += turnaround_time[i];
    }
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", process[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }
    printf("\nAverage Waiting Time = %.2f", total_waiting / n);
    printf("\nAverage Turnaround Time = %.2f\n", total_turnaround / n);
}


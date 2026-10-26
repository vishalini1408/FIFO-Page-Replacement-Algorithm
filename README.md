# Experiment 10: FIFO Page Replacement Algorithm

**FIFO Page Replacement Algorithm – Print Spooler Queue Management**

## Aim
To implement FIFO (First In First Out) in print spooler queue management, where the oldest job is evicted when the queue is full.

## Algorithm
1. Create an empty queue with capacity 3.
2. Process each incoming packet/job.
3. If the queue is full, remove the oldest packet from the front.
4. Add the new packet to the rear of the queue.
5. Repeat for all packets and stop.

## Files
- `fifo.c` – C source program.
- `output.png` – Original output image from the lab manual.

## Compile and Run
```bash
gcc fifo.c -o fifo
./fifo
```

## Expected Console Output
```text
Added Packet 1
Added Packet 2
Added Packet 3
Removed Packet 1
Added Packet 4
Removed Packet 2
Added Packet 5
```

## Concept
FIFO removes the item that entered the queue earliest. The queue has a capacity of 3, and the incoming packets are 1, 2, 3, 4, and 5.

## Use Case
A print server keeps incoming print jobs in a fixed-size spooler queue. When the queue is full and a new job arrives, FIFO removes the oldest queued job to make room.

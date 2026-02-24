

1. Use the requirements elicitation techniques of document review, observation, brainstorming, sampling, and research to capture the requirements of a typical elevator control system. Use natural language and the UML to represent the situation in which people on different floors simultaneously push the “Up” button

- Floor 2 presses Up
- Floor 5 presses Up
- Floor 8 presses Up
Elevator current state:
- Located at Floor 1
- Direction: Idle
### System Behavior
1. The controller records all three requests.
2. The controller selects the nearest upward request.
3. The elevator moves upward.
4. The elevator stops at floors 2, 5, and 8 sequentially.
5. The Up indicator turns off at each serviced floor.
6. After servicing Floor 8, if no further upward requests exist, direction changes to Down or becomes Idle.
If the elevator had already been moving upward:
- The system adds new requests into the upward queue.
- No reversal occurs.
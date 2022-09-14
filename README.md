## push_swap

<img width="403" alt="image" src="https://user-images.githubusercontent.com/81334995/179250784-b24718ed-c5d9-4784-b9c3-b97f82d3ac73.png">

### Sorter

This program that takes a list of `int`s as arguments:

```bash
$ ./push_swap 7 1 8 9 4 2 6 5 3 (Bottom)
```

Parses them into `stack a`:

Then sorts them with `stack b` and using the operations:

- `sa`: (swap a): Swap the first 2 elements at the top of `stack a`

- `sb`: (swap b): Swap the first 2 elements at the top of `stack b`

- `ss`: `sa` and `sb` at the same time

- `pa`: (push a): Take the first element at the top of b and put it at the top of a

- `pb`: (push b): Take the first element at the top of a and put it at the top of b

- `ra`: (rotate a): The first element becomes the last one

- `rb`: (rotate b): The first element becomes the last one

- `rr`: `ra` and `rb` at the same time

- `rra`: (reverse rotate a): The last element becomes the first one

- `rrb`: (reverse rotate b): The last element becomes the first one

- `rrr`: `rra` and `rrb` at the same time

`stack a` must be sorted from smallest to largest

I enjoyed the project and learned a lot about Data Structure, doubly linked lists, circular linked list and sorting algorithms :D


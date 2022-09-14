## push_swap

<img width="403" alt="image" src="https://user-images.githubusercontent.com/81334995/179250784-b24718ed-c5d9-4784-b9c3-b97f82d3ac73.png">

### Sorter

This program that takes a list of `int`s as arguments:

```bash
$ ./push_swap 7 1 8 9 4 2 6 5 3
```

Parses them into `stack a`:

```elixir
|A: (top) 7 1 8 9 4 2 6 5 3 (bottom)|
|B: (top) (bottom)|
```

Then sorts them with `stack b` and the operations:

- `sa` (swap a): Swap the first 2 elements at the top of `stack a`:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
sa
|A: (top) 6 2 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
```

- `sb` (swap b): Swap the first 2 elements at the top of `stack b`:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
sb
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 1 7 8 9 4 (bottom)|
```

- `ss` : `sa` and `sb` at the same time:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
sb
|A: (top) 6 2 5 3 (bottom)|
|B: (top) 1 7 8 9 4 (bottom)|
```

- `pa` (push a): Take the first element at the top of b and put it at the top of a:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
pa
|A: (top) 7 2 6 5 3 (bottom)|
|B: (top) 1 8 9 4 (bottom)|
```

- `pb` (push b): Take the first element at the top of a and put it at the top of b:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
pa
|A: (top) 6 5 3 (bottom)|
|B: (top) 2 7 1 8 9 4 (bottom)|
```

- `ra` (rotate a): The first element becomes the last one:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
ra
|A: (top) 6 5 3 2 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
```

- `rb` (rotate b): The first element becomes the last one:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
rb
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 1 8 9 4 7 (bottom)|
```

- `rr` : `ra` and `rb` at the same time:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
rr
|A: (top) 6 5 3 2 (bottom)|
|B: (top) 1 8 9 4 7 (bottom)|
```

- `rra` (reverse rotate a): The last element becomes the first one:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
rra
|A: (top) 3 2 6 5 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
```

- `rrb` (reverse rotate b): The last element becomes the first one:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|

|A: (top) 2 6 5 3 (bottom)|
|B: (top) 4 7 1 8 9 (bottom)|
```

- `rrr` : `rra` and `rrb` at the same time:

```elixir
|A: (top) 2 6 5 3 (bottom)|
|B: (top) 7 1 8 9 4 (bottom)|
rrr
|A: (top) 3 2 6 5 (bottom)|
|B: (top) 4 7 1 8 9 (bottom)|
```

`stack a` must be sorted from smallest to largest:

```elixir
|A: (top) 0 1 2 3 4 5 6 7 8 (bottom)|
|B: (top) (bottom)|
Is sorted: YES
```
I enjoyed the project and learned a lot about Data Structure, doubly linked lists, circular linked list and sorting algorithms :D


# FizzBuzz

C++ based FizzBuzz implementation

## Dependencies:
    [Meson](http://mesonbuild.com/)
    [Ninja build](https://ninja-build.org/)

## Limitations

Since the sequence generated is Fibonacci, the primality test is based on a
short list of known Fibonacci primes. The selected list is [OEISA005478](https://oeis.org/A005478)

# Build:
  ```
  meson build && ninja -C build
  ```

## Run
```
./build/fizzbuzz N
```

## Tests
```
./build/test/catch
```


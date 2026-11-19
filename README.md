# ЛР № 2 — arraylib

Проект восстановлен из листингов приложения А предоставленного отчёта ЛР № 2. История Git и результаты GitHub Actions не прилагаются.

В WSL Ubuntu:

```bash
cmake -S . -B build
cmake --build build -j
./build/app
./build/variant_10
ctest --test-dir build --output-on-failure
```

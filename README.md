When a function, called in a stream to a boostlog record, also logs something, the record will show the log level of the log call in the nested function.
Yet, it filters correctly.

To run this bug replication:

```bash
g++ -DBOOST_LOG_DYN_LINK -o main main.cpp -lboost_log
```


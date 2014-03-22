# Dates

Date and time support is what separates a good language from a poor one.

Good implementations of Date and Time are:

* Apple [**NSDate**](https://developer.apple.com/library/mac/documentation/Cocoa/Reference/Foundation/Classes/NSDate_Class/Reference/Reference.html).
* [**JodaTime**](http://www.joda.org/joda-time/).

## Investigation

1. If there is a field called "Date", that is what most people will and *should* use. Dates should be stored as the number of seconds (or nanoseconds) since some epoch, *ignoring leap seconds*. Leap seconds a presentational issue, they are not part of physics.

2. There are three main areas: **physical time** (Date timestamps, time intervals, etc), **calendar time** (Days, Months, Years, Weeks, "what is 10 weeks from this date?", etc), **presentational time** (print this timestamp as a string, parse this string).

3. There are also differing resolutions on *both ends* involved, for instance if we're talking about *days*, then we might not want to be concerned with *seconds*. Similarly, we might not care about years, we just want to talk about December 25th generally. Or 11am on the 11th of November.

## Date

There are some decisions we have to make:

1. Do we include leap seconds in timestamps. I am convinced that a timestamp ideally should not care about leap seconds, as leap seconds are presentational -- a human invention, not a physical property. *However*, do OSs play ball here? Unix time is a bit of a clusterfuck: some OSs will stretch out a leap second over an extended period so that timestamps work properly. This fucks up any kind of good consistent timekeeping.

2. How do we store time? uint64 would seem to make sense. Apple uses doubles for time, which admittedly is convenient because you can (say) multiply them by a double. How would we handle that with uint64? We'd have to use long doubles (which don't exist everywhere)
    
    operator * (TimeDelta d, Real x) {
        long double scaled = d.val * (long double)x;
        return TimeDelta( (uint64_t)scaled );
    }
    
    Does Clang have a way to *force* that long double is at least 80 bits?

## Stopwatch

It would be nice to have a Stopwatch type to measure how long things take to run. We also need timers to perform code after a certain amount of time.

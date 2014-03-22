using Bool = bool;


// Integral types
using Int = ptrdiff_t;
using Int8 = signed char;
using Int16 = int16_t;
using Int32 = int32_t;
using Int64 = int64_t;

using UInt = size_t;
using Byte = unsigned char;
using UInt16 = uint16_t;
using UInt32 = uint32_t;
using UInt64 = uint64_t;


// Floating types
using Half = float;
using Real = double;


// Complex numbers
template<typename T>
using Complex = std::complex<T>;

using Cpx = Complex<Real>;


// String types
using Codepoint = UInt32;
using String = std::string;
using Grapheme = String; // Grapheme clusters are just strings.


// Misc types
using Bytes = std::vector<char>;
using Tuple = std::tuple;
using Func = std::function;


// Collection types
template<typename T>
using List = std::vector<T>;

template<typename K, typename V>
using Map = std::map<K, V>;

template<typename K, typename V>
using Dict = std::unordered_map<K, V>;

template<typename T>
using SortedSet = std::set<T>;

template<typename T>
using Set = std::unordered_set<T>;

template<typename T>
// SortedCounter would be confusing because counters are usually sorted by *value*, whereas this is a key-based sorting.
using SortedBag = std::multiset<T>;

template<typename T>
// Named "Counter" instead of "Bag" because nobody ever thinks to use a "Bag".
using Counter = std::unordered_multiset<T>;

template<typename T>
using MultiMap = std::multimap<T>;

template<typename T>
using MultiDict = std::unordered_multimap<T>;

template<typename T>
using Deque = std::deque<T>;

// WANTED: Range, a range of integers.
// WANTED: Stack, Queue, but less shitty than the C++ ones.
// WANTED: io streams, but less shitty than in C++.
// WANTED: Error(T), our maybe/optional type.
// WANTED: Bits, companion to Bytes roughly equivalent to std::vector<bool> or boost:dynamic_bitset.
// WANTED: Big, arbitrary width integer.
// WANTED: Rational -- Rat
// WANTED: Decimal -- Dec
// WANTED: Vector (mathematical), Vec2 = Vector2(Real), Vec3 = Vector3(Real), ...
// WANTED: Matrix, Mat = Matrix(Real)
// WANTED: Quarternion, Qh = Quarternion(Real)
// WANTED: RingBuffer
// WANTED: Heap/priority queues
// WANTED: date and time.   Date (timestamp from 1 Jan 1970 no leap seconds), Days, TimeDelta, Calendar. See: Apple NSDate*, JodaTime. Do not see: Python datetime.

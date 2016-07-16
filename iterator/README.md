Since the non-class pointer can't add any member like value_type, 

we can't just use the nested-type trick to let the compiler to detemine what the value_type should be.

The partial specialization way make it possible for all the input type,

just to partial specialize the non-class template and let the compiler to determine what type should be.

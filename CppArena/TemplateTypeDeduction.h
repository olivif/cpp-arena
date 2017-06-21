#pragma once

template <class T>
void DoSomething(T);

template <class T>
void DoSomethingReference(T&);

template <class T>
void DoSomethingUniversalReference(T&&);

template <class T>
void DoSomethingPointer(T*);

template<class T>
inline void DoSomething(T)
{
}

template<class T>
inline void DoSomethingReference(T &)
{
}

template<class T>
inline void DoSomethingUniversalReference(T &&)
{
}

template<class T>
inline void DoSomethingPointer(T *)
{
}

package io.sentry;

import java.io.Serializable;
import java.util.Collection;
import java.util.Iterator;
import java.util.Queue;

/* loaded from: classes3.dex */
public final class m6 implements Queue, Collection, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final f f11677d;

    /* renamed from: e, reason: collision with root package name */
    public final io.sentry.util.a f11678e = new io.sentry.util.a();

    public m6(f fVar) {
        this.f11677d = fVar;
    }

    @Override // java.util.Queue, java.util.Collection
    public final boolean add(Object obj) {
        r a = this.f11678e.a();
        try {
            boolean add = this.f11677d.add(obj);
            a.close();
            return add;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean addAll(Collection collection) {
        r a = this.f11678e.a();
        try {
            boolean addAll = this.f11677d.addAll(collection);
            a.close();
            return addAll;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final void clear() {
        r a = this.f11678e.a();
        try {
            this.f11677d.clear();
            a.close();
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean contains(Object obj) {
        r a = this.f11678e.a();
        try {
            boolean contains = this.f11677d.contains(obj);
            a.close();
            return contains;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean containsAll(Collection collection) {
        r a = this.f11678e.a();
        try {
            boolean containsAll = this.f11677d.containsAll(collection);
            a.close();
            return containsAll;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Queue
    public final Object element() {
        r a = this.f11678e.a();
        try {
            Object element = this.f11677d.element();
            a.close();
            return element;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        r a = this.f11678e.a();
        try {
            boolean equals = this.f11677d.equals(obj);
            a.close();
            return equals;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final int hashCode() {
        r a = this.f11678e.a();
        try {
            int hashCode = this.f11677d.hashCode();
            a.close();
            return hashCode;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean isEmpty() {
        r a = this.f11678e.a();
        try {
            boolean isEmpty = this.f11677d.isEmpty();
            a.close();
            return isEmpty;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        return this.f11677d.iterator();
    }

    @Override // java.util.Queue
    public final boolean offer(Object obj) {
        r a = this.f11678e.a();
        try {
            boolean offer = this.f11677d.offer(obj);
            a.close();
            return offer;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Queue
    public final Object peek() {
        r a = this.f11678e.a();
        try {
            Object peek = this.f11677d.peek();
            a.close();
            return peek;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Queue
    public final Object poll() {
        r a = this.f11678e.a();
        try {
            Object poll = this.f11677d.poll();
            a.close();
            return poll;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Queue
    public final Object remove() {
        r a = this.f11678e.a();
        try {
            Object remove = this.f11677d.remove();
            a.close();
            return remove;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean removeAll(Collection collection) {
        r a = this.f11678e.a();
        try {
            boolean removeAll = this.f11677d.removeAll(collection);
            a.close();
            return removeAll;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean retainAll(Collection collection) {
        r a = this.f11678e.a();
        try {
            boolean retainAll = this.f11677d.retainAll(collection);
            a.close();
            return retainAll;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final int size() {
        r a = this.f11678e.a();
        try {
            int size = this.f11677d.size();
            a.close();
            return size;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final Object[] toArray() {
        r a = this.f11678e.a();
        try {
            Object[] array = this.f11677d.toArray();
            a.close();
            return array;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final String toString() {
        r a = this.f11678e.a();
        try {
            String obj = this.f11677d.toString();
            a.close();
            return obj;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final boolean remove(Object obj) {
        r a = this.f11678e.a();
        try {
            boolean remove = this.f11677d.remove(obj);
            a.close();
            return remove;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    @Override // java.util.Collection
    public final Object[] toArray(Object[] objArr) {
        r a = this.f11678e.a();
        try {
            Object[] array = this.f11677d.toArray(objArr);
            a.close();
            return array;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}

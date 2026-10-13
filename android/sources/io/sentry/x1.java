package io.sentry;

import java.io.Closeable;
import java.io.IOException;
import java.io.Reader;
import java.util.AbstractMap;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
public final class x1 implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12074d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Object f12075e;

    public x1(Reader reader) {
        this.f12075e = new io.sentry.vendor.gson.stream.a(reader);
    }

    public final Float A() {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() != io.sentry.vendor.gson.stream.b.NULL) {
                    return Float.valueOf(x());
                }
                aVar.V();
                return null;
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return Float.valueOf(((Number) n02).floatValue());
                }
                return null;
        }
    }

    public final int C() {
        switch (this.f12074d) {
            case 0:
                return ((io.sentry.vendor.gson.stream.a) this.f12075e).P();
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return ((Number) n02).intValue();
                }
                throw new IOException("Expected int");
        }
    }

    public final Integer P() {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() != io.sentry.vendor.gson.stream.b.NULL) {
                    return Integer.valueOf(aVar.P());
                }
                aVar.V();
                return null;
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return Integer.valueOf(((Number) n02).intValue());
                }
                return null;
        }
    }

    public final ArrayList Q(ILogger iLogger, n1 n1Var) {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() == io.sentry.vendor.gson.stream.b.NULL) {
                    aVar.V();
                    return null;
                }
                aVar.c();
                ArrayList arrayList = new ArrayList();
                if (aVar.r()) {
                    do {
                        try {
                            arrayList.add(n1Var.a(this, iLogger));
                        } catch (Exception e9) {
                            iLogger.k(SentryLevel.WARNING, "Failed to deserialize object in list.", e9);
                        }
                    } while (aVar.j0() == io.sentry.vendor.gson.stream.b.BEGIN_OBJECT);
                }
                aVar.l();
                return arrayList;
            default:
                if (o0() == io.sentry.vendor.gson.stream.b.NULL) {
                    if (n0() == null) {
                        return null;
                    }
                    throw new IOException("Expected null but was " + o0());
                }
                try {
                    c();
                    ArrayList arrayList2 = new ArrayList();
                    if (l()) {
                        do {
                            try {
                                arrayList2.add(n1Var.a(this, iLogger));
                            } catch (Exception e10) {
                                iLogger.k(SentryLevel.WARNING, "Failed to deserialize object in list.", e10);
                            }
                        } while (o0() == io.sentry.vendor.gson.stream.b.BEGIN_OBJECT);
                    }
                    g();
                    return arrayList2;
                } catch (Exception e11) {
                    throw new IOException(e11);
                }
        }
    }

    public final long R() {
        switch (this.f12074d) {
            case 0:
                return ((io.sentry.vendor.gson.stream.a) this.f12075e).Q();
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return ((Number) n02).longValue();
                }
                throw new IOException("Expected long");
        }
    }

    public final Long U() {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() != io.sentry.vendor.gson.stream.b.NULL) {
                    return Long.valueOf(aVar.Q());
                }
                aVar.V();
                return null;
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return Long.valueOf(((Number) n02).longValue());
                }
                return null;
        }
    }

    public final HashMap V(ILogger iLogger, n1 n1Var) {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() == io.sentry.vendor.gson.stream.b.NULL) {
                    aVar.V();
                    return null;
                }
                aVar.f();
                HashMap hashMap = new HashMap();
                if (aVar.r()) {
                    while (true) {
                        try {
                            hashMap.put(aVar.R(), n1Var.a(this, iLogger));
                        } catch (Exception e9) {
                            iLogger.k(SentryLevel.WARNING, "Failed to deserialize object in map.", e9);
                        }
                        if (aVar.j0() == io.sentry.vendor.gson.stream.b.BEGIN_OBJECT || aVar.j0() == io.sentry.vendor.gson.stream.b.NAME) {
                        }
                    }
                }
                aVar.o();
                return hashMap;
            default:
                if (o0() == io.sentry.vendor.gson.stream.b.NULL) {
                    if (n0() == null) {
                        return null;
                    }
                    throw new IOException("Expected null but was " + o0());
                }
                try {
                    f();
                    HashMap hashMap2 = new HashMap();
                    if (l()) {
                        while (true) {
                            try {
                                hashMap2.put(X(), n1Var.a(this, iLogger));
                            } catch (Exception e10) {
                                iLogger.k(SentryLevel.WARNING, "Failed to deserialize object in map.", e10);
                            }
                            if (o0() == io.sentry.vendor.gson.stream.b.BEGIN_OBJECT || o0() == io.sentry.vendor.gson.stream.b.NAME) {
                            }
                        }
                    }
                    i();
                    return hashMap2;
                } catch (Exception e11) {
                    throw new IOException(e11);
                }
        }
    }

    public final String X() {
        switch (this.f12074d) {
            case 0:
                return ((io.sentry.vendor.gson.stream.a) this.f12075e).R();
            default:
                Map.Entry entry = (Map.Entry) ((ArrayDeque) this.f12075e).peekLast();
                if (entry != null && entry.getKey() != null) {
                    return (String) entry.getKey();
                }
                throw new IOException("Expected a name but was " + o0());
        }
    }

    public final Object b0() {
        switch (this.f12074d) {
            case 0:
                w1 w1Var = new w1(0);
                w1Var.e(this);
                r1 b10 = w1Var.b();
                if (b10 != null) {
                    return b10.getValue();
                }
                return null;
            default:
                return n0();
        }
    }

    public final void c() {
        switch (this.f12074d) {
            case 0:
                ((io.sentry.vendor.gson.stream.a) this.f12075e).c();
                return;
            default:
                ArrayDeque arrayDeque = (ArrayDeque) this.f12075e;
                Map.Entry entry = (Map.Entry) arrayDeque.removeLast();
                if (entry == null) {
                    throw new IOException("No more entries");
                }
                Object value = entry.getValue();
                if (!(value instanceof List)) {
                    throw new IOException("Current token is not an object");
                }
                arrayDeque.addLast(new AbstractMap.SimpleEntry(null, io.sentry.vendor.gson.stream.b.END_ARRAY));
                List list = (List) value;
                for (int size = list.size() - 1; size >= 0; size--) {
                    arrayDeque.addLast(new AbstractMap.SimpleEntry(null, list.get(size)));
                }
                return;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        switch (this.f12074d) {
            case 0:
                ((io.sentry.vendor.gson.stream.a) this.f12075e).close();
                break;
            default:
                ((ArrayDeque) this.f12075e).clear();
                break;
        }
    }

    public final Object d0(ILogger iLogger, n1 n1Var) {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() != io.sentry.vendor.gson.stream.b.NULL) {
                    return n1Var.a(this, iLogger);
                }
                aVar.V();
                return null;
            default:
                ArrayDeque arrayDeque = (ArrayDeque) this.f12075e;
                Map.Entry entry = (Map.Entry) arrayDeque.peekLast();
                if (entry == null) {
                    return null;
                }
                Object value = entry.getValue();
                if (iLogger != null) {
                    return n1Var.a(this, iLogger);
                }
                arrayDeque.removeLast();
                return value;
        }
    }

    public final void f() {
        switch (this.f12074d) {
            case 0:
                ((io.sentry.vendor.gson.stream.a) this.f12075e).f();
                return;
            default:
                ArrayDeque arrayDeque = (ArrayDeque) this.f12075e;
                Map.Entry entry = (Map.Entry) arrayDeque.removeLast();
                if (entry == null) {
                    throw new IOException("No more entries");
                }
                Object value = entry.getValue();
                if (!(value instanceof Map)) {
                    throw new IOException("Current token is not an object");
                }
                arrayDeque.addLast(new AbstractMap.SimpleEntry(null, io.sentry.vendor.gson.stream.b.END_OBJECT));
                Iterator it = ((Map) value).entrySet().iterator();
                while (it.hasNext()) {
                    arrayDeque.addLast((Map.Entry) it.next());
                }
                return;
        }
    }

    public final void g() {
        switch (this.f12074d) {
            case 0:
                ((io.sentry.vendor.gson.stream.a) this.f12075e).l();
                break;
            default:
                ArrayDeque arrayDeque = (ArrayDeque) this.f12075e;
                if (arrayDeque.size() > 1) {
                    arrayDeque.removeLast();
                    break;
                }
                break;
        }
    }

    public final void i() {
        switch (this.f12074d) {
            case 0:
                ((io.sentry.vendor.gson.stream.a) this.f12075e).o();
                break;
            default:
                ArrayDeque arrayDeque = (ArrayDeque) this.f12075e;
                if (arrayDeque.size() > 1) {
                    arrayDeque.removeLast();
                    break;
                }
                break;
        }
    }

    public final String j0() {
        switch (this.f12074d) {
            case 0:
                return ((io.sentry.vendor.gson.stream.a) this.f12075e).b0();
            default:
                String str = (String) n0();
                if (str != null) {
                    return str;
                }
                throw new IOException("Expected string");
        }
    }

    public final boolean l() {
        switch (this.f12074d) {
            case 0:
                return ((io.sentry.vendor.gson.stream.a) this.f12075e).r();
            default:
                return !((ArrayDeque) this.f12075e).isEmpty();
        }
    }

    public final String l0() {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() != io.sentry.vendor.gson.stream.b.NULL) {
                    return aVar.b0();
                }
                aVar.V();
                return null;
            default:
                return (String) n0();
        }
    }

    public final void m0(ILogger iLogger, AbstractMap abstractMap, String str) {
        switch (this.f12074d) {
            case 0:
                try {
                    abstractMap.put(str, b0());
                    break;
                } catch (Exception e9) {
                    iLogger.i(SentryLevel.ERROR, e9, "Error deserializing unknown key: %s", str);
                    return;
                }
            default:
                try {
                    abstractMap.put(str, n0());
                    break;
                } catch (Exception e10) {
                    iLogger.i(SentryLevel.ERROR, e10, "Error deserializing unknown key: %s", str);
                }
        }
    }

    public Object n0() {
        try {
            ArrayDeque arrayDeque = (ArrayDeque) this.f12075e;
            Map.Entry entry = (Map.Entry) arrayDeque.peekLast();
            if (entry == null) {
                return null;
            }
            Object value = entry.getValue();
            arrayDeque.removeLast();
            return value;
        } catch (Exception e9) {
            throw new IOException(e9);
        }
    }

    public final Boolean o() {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() != io.sentry.vendor.gson.stream.b.NULL) {
                    return Boolean.valueOf(aVar.A());
                }
                aVar.V();
                return null;
            default:
                return (Boolean) n0();
        }
    }

    public final io.sentry.vendor.gson.stream.b o0() {
        switch (this.f12074d) {
            case 0:
                return ((io.sentry.vendor.gson.stream.a) this.f12075e).j0();
            default:
                ArrayDeque arrayDeque = (ArrayDeque) this.f12075e;
                if (arrayDeque.isEmpty()) {
                    return io.sentry.vendor.gson.stream.b.END_DOCUMENT;
                }
                Map.Entry entry = (Map.Entry) arrayDeque.peekLast();
                if (entry == null) {
                    return io.sentry.vendor.gson.stream.b.END_DOCUMENT;
                }
                if (entry.getKey() != null) {
                    return io.sentry.vendor.gson.stream.b.NAME;
                }
                Object value = entry.getValue();
                return value instanceof Map ? io.sentry.vendor.gson.stream.b.BEGIN_OBJECT : value instanceof List ? io.sentry.vendor.gson.stream.b.BEGIN_ARRAY : value instanceof String ? io.sentry.vendor.gson.stream.b.STRING : value instanceof Number ? io.sentry.vendor.gson.stream.b.NUMBER : value instanceof Boolean ? io.sentry.vendor.gson.stream.b.BOOLEAN : value instanceof io.sentry.vendor.gson.stream.b ? (io.sentry.vendor.gson.stream.b) value : io.sentry.vendor.gson.stream.b.END_DOCUMENT;
        }
    }

    public final void p0(boolean z5) {
        switch (this.f12074d) {
            case 0:
                ((io.sentry.vendor.gson.stream.a) this.f12075e).f12054e = z5;
                break;
        }
    }

    public final Date q(ILogger iLogger) {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() == io.sentry.vendor.gson.stream.b.NULL) {
                    aVar.V();
                    break;
                } else {
                    String b02 = aVar.b0();
                    if (b02 != null) {
                        try {
                            try {
                                break;
                            } catch (Exception unused) {
                                return ki.b.u(b02);
                            }
                        } catch (Exception e9) {
                            iLogger.k(SentryLevel.ERROR, "Error when deserializing millis timestamp format.", e9);
                            return null;
                        }
                    }
                }
                break;
            default:
                String str = (String) n0();
                if (str != null) {
                    try {
                        try {
                            break;
                        } catch (Exception e10) {
                            iLogger.k(SentryLevel.ERROR, "Error when deserializing millis timestamp format.", e10);
                            return null;
                        }
                    } catch (Exception unused2) {
                        return ki.b.u(str);
                    }
                }
                break;
        }
        return null;
    }

    public final double r() {
        switch (this.f12074d) {
            case 0:
                return ((io.sentry.vendor.gson.stream.a) this.f12075e).C();
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return ((Number) n02).doubleValue();
                }
                throw new IOException("Expected double");
        }
    }

    public final Double t() {
        switch (this.f12074d) {
            case 0:
                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) this.f12075e;
                if (aVar.j0() != io.sentry.vendor.gson.stream.b.NULL) {
                    return Double.valueOf(aVar.C());
                }
                aVar.V();
                return null;
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return Double.valueOf(((Number) n02).doubleValue());
                }
                return null;
        }
    }

    public final float x() {
        switch (this.f12074d) {
            case 0:
                return (float) ((io.sentry.vendor.gson.stream.a) this.f12075e).C();
            default:
                Object n02 = n0();
                if (n02 instanceof Number) {
                    return ((Number) n02).floatValue();
                }
                throw new IOException("Expected float");
        }
    }

    public x1(Map map) {
        ArrayDeque arrayDeque = new ArrayDeque();
        this.f12075e = arrayDeque;
        arrayDeque.addLast(new AbstractMap.SimpleEntry(null, map));
    }

    private final void r0() {
    }

    private final void q0(boolean z5) {
    }
}

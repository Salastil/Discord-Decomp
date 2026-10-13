package com.facebook.common.references;

import ai.k;
import android.graphics.Bitmap;
import io.sentry.hints.j;
import j8.b;
import java.io.Closeable;
import java.util.ArrayList;
import java.util.IdentityHashMap;
import java.util.Iterator;
import o8.h;
import s8.a;
import s8.c;
import s8.d;

/* loaded from: classes3.dex */
public abstract class CloseableReference implements Cloneable, Closeable {

    /* renamed from: w, reason: collision with root package name */
    public static final j f4406w;

    /* renamed from: x, reason: collision with root package name */
    public static final b f4407x;

    /* renamed from: d, reason: collision with root package name */
    public boolean f4408d = false;

    /* renamed from: e, reason: collision with root package name */
    public final d f4409e;

    /* renamed from: i, reason: collision with root package name */
    public final a f4410i;

    /* renamed from: v, reason: collision with root package name */
    public final Throwable f4411v;

    static {
        int i5 = 17;
        f4406w = new j(i5);
        f4407x = new b(i5, (byte) 0);
    }

    public CloseableReference(d dVar, a aVar, Throwable th2) {
        int i5;
        boolean z5;
        dVar.getClass();
        this.f4409e = dVar;
        synchronized (dVar) {
            synchronized (dVar) {
                i5 = dVar.f17825b;
                z5 = i5 > 0;
            }
            this.f4410i = aVar;
            this.f4411v = th2;
        }
        if (!z5) {
            throw new k("Null shared reference");
        }
        dVar.f17825b = i5 + 1;
        this.f4410i = aVar;
        this.f4411v = th2;
    }

    public static s8.b A(Closeable closeable) {
        return C(closeable, f4406w, f4407x);
    }

    public static s8.b C(Object obj, c cVar, a aVar) {
        if (obj == null) {
            return null;
        }
        aVar.l();
        if (!(obj instanceof Bitmap)) {
            boolean z5 = obj instanceof oa.c;
        }
        return new s8.b(obj, cVar, aVar, null, true);
    }

    public static CloseableReference g(CloseableReference closeableReference) {
        if (closeableReference != null) {
            return closeableReference.f();
        }
        return null;
    }

    public static void l(CloseableReference closeableReference) {
        if (closeableReference != null) {
            closeableReference.close();
        }
    }

    public static void o(ArrayList arrayList) {
        if (arrayList != null) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                l((CloseableReference) it.next());
            }
        }
    }

    public static boolean t(CloseableReference closeableReference) {
        return closeableReference != null && closeableReference.r();
    }

    @Override // 
    /* renamed from: c, reason: merged with bridge method [inline-methods] */
    public abstract CloseableReference clone();

    /* JADX WARN: Removed duplicated region for block: B:27:0x002b  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0075 A[ORIG_RETURN, RETURN] */
    @Override // java.io.Closeable, java.lang.AutoCloseable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void close() {
        int i5;
        boolean z5;
        int i6;
        Object obj;
        synchronized (this) {
            try {
                if (this.f4408d) {
                    return;
                }
                this.f4408d = true;
                d dVar = this.f4409e;
                synchronized (dVar) {
                    synchronized (dVar) {
                        i5 = dVar.f17825b;
                        z5 = i5 > 0;
                    }
                    if (i6 != 0) {
                        synchronized (dVar) {
                            obj = dVar.a;
                            dVar.a = null;
                        }
                        if (obj != null) {
                            c cVar = dVar.f17826c;
                            if (cVar != null) {
                                cVar.release(obj);
                            }
                            IdentityHashMap identityHashMap = d.f17824d;
                            synchronized (identityHashMap) {
                                try {
                                    Integer num = (Integer) identityHashMap.get(obj);
                                    if (num == null) {
                                        p8.a.z("SharedReference", "No entry in sLiveObjects for value of type %s", obj.getClass());
                                    } else if (num.intValue() == 1) {
                                        identityHashMap.remove(obj);
                                    } else {
                                        identityHashMap.put(obj, Integer.valueOf(num.intValue() - 1));
                                    }
                                } finally {
                                }
                            }
                            return;
                        }
                        return;
                    }
                    return;
                }
                if (!z5) {
                    throw new k("Null shared reference");
                }
                if (!(i5 > 0)) {
                    throw new IllegalArgumentException();
                }
                i6 = dVar.f17825b - 1;
                dVar.f17825b = i6;
                if (i6 != 0) {
                }
            } finally {
            }
        }
    }

    public synchronized CloseableReference f() {
        if (!r()) {
            return null;
        }
        return clone();
    }

    public final synchronized Object q() {
        Object a;
        h.e(!this.f4408d);
        a = this.f4409e.a();
        a.getClass();
        return a;
    }

    public synchronized boolean r() {
        return !this.f4408d;
    }

    public CloseableReference(Object obj, c cVar, a aVar, Throwable th2, boolean z5) {
        this.f4409e = new d(obj, cVar, z5);
        this.f4410i = aVar;
        this.f4411v = th2;
    }
}

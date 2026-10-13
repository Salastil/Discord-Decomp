package io.sentry;

import java.io.Closeable;
import java.util.AbstractMap;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class a2 implements b0, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final v5 f11004d;

    /* renamed from: e, reason: collision with root package name */
    public final u4.b f11005e;

    /* renamed from: i, reason: collision with root package name */
    public final gj.c f11006i;

    /* renamed from: v, reason: collision with root package name */
    public volatile i0 f11007v = null;

    public a2(v5 v5Var) {
        this.f11004d = v5Var;
        ha.l lVar = new ha.l(v5Var);
        this.f11006i = new gj.c(17, lVar);
        this.f11005e = new u4.b(18, lVar);
    }

    @Override // io.sentry.b0
    public final x5 c(x5 x5Var, Hint hint) {
        if (x5Var.E == null) {
            x5Var.E = "java";
        }
        if (l(x5Var, hint)) {
            i(x5Var);
            io.sentry.protocol.t tVar = this.f11004d.getSessionReplay().f12112m;
            if (tVar != null) {
                x5Var.f11545i = tVar;
            }
        }
        return x5Var;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f11007v != null) {
            this.f11007v.f11608f.shutdown();
        }
    }

    @Override // io.sentry.b0
    public final SentryEvent f(SentryEvent sentryEvent, Hint hint) {
        ArrayList arrayList;
        if (sentryEvent.E == null) {
            sentryEvent.E = "java";
        }
        Throwable th2 = sentryEvent.G;
        if (th2 != null) {
            gj.c cVar = this.f11006i;
            cVar.getClass();
            AtomicInteger atomicInteger = new AtomicInteger(-1);
            HashSet hashSet = new HashSet();
            ArrayDeque arrayDeque = new ArrayDeque();
            cVar.A(th2, atomicInteger, hashSet, arrayDeque, null);
            sentryEvent.Q = new e6(new ArrayList(arrayDeque));
        }
        io.sentry.protocol.d dVar = sentryEvent.K;
        v5 v5Var = this.f11004d;
        io.sentry.protocol.d a = io.sentry.protocol.d.a(dVar, v5Var);
        if (a != null) {
            sentryEvent.K = a;
        }
        Map a10 = v5Var.getModulesLoader().a();
        if (a10 != null) {
            AbstractMap abstractMap = sentryEvent.V;
            if (abstractMap == null) {
                sentryEvent.V = new HashMap(a10);
            } else {
                abstractMap.putAll(a10);
            }
        }
        if (l(sentryEvent, hint)) {
            i(sentryEvent);
            e6 e6Var = sentryEvent.P;
            if ((e6Var != null ? e6Var.a : null) == null) {
                ArrayList d6 = sentryEvent.d();
                if (d6 == null || d6.isEmpty()) {
                    arrayList = null;
                } else {
                    Iterator it = d6.iterator();
                    arrayList = null;
                    while (it.hasNext()) {
                        io.sentry.protocol.u uVar = (io.sentry.protocol.u) it.next();
                        if (uVar.f11893x != null && uVar.f11891v != null) {
                            if (arrayList == null) {
                                arrayList = new ArrayList();
                            }
                            arrayList.add(uVar.f11891v);
                        }
                    }
                }
                boolean isAttachThreads = v5Var.isAttachThreads();
                boolean z5 = false;
                u4.b bVar = this.f11005e;
                if (isAttachThreads || io.sentry.hints.a.class.isInstance(hint.b("sentry:typeCheckHint"))) {
                    Object b10 = hint.b("sentry:typeCheckHint");
                    boolean isAttachStacktrace = v5Var.isAttachStacktrace();
                    if (b10 instanceof io.sentry.hints.a) {
                        z5 = ((io.sentry.hints.a) b10).b();
                        isAttachStacktrace = true;
                    }
                    bVar.getClass();
                    sentryEvent.P = new e6(bVar.l(Thread.getAllStackTraces(), arrayList, z5, isAttachStacktrace));
                } else if (v5Var.isAttachStacktrace() && ((d6 == null || d6.isEmpty()) && !io.sentry.hints.d.class.isInstance(hint.b("sentry:typeCheckHint")))) {
                    boolean isAttachStacktrace2 = v5Var.isAttachStacktrace();
                    bVar.getClass();
                    HashMap hashMap = new HashMap();
                    Thread currentThread = Thread.currentThread();
                    hashMap.put(currentThread, currentThread.getStackTrace());
                    sentryEvent.P = new e6(bVar.l(hashMap, null, false, isAttachStacktrace2));
                    return sentryEvent;
                }
            }
        }
        return sentryEvent;
    }

    @Override // io.sentry.b0
    public final io.sentry.protocol.d0 g(io.sentry.protocol.d0 d0Var, Hint hint) {
        if (d0Var.E == null) {
            d0Var.E = "java";
        }
        io.sentry.protocol.d a = io.sentry.protocol.d.a(d0Var.K, this.f11004d);
        if (a != null) {
            d0Var.K = a;
        }
        if (l(d0Var, hint)) {
            i(d0Var);
        }
        return d0Var;
    }

    public final void i(f4 f4Var) {
        if (f4Var.f11548x == null) {
            f4Var.f11548x = this.f11004d.getRelease();
        }
        if (f4Var.f11549y == null) {
            f4Var.f11549y = this.f11004d.getEnvironment();
        }
        if (f4Var.H == null) {
            f4Var.H = this.f11004d.getServerName();
        }
        if (this.f11004d.isAttachServerName() && f4Var.H == null) {
            if (this.f11007v == null) {
                if (i0.f11603i == null) {
                    r a = i0.j.a();
                    try {
                        if (i0.f11603i == null) {
                            i0.f11603i = new i0();
                        }
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
                this.f11007v = i0.f11603i;
            }
            if (this.f11007v != null) {
                i0 i0Var = this.f11007v;
                if (i0Var.f11605c < System.currentTimeMillis() && i0Var.f11606d.compareAndSet(false, true)) {
                    i0Var.a();
                }
                f4Var.H = i0Var.f11604b;
            }
        }
        if (f4Var.I == null) {
            f4Var.I = this.f11004d.getDist();
        }
        if (f4Var.f11545i == null) {
            f4Var.f11545i = this.f11004d.getSdkVersion();
        }
        v5 v5Var = this.f11004d;
        if (f4Var.f11547w == null) {
            f4Var.f11547w = new HashMap(new HashMap(v5Var.getTags()));
        } else {
            for (Map.Entry<String, String> entry : v5Var.getTags().entrySet()) {
                if (!f4Var.f11547w.containsKey(entry.getKey())) {
                    f4Var.c(entry.getKey(), entry.getValue());
                }
            }
        }
        io.sentry.protocol.h0 h0Var = f4Var.F;
        if (h0Var == null) {
            h0Var = new io.sentry.protocol.h0();
            f4Var.F = h0Var;
        }
        if (h0Var.f11799v == null && this.f11004d.isSendDefaultPii()) {
            h0Var.f11799v = "{{auto}}";
        }
    }

    public final boolean l(f4 f4Var, Hint hint) {
        if (a5.k0.U(hint)) {
            return true;
        }
        this.f11004d.getLogger().u(SentryLevel.DEBUG, "Event was cached so not applying data relevant to the current app execution/version: %s", f4Var.f11543d);
        return false;
    }
}

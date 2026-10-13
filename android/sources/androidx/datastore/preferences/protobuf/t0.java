package androidx.datastore.preferences.protobuf;

import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes.dex */
public final class t0 {

    /* renamed from: c, reason: collision with root package name */
    public static final t0 f1812c = new t0();

    /* renamed from: b, reason: collision with root package name */
    public final ConcurrentHashMap f1813b = new ConcurrentHashMap();
    public final f0 a = new f0();

    public final w0 a(Class cls) {
        w0 w5;
        Class cls2;
        v.a(cls, "messageType");
        ConcurrentHashMap concurrentHashMap = this.f1813b;
        w0 w0Var = (w0) concurrentHashMap.get(cls);
        if (w0Var != null) {
            return w0Var;
        }
        f0 f0Var = this.a;
        f0Var.getClass();
        Class cls3 = x0.a;
        if (!t.class.isAssignableFrom(cls) && (cls2 = x0.a) != null && !cls2.isAssignableFrom(cls)) {
            throw new IllegalArgumentException("Message classes must extend GeneratedMessage or GeneratedMessageLite");
        }
        v0 a = ((e0) f0Var.a).a(cls);
        int i5 = a.f1820d;
        a aVar = a.a;
        if ((i5 & 2) == 2) {
            if (t.class.isAssignableFrom(cls)) {
                w5 = new o0(x0.f1836d, n.a, aVar);
            } else {
                f1 f1Var = x0.f1834b;
                m mVar = n.f1776b;
                if (mVar == null) {
                    throw new IllegalStateException("Protobuf runtime is not correctly loaded.");
                }
                w5 = new o0(f1Var, mVar, aVar);
            }
        } else if (t.class.isAssignableFrom(cls)) {
            w5 = (a.f1820d & 1) == 1 ? n0.w(a, q0.f1808b, d0.f1733b, x0.f1836d, n.a, k0.f1772b) : n0.w(a, q0.f1808b, d0.f1733b, x0.f1836d, null, k0.f1772b);
        } else if ((a.f1820d & 1) == 1) {
            p0 p0Var = q0.a;
            b0 b0Var = d0.a;
            f1 f1Var2 = x0.f1834b;
            m mVar2 = n.f1776b;
            if (mVar2 == null) {
                throw new IllegalStateException("Protobuf runtime is not correctly loaded.");
            }
            w5 = n0.w(a, p0Var, b0Var, f1Var2, mVar2, k0.a);
        } else {
            w5 = n0.w(a, q0.a, d0.a, x0.f1835c, null, k0.a);
        }
        w0 w0Var2 = (w0) concurrentHashMap.putIfAbsent(cls, w5);
        return w0Var2 != null ? w0Var2 : w5;
    }
}

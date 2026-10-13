package ij;

import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class n0 {

    /* renamed from: c, reason: collision with root package name */
    public static final n0 f10907c = new n0();

    /* renamed from: b, reason: collision with root package name */
    public final ConcurrentHashMap f10908b = new ConcurrentHashMap();
    public final c0 a = new c0();

    public final q0 a(Class cls) {
        q0 u5;
        Class cls2;
        t.a(cls, "messageType");
        ConcurrentHashMap concurrentHashMap = this.f10908b;
        q0 q0Var = (q0) concurrentHashMap.get(cls);
        if (q0Var != null) {
            return q0Var;
        }
        c0 c0Var = this.a;
        c0Var.getClass();
        Class cls3 = r0.a;
        if (!r.class.isAssignableFrom(cls) && (cls2 = r0.a) != null && !cls2.isAssignableFrom(cls)) {
            throw new IllegalArgumentException("Message classes must extend GeneratedMessageV3 or GeneratedMessageLite");
        }
        p0 a = c0Var.a.a(cls);
        int i5 = a.f10917d;
        b bVar = a.a;
        if ((i5 & 2) == 2) {
            if (r.class.isAssignableFrom(cls)) {
                u5 = new k0(r0.f10922c, n.a, bVar);
            } else {
                u0 u0Var = r0.f10921b;
                m mVar = n.f10906b;
                if (mVar == null) {
                    throw new IllegalStateException("Protobuf runtime is not correctly loaded.");
                }
                u5 = new k0(u0Var, mVar, bVar);
            }
        } else if (r.class.isAssignableFrom(cls)) {
            u5 = f0.e.b(a.a()) != 1 ? j0.u(a, m0.f10905b, a0.f10842b, r0.f10922c, n.a, g0.f10862b) : j0.u(a, m0.f10905b, a0.f10842b, r0.f10922c, null, g0.f10862b);
        } else if (f0.e.b(a.a()) != 1) {
            l0 l0Var = m0.a;
            y yVar = a0.a;
            u0 u0Var2 = r0.f10921b;
            m mVar2 = n.f10906b;
            if (mVar2 == null) {
                throw new IllegalStateException("Protobuf runtime is not correctly loaded.");
            }
            u5 = j0.u(a, l0Var, yVar, u0Var2, mVar2, g0.a);
        } else {
            u5 = j0.u(a, m0.a, a0.a, r0.f10921b, null, g0.a);
        }
        q0 q0Var2 = (q0) concurrentHashMap.putIfAbsent(cls, u5);
        return q0Var2 != null ? q0Var2 : u5;
    }
}

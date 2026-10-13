package ni;

import java.util.ArrayDeque;
import java.util.HashMap;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class k implements vi.b, vi.a {
    public final HashMap a;

    /* renamed from: b, reason: collision with root package name */
    public ArrayDeque f15499b;

    /* renamed from: c, reason: collision with root package name */
    public final oi.i f15500c;

    public k() {
        oi.i iVar = oi.i.f15997d;
        this.a = new HashMap();
        this.f15499b = new ArrayDeque();
        this.f15500c = iVar;
    }

    public final void a(com.google.firebase.messaging.m mVar) {
        oi.i iVar = this.f15500c;
        synchronized (this) {
            try {
                iVar.getClass();
                if (!this.a.containsKey(ki.b.class)) {
                    this.a.put(ki.b.class, new ConcurrentHashMap());
                }
                ((ConcurrentHashMap) this.a.get(ki.b.class)).put(mVar, iVar);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}

package p;

import java.util.HashMap;

/* loaded from: classes.dex */
public final class a extends f {

    /* renamed from: w, reason: collision with root package name */
    public final HashMap f16245w = new HashMap();

    @Override // p.f
    public final c a(Object obj) {
        return (c) this.f16245w.get(obj);
    }

    @Override // p.f
    public final Object b(Object obj) {
        Object b10 = super.b(obj);
        this.f16245w.remove(obj);
        return b10;
    }
}

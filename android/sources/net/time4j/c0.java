package net.time4j;

import java.io.InvalidObjectException;

/* loaded from: classes3.dex */
public final class c0 extends a {
    private static final long serialVersionUID = 2055272540517425102L;

    /* renamed from: d, reason: collision with root package name */
    public final transient Class f15229d;

    /* renamed from: e, reason: collision with root package name */
    public final transient Enum f15230e;

    /* renamed from: i, reason: collision with root package name */
    public final transient Enum f15231i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f15232v;

    public c0(String str, Class cls, Enum r32, Enum r42, int i5, char c6) {
        super(str);
        this.f15229d = cls;
        this.f15230e = r32;
        this.f15231i = r42;
        this.f15232v = i5;
    }

    private Object readResolve() {
        Object obj = w0.U.get(name());
        if (obj != null) {
            return obj;
        }
        throw new InvalidObjectException(name());
    }

    @Override // ks.d
    public final Object a() {
        return this.f15231i;
    }

    @Override // ks.d
    public final Class getType() {
        return this.f15229d;
    }

    @Override // ks.d
    public final boolean i() {
        return true;
    }

    @Override // ks.a
    public final boolean l() {
        return true;
    }

    @Override // ks.d
    public final Object v() {
        return this.f15230e;
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}

package net.time4j;

import java.io.InvalidObjectException;

/* loaded from: classes3.dex */
public final class e0 extends b {
    private static final long serialVersionUID = -1337148214680014674L;

    /* renamed from: d, reason: collision with root package name */
    public final transient int f15244d;

    /* renamed from: e, reason: collision with root package name */
    public final transient Integer f15245e;

    /* renamed from: i, reason: collision with root package name */
    public final transient Integer f15246i;

    public e0(String str, int i5, Integer num, Integer num2, char c6) {
        super(str);
        this.f15244d = i5;
        this.f15245e = num;
        this.f15246i = num2;
    }

    public static e0 m(String str, boolean z5) {
        return new e0(str, z5 ? 2 : 1, 1, Integer.valueOf(z5 ? 24 : 12), z5 ? 'k' : 'h');
    }

    public static e0 n(char c6, int i5, int i6, String str) {
        return new e0(str, i5, 0, Integer.valueOf(i6), c6);
    }

    private Object readResolve() {
        Object obj = z0.h0.get(name());
        if (obj != null) {
            return obj;
        }
        throw new InvalidObjectException(name());
    }

    @Override // ks.d
    public final Object a() {
        return this.f15246i;
    }

    @Override // ks.d
    public final Class getType() {
        return Integer.class;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.a
    public final boolean l() {
        return true;
    }

    @Override // ks.d
    public final Object v() {
        return this.f15245e;
    }

    @Override // ks.d
    public final boolean w() {
        return true;
    }
}

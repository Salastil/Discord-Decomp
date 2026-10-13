package net.time4j;

import java.io.InvalidObjectException;

/* loaded from: classes3.dex */
public final class d0 extends a {
    private static final long serialVersionUID = -1337148214680014674L;

    /* renamed from: d, reason: collision with root package name */
    public final transient int f15236d;

    /* renamed from: e, reason: collision with root package name */
    public final transient Integer f15237e;

    /* renamed from: i, reason: collision with root package name */
    public final transient Integer f15238i;

    public d0(String str, int i5, Integer num, Integer num2, char c6) {
        super(str);
        this.f15236d = i5;
        this.f15237e = num;
        this.f15238i = num2;
    }

    public static d0 m(char c6, int i5, int i6, int i10, String str) {
        return new d0(str, i5, Integer.valueOf(i6), Integer.valueOf(i10), c6);
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
        return this.f15238i;
    }

    @Override // ks.d
    public final Class getType() {
        return Integer.class;
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
        return this.f15237e;
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}

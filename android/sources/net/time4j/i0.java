package net.time4j;

import java.io.InvalidObjectException;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class i0 extends b {

    /* renamed from: i, reason: collision with root package name */
    public static final i0 f15254i = new i0(Long.MIN_VALUE, LongCompanionObject.MAX_VALUE, "DAY_OVERFLOW");
    private static final long serialVersionUID = 5930990958663061693L;

    /* renamed from: d, reason: collision with root package name */
    public final transient Long f15255d;

    /* renamed from: e, reason: collision with root package name */
    public final transient Long f15256e;

    public i0(long j, long j5, String str) {
        super(str);
        this.f15255d = Long.valueOf(j);
        this.f15256e = Long.valueOf(j5);
    }

    private Object readResolve() {
        Object obj = z0.h0.get(name());
        if (obj != null) {
            return obj;
        }
        if (name().equals("DAY_OVERFLOW")) {
            return f15254i;
        }
        throw new InvalidObjectException(name());
    }

    @Override // ks.d
    public final Object a() {
        return this.f15256e;
    }

    @Override // ks.d
    public final Class getType() {
        return Long.class;
    }

    @Override // ks.d
    public final boolean i() {
        return false;
    }

    @Override // ks.d
    public final Object v() {
        return this.f15255d;
    }

    @Override // ks.d
    public final boolean w() {
        return true;
    }
}

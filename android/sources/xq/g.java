package xq;

import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class g {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Function0 f20539b;

    public g(Object obj, Function0 function0) {
        this.a = obj;
        this.f20539b = function0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && g.class == obj.getClass() && this.a.equals(((g) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}

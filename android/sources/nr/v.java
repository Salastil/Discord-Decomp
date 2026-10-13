package nr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends kotlin.coroutines.a {

    /* renamed from: i, reason: collision with root package name */
    public static final t f15664i = new t();

    /* renamed from: e, reason: collision with root package name */
    public final String f15665e;

    public v() {
        super(f15664i);
        this.f15665e = "MediaEngine";
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof v) && Intrinsics.areEqual(this.f15665e, ((v) obj).f15665e);
    }

    public final int hashCode() {
        return this.f15665e.hashCode();
    }

    public final String toString() {
        return s4.h.h(new StringBuilder("CoroutineName("), this.f15665e, ')');
    }
}

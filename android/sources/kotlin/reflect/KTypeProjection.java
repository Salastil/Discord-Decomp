package kotlin.reflect;

import cp.r1;
import fo.n;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import zo.u;
import zo.v;
import zo.w;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\b\u0087\b\u0018\u0000 \u00022\u00020\u0001:\u0001\u0003¨\u0006\u0004"}, d2 = {"Lkotlin/reflect/KTypeProjection;", "", "c", "zo/u", "kotlin-stdlib"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final /* data */ class KTypeProjection {

    /* renamed from: c, reason: collision with root package name */
    @NotNull
    public static final u f13548c = new u(null);

    /* renamed from: d, reason: collision with root package name */
    public static final KTypeProjection f13549d = new KTypeProjection(null, null);
    public final w a;

    /* renamed from: b, reason: collision with root package name */
    public final KType f13550b;

    public KTypeProjection(w wVar, r1 r1Var) {
        String str;
        this.a = wVar;
        this.f13550b = r1Var;
        if ((wVar == null) == (r1Var == null)) {
            return;
        }
        if (wVar == null) {
            str = "Star projection must have no type specified.";
        } else {
            str = "The projection variance " + wVar + " requires type to be specified.";
        }
        throw new IllegalArgumentException(str.toString());
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof KTypeProjection)) {
            return false;
        }
        KTypeProjection kTypeProjection = (KTypeProjection) obj;
        return this.a == kTypeProjection.a && Intrinsics.areEqual(this.f13550b, kTypeProjection.f13550b);
    }

    public final int hashCode() {
        w wVar = this.a;
        int hashCode = (wVar == null ? 0 : wVar.hashCode()) * 31;
        KType kType = this.f13550b;
        return hashCode + (kType != null ? kType.hashCode() : 0);
    }

    public final String toString() {
        w wVar = this.a;
        int i5 = wVar == null ? -1 : v.a[wVar.ordinal()];
        if (i5 == -1) {
            return "*";
        }
        KType kType = this.f13550b;
        if (i5 == 1) {
            return String.valueOf(kType);
        }
        if (i5 == 2) {
            return "in " + kType;
        }
        if (i5 != 3) {
            throw new n();
        }
        return "out " + kType;
    }
}

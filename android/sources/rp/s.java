package rp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s {

    /* renamed from: d, reason: collision with root package name */
    public static final s f17484d = new s(c0.f17433v, 6);
    public final c0 a;

    /* renamed from: b, reason: collision with root package name */
    public final fo.k f17485b;

    /* renamed from: c, reason: collision with root package name */
    public final c0 f17486c;

    public s(c0 reportLevelBefore, fo.k kVar, c0 reportLevelAfter) {
        Intrinsics.checkNotNullParameter(reportLevelBefore, "reportLevelBefore");
        Intrinsics.checkNotNullParameter(reportLevelAfter, "reportLevelAfter");
        this.a = reportLevelBefore;
        this.f17485b = kVar;
        this.f17486c = reportLevelAfter;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof s)) {
            return false;
        }
        s sVar = (s) obj;
        return this.a == sVar.a && Intrinsics.areEqual(this.f17485b, sVar.f17485b) && this.f17486c == sVar.f17486c;
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        fo.k kVar = this.f17485b;
        return this.f17486c.hashCode() + ((hashCode + (kVar == null ? 0 : kVar.f8824v)) * 31);
    }

    public final String toString() {
        return "JavaNullabilityAnnotationsStatus(reportLevelBefore=" + this.a + ", sinceVersion=" + this.f17485b + ", reportLevelAfter=" + this.f17486c + ')';
    }

    public s(c0 c0Var, int i5) {
        this(c0Var, (i5 & 2) != 0 ? new fo.k(1, 0, 0) : null, c0Var);
    }
}

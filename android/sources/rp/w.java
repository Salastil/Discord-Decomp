package rp;

import kotlin.collections.n0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w {
    public final c0 a;

    /* renamed from: b, reason: collision with root package name */
    public final c0 f17491b;

    /* renamed from: c, reason: collision with root package name */
    public final n0 f17492c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17493d;

    public w(c0 globalLevel, c0 c0Var) {
        boolean z5;
        n0 userDefinedLevelForSpecificAnnotation = v0.d();
        Intrinsics.checkNotNullParameter(globalLevel, "globalLevel");
        Intrinsics.checkNotNullParameter(userDefinedLevelForSpecificAnnotation, "userDefinedLevelForSpecificAnnotation");
        this.a = globalLevel;
        this.f17491b = c0Var;
        this.f17492c = userDefinedLevelForSpecificAnnotation;
        fo.l.a(new cp.d0(16, this));
        c0 c0Var2 = c0.f17431e;
        if (globalLevel == c0Var2 && c0Var == c0Var2) {
            userDefinedLevelForSpecificAnnotation.getClass();
            z5 = true;
        } else {
            z5 = false;
        }
        this.f17493d = z5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof w)) {
            return false;
        }
        w wVar = (w) obj;
        return this.a == wVar.a && this.f17491b == wVar.f17491b && Intrinsics.areEqual(this.f17492c, wVar.f17492c);
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        c0 c0Var = this.f17491b;
        int hashCode2 = (hashCode + (c0Var == null ? 0 : c0Var.hashCode())) * 31;
        this.f17492c.getClass();
        return hashCode2;
    }

    public final String toString() {
        return "Jsr305Settings(globalLevel=" + this.a + ", migrationLevel=" + this.f17491b + ", userDefinedLevelForSpecificAnnotation=" + this.f17492c + ')';
    }
}

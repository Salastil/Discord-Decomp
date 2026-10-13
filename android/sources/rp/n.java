package rp;

import java.util.Collection;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n {
    public final zp.h a;

    /* renamed from: b, reason: collision with root package name */
    public final Collection f17472b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f17473c;

    public n(zp.h hVar, Collection collection) {
        this(hVar, collection, hVar.a == zp.g.f21354i);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof n)) {
            return false;
        }
        n nVar = (n) obj;
        return Intrinsics.areEqual(this.a, nVar.a) && Intrinsics.areEqual(this.f17472b, nVar.f17472b) && this.f17473c == nVar.f17473c;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f17473c) + ((this.f17472b.hashCode() + (this.a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return "JavaDefaultQualifiers(nullabilityQualifier=" + this.a + ", qualifierApplicabilityTypes=" + this.f17472b + ", definitelyNotNull=" + this.f17473c + ')';
    }

    public n(zp.h nullabilityQualifier, Collection qualifierApplicabilityTypes, boolean z5) {
        Intrinsics.checkNotNullParameter(nullabilityQualifier, "nullabilityQualifier");
        Intrinsics.checkNotNullParameter(qualifierApplicabilityTypes, "qualifierApplicabilityTypes");
        this.a = nullabilityQualifier;
        this.f17472b = qualifierApplicabilityTypes;
        this.f17473c = z5;
    }
}

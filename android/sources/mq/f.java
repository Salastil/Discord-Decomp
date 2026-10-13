package mq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f {
    public final hq.b a;

    /* renamed from: b, reason: collision with root package name */
    public final int f14575b;

    public f(hq.b classId, int i5) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        this.a = classId;
        this.f14575b = i5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        return Intrinsics.areEqual(this.a, fVar.a) && this.f14575b == fVar.f14575b;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f14575b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        int i5;
        StringBuilder sb2 = new StringBuilder();
        int i6 = 0;
        while (true) {
            i5 = this.f14575b;
            if (i6 >= i5) {
                break;
            }
            sb2.append("kotlin/Array<");
            i6++;
        }
        sb2.append(this.a);
        for (int i10 = 0; i10 < i5; i10++) {
            sb2.append(">");
        }
        return sb2.toString();
    }
}

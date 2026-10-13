package rp;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l {
    public final hq.b a;

    /* renamed from: b, reason: collision with root package name */
    public final byte[] f17470b;

    /* renamed from: c, reason: collision with root package name */
    public final op.n f17471c;

    public l(hq.b classId, op.n nVar, int i5) {
        nVar = (i5 & 4) != 0 ? null : nVar;
        Intrinsics.checkNotNullParameter(classId, "classId");
        this.a = classId;
        this.f17470b = null;
        this.f17471c = nVar;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof l)) {
            return false;
        }
        l lVar = (l) obj;
        return Intrinsics.areEqual(this.a, lVar.a) && Intrinsics.areEqual(this.f17470b, lVar.f17470b) && Intrinsics.areEqual(this.f17471c, lVar.f17471c);
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        byte[] bArr = this.f17470b;
        int hashCode2 = (hashCode + (bArr == null ? 0 : Arrays.hashCode(bArr))) * 31;
        op.n nVar = this.f17471c;
        return hashCode2 + (nVar != null ? nVar.a.hashCode() : 0);
    }

    public final String toString() {
        return "Request(classId=" + this.a + ", previouslyFoundClassFileContent=" + Arrays.toString(this.f17470b) + ", outerClass=" + this.f17471c + ')';
    }
}

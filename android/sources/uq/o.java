package uq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class o {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f19040b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f19041c;

    /* renamed from: d, reason: collision with root package name */
    public final eq.f f19042d;

    /* renamed from: e, reason: collision with root package name */
    public final String f19043e;

    /* renamed from: f, reason: collision with root package name */
    public final hq.b f19044f;

    public o(Object obj, Object obj2, eq.f fVar, eq.f fVar2, String filePath, hq.b classId) {
        Intrinsics.checkNotNullParameter(filePath, "filePath");
        Intrinsics.checkNotNullParameter(classId, "classId");
        this.a = obj;
        this.f19040b = obj2;
        this.f19041c = fVar;
        this.f19042d = fVar2;
        this.f19043e = filePath;
        this.f19044f = classId;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof o)) {
            return false;
        }
        o oVar = (o) obj;
        return Intrinsics.areEqual(this.a, oVar.a) && Intrinsics.areEqual(this.f19040b, oVar.f19040b) && Intrinsics.areEqual(this.f19041c, oVar.f19041c) && Intrinsics.areEqual(this.f19042d, oVar.f19042d) && Intrinsics.areEqual(this.f19043e, oVar.f19043e) && Intrinsics.areEqual(this.f19044f, oVar.f19044f);
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        Object obj = this.f19040b;
        int hashCode2 = (hashCode + (obj == null ? 0 : obj.hashCode())) * 31;
        Object obj2 = this.f19041c;
        return this.f19044f.hashCode() + a3.e.d((this.f19042d.hashCode() + ((hashCode2 + (obj2 != null ? obj2.hashCode() : 0)) * 31)) * 31, 31, this.f19043e);
    }

    public final String toString() {
        return "IncompatibleVersionErrorData(actualVersion=" + this.a + ", compilerVersion=" + this.f19040b + ", languageVersion=" + this.f19041c + ", expectedVersion=" + this.f19042d + ", filePath=" + this.f19043e + ", classId=" + this.f19044f + ')';
    }
}

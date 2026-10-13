package uq;

import ip.o0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e {
    public final eq.g a;

    /* renamed from: b, reason: collision with root package name */
    public final cq.k f19010b;

    /* renamed from: c, reason: collision with root package name */
    public final eq.a f19011c;

    /* renamed from: d, reason: collision with root package name */
    public final o0 f19012d;

    public e(eq.g nameResolver, cq.k classProto, eq.a metadataVersion, o0 sourceElement) {
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(classProto, "classProto");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        Intrinsics.checkNotNullParameter(sourceElement, "sourceElement");
        this.a = nameResolver;
        this.f19010b = classProto;
        this.f19011c = metadataVersion;
        this.f19012d = sourceElement;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return Intrinsics.areEqual(this.a, eVar.a) && Intrinsics.areEqual(this.f19010b, eVar.f19010b) && Intrinsics.areEqual(this.f19011c, eVar.f19011c) && Intrinsics.areEqual(this.f19012d, eVar.f19012d);
    }

    public final int hashCode() {
        return this.f19012d.hashCode() + ((this.f19011c.hashCode() + ((this.f19010b.hashCode() + (this.a.hashCode() * 31)) * 31)) * 31);
    }

    public final String toString() {
        return "ClassData(nameResolver=" + this.a + ", classProto=" + this.f19010b + ", metadataVersion=" + this.f19011c + ", sourceElement=" + this.f19012d + ')';
    }
}

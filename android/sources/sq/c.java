package sq;

import ip.f;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;
import yq.y;

/* loaded from: classes3.dex */
public final class c implements d {

    /* renamed from: d, reason: collision with root package name */
    public final f f18098d;

    public c(f classDescriptor) {
        Intrinsics.checkNotNullParameter(classDescriptor, "classDescriptor");
        this.f18098d = classDescriptor;
    }

    public final boolean equals(Object obj) {
        c cVar = obj instanceof c ? (c) obj : null;
        return Intrinsics.areEqual(this.f18098d, cVar != null ? cVar.f18098d : null);
    }

    @Override // sq.d
    public final y getType() {
        c0 k = this.f18098d.k();
        Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
        return k;
    }

    public final int hashCode() {
        return this.f18098d.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Class{");
        c0 k = this.f18098d.k();
        Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
        sb2.append(k);
        sb2.append('}');
        return sb2.toString();
    }
}

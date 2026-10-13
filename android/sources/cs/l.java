package cs;

import ds.f0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.json.JsonPrimitive;

/* loaded from: classes3.dex */
public final class l extends JsonPrimitive {

    /* renamed from: d, reason: collision with root package name */
    public final boolean f7330d;

    /* renamed from: e, reason: collision with root package name */
    public final String f7331e;

    public l(Object body, boolean z5) {
        Intrinsics.checkNotNullParameter(body, "body");
        this.f7330d = z5;
        this.f7331e = body.toString();
    }

    @Override // kotlinx.serialization.json.JsonPrimitive
    public final String a() {
        return this.f7331e;
    }

    @Override // kotlinx.serialization.json.JsonPrimitive
    public final boolean b() {
        return this.f7330d;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || l.class != obj.getClass()) {
            return false;
        }
        l lVar = (l) obj;
        return this.f7330d == lVar.f7330d && Intrinsics.areEqual(this.f7331e, lVar.f7331e);
    }

    public final int hashCode() {
        return this.f7331e.hashCode() + (Boolean.hashCode(this.f7330d) * 31);
    }

    @Override // kotlinx.serialization.json.JsonPrimitive
    public final String toString() {
        boolean z5 = this.f7330d;
        String str = this.f7331e;
        if (!z5) {
            return str;
        }
        StringBuilder sb2 = new StringBuilder();
        f0.a(str, sb2);
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }
}

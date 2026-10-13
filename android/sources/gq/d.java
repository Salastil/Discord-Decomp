package gq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d extends com.facebook.imagepipeline.nativecode.b {

    /* renamed from: v, reason: collision with root package name */
    public final String f9437v;

    /* renamed from: w, reason: collision with root package name */
    public final String f9438w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(String name, String desc) {
        super(8);
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(desc, "desc");
        this.f9437v = name;
        this.f9438w = desc;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final String b() {
        return this.f9437v + ':' + this.f9438w;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        return Intrinsics.areEqual(this.f9437v, dVar.f9437v) && Intrinsics.areEqual(this.f9438w, dVar.f9438w);
    }

    public final int hashCode() {
        return this.f9438w.hashCode() + (this.f9437v.hashCode() * 31);
    }
}

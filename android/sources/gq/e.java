package gq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends com.facebook.imagepipeline.nativecode.b {

    /* renamed from: v, reason: collision with root package name */
    public final String f9439v;

    /* renamed from: w, reason: collision with root package name */
    public final String f9440w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(String name, String desc) {
        super(8);
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(desc, "desc");
        this.f9439v = name;
        this.f9440w = desc;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final String b() {
        return this.f9439v + this.f9440w;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return Intrinsics.areEqual(this.f9439v, eVar.f9439v) && Intrinsics.areEqual(this.f9440w, eVar.f9440w);
    }

    public final int hashCode() {
        return this.f9440w.hashCode() + (this.f9439v.hashCode() * 31);
    }
}

package bs;

import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class b0 extends j1 {

    /* renamed from: m, reason: collision with root package name */
    public final zr.i f3162m;

    /* renamed from: n, reason: collision with root package name */
    public final fo.u f3163n;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b0(final String name, final int i5) {
        super(name, null, i5);
        Intrinsics.checkNotNullParameter(name, "name");
        this.f3162m = zr.i.f21432t;
        this.f3163n = fo.l.a(new Function0() { // from class: bs.a0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                zr.g g6;
                int i6 = i5;
                SerialDescriptor[] serialDescriptorArr = new SerialDescriptor[i6];
                for (int i10 = 0; i10 < i6; i10++) {
                    g6 = com.facebook.imagepipeline.nativecode.c.g(name + '.' + this.f3205e[i10], zr.j.f21436w, new SerialDescriptor[0], new kr.n(27));
                    serialDescriptorArr[i10] = g6;
                }
                return serialDescriptorArr;
            }
        });
    }

    @Override // bs.j1, kotlinx.serialization.descriptors.SerialDescriptor
    public final d9.a b() {
        return this.f3162m;
    }

    @Override // bs.j1
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof SerialDescriptor)) {
            return false;
        }
        SerialDescriptor serialDescriptor = (SerialDescriptor) obj;
        return serialDescriptor.b() == zr.i.f21432t && Intrinsics.areEqual(this.a, serialDescriptor.a()) && Intrinsics.areEqual(h1.b(this), h1.b(serialDescriptor));
    }

    @Override // bs.j1
    public final int hashCode() {
        int hashCode = this.a.hashCode();
        Intrinsics.checkNotNullParameter(this, "<this>");
        fo.z zVar = new fo.z(this);
        int i5 = 1;
        while (zVar.hasNext()) {
            int i6 = i5 * 31;
            String str = (String) zVar.next();
            i5 = i6 + (str != null ? str.hashCode() : 0);
        }
        return (hashCode * 31) + i5;
    }

    @Override // bs.j1, kotlinx.serialization.descriptors.SerialDescriptor
    public final SerialDescriptor i(int i5) {
        return ((SerialDescriptor[]) this.f3163n.getValue())[i5];
    }

    @Override // bs.j1
    public final String toString() {
        Intrinsics.checkNotNullParameter(this, "<this>");
        return CollectionsKt.O(new kotlin.collections.v(3, this), ", ", s4.h.h(new StringBuilder(), this.a, '('), ")", null, 56);
    }
}

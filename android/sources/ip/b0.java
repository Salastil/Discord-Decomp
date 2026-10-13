package ip;

import java.util.ArrayList;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b0 extends t0 {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f12121b;

    public b0(ArrayList underlyingPropertyNamesToTypes) {
        Intrinsics.checkNotNullParameter(underlyingPropertyNamesToTypes, "underlyingPropertyNamesToTypes");
        this.a = underlyingPropertyNamesToTypes;
        this.f12121b = kotlin.collections.v0.m(underlyingPropertyNamesToTypes);
    }

    @Override // ip.t0
    public final boolean a(hq.e name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return this.f12121b.containsKey(name);
    }

    public final String toString() {
        return "MultiFieldValueClassRepresentation(underlyingPropertyNamesToTypes=" + this.a + ')';
    }
}

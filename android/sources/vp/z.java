package vp;

import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class z {
    public final yq.y a;

    /* renamed from: b, reason: collision with root package name */
    public final List f19538b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f19539c;

    /* renamed from: d, reason: collision with root package name */
    public final List f19540d;

    public z(yq.y returnType, List valueParameters, ArrayList typeParameters, List errors) {
        Intrinsics.checkNotNullParameter(returnType, "returnType");
        Intrinsics.checkNotNullParameter(valueParameters, "valueParameters");
        Intrinsics.checkNotNullParameter(typeParameters, "typeParameters");
        Intrinsics.checkNotNullParameter(errors, "errors");
        this.a = returnType;
        this.f19538b = valueParameters;
        this.f19539c = typeParameters;
        this.f19540d = errors;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof z)) {
            return false;
        }
        z zVar = (z) obj;
        return Intrinsics.areEqual(this.a, zVar.a) && Intrinsics.areEqual((Object) null, (Object) null) && Intrinsics.areEqual(this.f19538b, zVar.f19538b) && Intrinsics.areEqual(this.f19539c, zVar.f19539c) && Intrinsics.areEqual(this.f19540d, zVar.f19540d);
    }

    public final int hashCode() {
        return this.f19540d.hashCode() + k0.d.d((this.f19539c.hashCode() + a3.e.e(this.f19538b, this.a.hashCode() * 961, 31)) * 31, 31, false);
    }

    public final String toString() {
        return "MethodSignatureData(returnType=" + this.a + ", receiverType=null, valueParameters=" + this.f19538b + ", typeParameters=" + this.f19539c + ", hasStableParameterNames=false, errors=" + this.f19540d + ')';
    }
}

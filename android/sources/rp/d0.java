package rp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d0 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final hq.e f17443b;

    /* renamed from: c, reason: collision with root package name */
    public final String f17444c;

    /* renamed from: d, reason: collision with root package name */
    public final String f17445d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17446e;

    public d0(String internalName, hq.e name, String parameters, String returnType) {
        Intrinsics.checkNotNullParameter(internalName, "classInternalName");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(parameters, "parameters");
        Intrinsics.checkNotNullParameter(returnType, "returnType");
        this.a = internalName;
        this.f17443b = name;
        this.f17444c = parameters;
        this.f17445d = returnType;
        String jvmDescriptor = name + '(' + parameters + ')' + returnType;
        Intrinsics.checkNotNullParameter(internalName, "internalName");
        Intrinsics.checkNotNullParameter(jvmDescriptor, "jvmDescriptor");
        this.f17446e = internalName + '.' + jvmDescriptor;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d0)) {
            return false;
        }
        d0 d0Var = (d0) obj;
        return Intrinsics.areEqual(this.a, d0Var.a) && Intrinsics.areEqual(this.f17443b, d0Var.f17443b) && Intrinsics.areEqual(this.f17444c, d0Var.f17444c) && Intrinsics.areEqual(this.f17445d, d0Var.f17445d);
    }

    public final int hashCode() {
        return this.f17445d.hashCode() + a3.e.d((this.f17443b.hashCode() + (this.a.hashCode() * 31)) * 31, 31, this.f17444c);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("NameAndSignature(classInternalName=");
        sb2.append(this.a);
        sb2.append(", name=");
        sb2.append(this.f17443b);
        sb2.append(", parameters=");
        sb2.append(this.f17444c);
        sb2.append(", returnType=");
        return s4.h.h(sb2, this.f17445d, ')');
    }
}

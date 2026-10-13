package bs;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;

/* loaded from: classes3.dex */
public final class p0 implements KType {

    /* renamed from: d, reason: collision with root package name */
    public final KType f3223d;

    public p0(KType origin) {
        Intrinsics.checkNotNullParameter(origin, "origin");
        this.f3223d = origin;
    }

    public final boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        p0 p0Var = obj instanceof p0 ? (p0) obj : null;
        KType kType = p0Var != null ? p0Var.f3223d : null;
        KType kType2 = this.f3223d;
        if (!Intrinsics.areEqual(kType2, kType)) {
            return false;
        }
        zo.c classifier = kType2.getClassifier();
        if (classifier instanceof KClass) {
            KType kType3 = obj instanceof KType ? (KType) obj : null;
            zo.c classifier2 = kType3 != null ? kType3.getClassifier() : null;
            if (classifier2 != null && (classifier2 instanceof KClass)) {
                return Intrinsics.areEqual(com.facebook.imagepipeline.nativecode.c.z((KClass) classifier), com.facebook.imagepipeline.nativecode.c.z((KClass) classifier2));
            }
        }
        return false;
    }

    @Override // zo.b
    public final List getAnnotations() {
        return this.f3223d.getAnnotations();
    }

    @Override // kotlin.reflect.KType
    public final List getArguments() {
        return this.f3223d.getArguments();
    }

    @Override // kotlin.reflect.KType
    public final zo.c getClassifier() {
        return this.f3223d.getClassifier();
    }

    public final int hashCode() {
        return this.f3223d.hashCode();
    }

    @Override // kotlin.reflect.KType
    public final boolean isMarkedNullable() {
        return this.f3223d.isMarkedNullable();
    }

    public final String toString() {
        return "KTypeWrapper: " + this.f3223d;
    }
}

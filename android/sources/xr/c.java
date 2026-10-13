package xr;

import fo.l;
import fo.m;
import java.lang.annotation.Annotation;
import java.util.List;
import kotlin.collections.m0;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class c extends bs.b {
    public final KClass a;

    /* renamed from: b, reason: collision with root package name */
    public final List f20555b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f20556c;

    public c(KClass baseClass) {
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        this.a = baseClass;
        this.f20555b = m0.f13512d;
        this.f20556c = l.b(m.f8827e, new h8.a(16, this));
    }

    @Override // bs.b
    public final KClass c() {
        return this.a;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return (SerialDescriptor) this.f20556c.getValue();
    }

    public final String toString() {
        return "kotlinx.serialization.PolymorphicSerializer(baseClass: " + this.a + ')';
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public c(KClass baseClass, Annotation[] classAnnotations) {
        this(baseClass);
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        Intrinsics.checkNotNullParameter(classAnnotations, "classAnnotations");
        this.f20555b = u.b(classAnnotations);
    }
}

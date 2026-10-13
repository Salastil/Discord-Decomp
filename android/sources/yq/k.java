package yq;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public abstract class k {
    public static final /* synthetic */ KProperty[] a = {com.discord.chat.bridge.botuikit.a.o(k.class, "annotationsAttribute", "getAnnotationsAttribute(Lorg/jetbrains/kotlin/types/TypeAttributes;)Lorg/jetbrains/kotlin/types/AnnotationsTypeAttribute;", 1)};

    /* renamed from: b, reason: collision with root package name */
    public static final p9.d f21044b;

    static {
        e4.r rVar = k0.f21045e;
        KClass kClass = Reflection.getOrCreateKotlinClass(j.class);
        rVar.getClass();
        Intrinsics.checkNotNullParameter(kClass, "kClass");
        Intrinsics.checkNotNullParameter(kClass, "kClass");
        String qualifiedName = kClass.getQualifiedName();
        Intrinsics.checkNotNull(qualifiedName);
        p9.d dVar = new p9.d(rVar.l(qualifiedName), 3);
        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type kotlin.properties.ReadOnlyProperty<org.jetbrains.kotlin.types.TypeAttributes, T of org.jetbrains.kotlin.types.TypeAttributes.Companion.attributeAccessor?>");
        f21044b = dVar;
    }

    public static final jp.h a(k0 k0Var) {
        jp.h hVar;
        Intrinsics.checkNotNullParameter(k0Var, "<this>");
        Intrinsics.checkNotNullParameter(k0Var, "<this>");
        j jVar = (j) f21044b.getValue(k0Var, a[0]);
        return (jVar == null || (hVar = jVar.a) == null) ? jp.g.a : hVar;
    }
}

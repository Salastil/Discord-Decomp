package vq;

import iq.g;
import iq.m;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class a extends tq.a {

    /* renamed from: m, reason: collision with root package name */
    public static final a f19541m;

    static {
        g gVar = new g();
        dq.b.a(gVar);
        Intrinsics.checkNotNullExpressionValue(gVar, "apply(...)");
        m packageFqName = dq.b.a;
        Intrinsics.checkNotNullExpressionValue(packageFqName, "packageFqName");
        m constructorAnnotation = dq.b.f7680c;
        Intrinsics.checkNotNullExpressionValue(constructorAnnotation, "constructorAnnotation");
        m classAnnotation = dq.b.f7679b;
        Intrinsics.checkNotNullExpressionValue(classAnnotation, "classAnnotation");
        m functionAnnotation = dq.b.f7681d;
        Intrinsics.checkNotNullExpressionValue(functionAnnotation, "functionAnnotation");
        m propertyAnnotation = dq.b.f7682e;
        Intrinsics.checkNotNullExpressionValue(propertyAnnotation, "propertyAnnotation");
        m propertyGetterAnnotation = dq.b.f7683f;
        Intrinsics.checkNotNullExpressionValue(propertyGetterAnnotation, "propertyGetterAnnotation");
        m propertySetterAnnotation = dq.b.f7684g;
        Intrinsics.checkNotNullExpressionValue(propertySetterAnnotation, "propertySetterAnnotation");
        m enumEntryAnnotation = dq.b.f7686i;
        Intrinsics.checkNotNullExpressionValue(enumEntryAnnotation, "enumEntryAnnotation");
        m compileTimeValue = dq.b.f7685h;
        Intrinsics.checkNotNullExpressionValue(compileTimeValue, "compileTimeValue");
        m parameterAnnotation = dq.b.j;
        Intrinsics.checkNotNullExpressionValue(parameterAnnotation, "parameterAnnotation");
        m typeAnnotation = dq.b.k;
        Intrinsics.checkNotNullExpressionValue(typeAnnotation, "typeAnnotation");
        m typeParameterAnnotation = dq.b.f7687l;
        Intrinsics.checkNotNullExpressionValue(typeParameterAnnotation, "typeParameterAnnotation");
        f19541m = new a(gVar, packageFqName, constructorAnnotation, classAnnotation, functionAnnotation, propertyAnnotation, propertyGetterAnnotation, propertySetterAnnotation, enumEntryAnnotation, compileTimeValue, parameterAnnotation, typeAnnotation, typeParameterAnnotation);
    }

    public static String a(hq.c fqName) {
        String b10;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        StringBuilder sb2 = new StringBuilder();
        sb2.append(x.m(fqName.a.a, '.', '/'));
        sb2.append('/');
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        StringBuilder sb3 = new StringBuilder();
        hq.d dVar = fqName.a;
        if (dVar.c()) {
            b10 = "default-package";
        } else {
            b10 = dVar.f().b();
            Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        }
        sb3.append(b10);
        sb3.append(".kotlin_builtins");
        sb2.append(sb3.toString());
        return sb2.toString();
    }
}

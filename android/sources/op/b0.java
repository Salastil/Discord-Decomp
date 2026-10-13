package op;

import java.lang.annotation.Annotation;
import java.lang.reflect.AnnotatedElement;
import java.lang.reflect.TypeVariable;
import java.util.Collection;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b0 extends r implements yp.b {
    public final TypeVariable a;

    public b0(TypeVariable typeVariable) {
        Intrinsics.checkNotNullParameter(typeVariable, "typeVariable");
        this.a = typeVariable;
    }

    @Override // yp.b
    public final d a(hq.c fqName) {
        Annotation[] declaredAnnotations;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        TypeVariable typeVariable = this.a;
        AnnotatedElement annotatedElement = typeVariable instanceof AnnotatedElement ? (AnnotatedElement) typeVariable : null;
        if (annotatedElement == null || (declaredAnnotations = annotatedElement.getDeclaredAnnotations()) == null) {
            return null;
        }
        return nf.e.i(declaredAnnotations, fqName);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof b0) {
            return Intrinsics.areEqual(this.a, ((b0) obj).a);
        }
        return false;
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        Annotation[] declaredAnnotations;
        TypeVariable typeVariable = this.a;
        AnnotatedElement annotatedElement = typeVariable instanceof AnnotatedElement ? (AnnotatedElement) typeVariable : null;
        return (annotatedElement == null || (declaredAnnotations = annotatedElement.getDeclaredAnnotations()) == null) ? m0.f13512d : nf.e.m(declaredAnnotations);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(b0.class, sb2, ": ");
        sb2.append(this.a);
        return sb2.toString();
    }
}

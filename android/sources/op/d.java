package op;

import java.lang.annotation.Annotation;
import java.lang.reflect.Method;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d extends r {
    public final Annotation a;

    public d(Annotation annotation) {
        Intrinsics.checkNotNullParameter(annotation, "annotation");
        this.a = annotation;
    }

    public final ArrayList b() {
        Annotation annotation = this.a;
        Method[] declaredMethods = com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(annotation)).getDeclaredMethods();
        Intrinsics.checkNotNullExpressionValue(declaredMethods, "getDeclaredMethods(...)");
        ArrayList arrayList = new ArrayList(declaredMethods.length);
        for (Method method : declaredMethods) {
            Object value = method.invoke(annotation, null);
            Intrinsics.checkNotNullExpressionValue(value, "invoke(...)");
            hq.e e9 = hq.e.e(method.getName());
            Intrinsics.checkNotNullParameter(value, "value");
            arrayList.add(c.e(value.getClass()) ? new s(e9, (Enum) value) : value instanceof Annotation ? new f(e9, (Annotation) value) : value instanceof Object[] ? new g(e9, (Object[]) value) : value instanceof Class ? new o(e9, (Class) value) : new u(e9, value));
        }
        return arrayList;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof d) {
            return this.a == ((d) obj).a;
        }
        return false;
    }

    public final int hashCode() {
        return System.identityHashCode(this.a);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(d.class, sb2, ": ");
        sb2.append(this.a);
        return sb2.toString();
    }
}

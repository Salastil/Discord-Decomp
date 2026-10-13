package op;

import java.lang.reflect.Type;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a0 implements yp.d {
    @Override // yp.b
    public d a(hq.c fqName) {
        Object obj;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Iterator it = getAnnotations().iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (Intrinsics.areEqual(c.a(com.facebook.imagepipeline.nativecode.c.z(com.facebook.imagepipeline.nativecode.c.u(((d) obj).a))).a(), fqName)) {
                break;
            }
        }
        return (d) obj;
    }

    public abstract Type b();

    public final boolean equals(Object obj) {
        return (obj instanceof a0) && Intrinsics.areEqual(b(), ((a0) obj).b());
    }

    public final int hashCode() {
        return b().hashCode();
    }

    public final String toString() {
        return getClass().getName() + ": " + b();
    }
}

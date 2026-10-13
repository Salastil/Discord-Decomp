package jp;

import ip.o0;
import java.util.Map;
import yq.c0;
import yq.y;

/* loaded from: classes3.dex */
public final class c implements b {
    public final y a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f12995b;

    /* renamed from: c, reason: collision with root package name */
    public final o0 f12996c;

    public c(c0 c0Var, Map map, o0 o0Var) {
        if (c0Var == null) {
            c(0);
            throw null;
        }
        if (map == null) {
            c(1);
            throw null;
        }
        this.a = c0Var;
        this.f12995b = map;
        this.f12996c = o0Var;
    }

    public static /* synthetic */ void c(int i5) {
        String str = (i5 == 3 || i5 == 4 || i5 == 5) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 3 || i5 == 4 || i5 == 5) ? 2 : 3];
        if (i5 == 1) {
            objArr[0] = "valueArguments";
        } else if (i5 == 2) {
            objArr[0] = "source";
        } else if (i5 == 3 || i5 == 4 || i5 == 5) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/annotations/AnnotationDescriptorImpl";
        } else {
            objArr[0] = "annotationType";
        }
        if (i5 == 3) {
            objArr[1] = "getType";
        } else if (i5 == 4) {
            objArr[1] = "getAllValueArguments";
        } else if (i5 != 5) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/annotations/AnnotationDescriptorImpl";
        } else {
            objArr[1] = "getSource";
        }
        if (i5 != 3 && i5 != 4 && i5 != 5) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 3 && i5 != 4 && i5 != 5) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // jp.b
    public final hq.c a() {
        ip.f d6 = oq.e.d(this);
        if (d6 != null) {
            if (ar.l.f(d6)) {
                d6 = null;
            }
            if (d6 != null) {
                return oq.e.c(d6);
            }
        }
        return null;
    }

    @Override // jp.b
    public final Map b() {
        Map map = this.f12995b;
        if (map != null) {
            return map;
        }
        c(4);
        throw null;
    }

    @Override // jp.b
    public final o0 d() {
        o0 o0Var = this.f12996c;
        if (o0Var != null) {
            return o0Var;
        }
        c(5);
        throw null;
    }

    @Override // jp.b
    public final y getType() {
        y yVar = this.a;
        if (yVar != null) {
            return yVar;
        }
        c(3);
        throw null;
    }

    public final String toString() {
        return jq.f.a.w(this, null);
    }
}

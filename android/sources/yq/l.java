package yq;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class l extends b {

    /* renamed from: c, reason: collision with root package name */
    public final lp.z f21047c;

    /* renamed from: d, reason: collision with root package name */
    public final List f21048d;

    /* renamed from: e, reason: collision with root package name */
    public final Collection f21049e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(lp.z zVar, List list, Collection collection, xq.o oVar) {
        super(oVar);
        if (list == null) {
            n(1);
            throw null;
        }
        if (collection == null) {
            n(2);
            throw null;
        }
        if (oVar == null) {
            n(3);
            throw null;
        }
        this.f21047c = zVar;
        this.f21048d = Collections.unmodifiableList(new ArrayList(list));
        this.f21049e = Collections.unmodifiableCollection(collection);
    }

    public static /* synthetic */ void n(int i5) {
        String str = (i5 == 4 || i5 == 5 || i5 == 6 || i5 == 7) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 4 || i5 == 5 || i5 == 6 || i5 == 7) ? 2 : 3];
        switch (i5) {
            case 1:
                objArr[0] = "parameters";
                break;
            case 2:
                objArr[0] = "supertypes";
                break;
            case 3:
                objArr[0] = "storageManager";
                break;
            case 4:
            case 5:
            case 6:
            case 7:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/types/ClassTypeConstructorImpl";
                break;
            default:
                objArr[0] = "classDescriptor";
                break;
        }
        if (i5 == 4) {
            objArr[1] = "getParameters";
        } else if (i5 == 5) {
            objArr[1] = "getDeclarationDescriptor";
        } else if (i5 == 6) {
            objArr[1] = "computeSupertypes";
        } else if (i5 != 7) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/types/ClassTypeConstructorImpl";
        } else {
            objArr[1] = "getSupertypeLoopChecker";
        }
        if (i5 != 4 && i5 != 5 && i5 != 6 && i5 != 7) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 != 4 && i5 != 5 && i5 != 6 && i5 != 7) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // yq.p0
    public final boolean c() {
        return true;
    }

    @Override // yq.i
    public final Collection e() {
        Collection collection = this.f21049e;
        if (collection != null) {
            return collection;
        }
        n(6);
        throw null;
    }

    @Override // yq.p0
    public final List getParameters() {
        List list = this.f21048d;
        if (list != null) {
            return list;
        }
        n(4);
        throw null;
    }

    @Override // yq.i
    public final ip.p0 i() {
        return ip.p0.f12154i;
    }

    @Override // yq.b
    /* renamed from: o */
    public final ip.f a() {
        lp.z zVar = this.f21047c;
        if (zVar != null) {
            return zVar;
        }
        n(5);
        throw null;
    }

    public final String toString() {
        return kq.e.g(this.f21047c).a;
    }
}

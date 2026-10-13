package lp;

import com.facebook.react.devsupport.StackTraceHelper;

/* loaded from: classes3.dex */
public abstract class l extends bq.b implements ip.l {

    /* renamed from: i, reason: collision with root package name */
    public final hq.e f14158i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(jp.h hVar, hq.e eVar) {
        super(hVar);
        if (hVar == null) {
            v0(0);
            throw null;
        }
        if (eVar == null) {
            v0(1);
            throw null;
        }
        this.f14158i = eVar;
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 2 || i5 == 3 || i5 == 5 || i5 == 6) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 2 || i5 == 3 || i5 == 5 || i5 == 6) ? 2 : 3];
        switch (i5) {
            case 1:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 2:
            case 3:
            case 5:
            case 6:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/DeclarationDescriptorImpl";
                break;
            case 4:
                objArr[0] = "descriptor";
                break;
            default:
                objArr[0] = "annotations";
                break;
        }
        if (i5 == 2) {
            objArr[1] = "getName";
        } else if (i5 == 3) {
            objArr[1] = "getOriginal";
        } else if (i5 == 5 || i5 == 6) {
            objArr[1] = "toString";
        } else {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/DeclarationDescriptorImpl";
        }
        if (i5 != 2 && i5 != 3) {
            if (i5 == 4) {
                objArr[2] = "toString";
            } else if (i5 != 5 && i5 != 6) {
                objArr[2] = "<init>";
            }
        }
        String format = String.format(str, objArr);
        if (i5 != 2 && i5 != 3 && i5 != 5 && i5 != 6) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public static String z0(ip.l lVar) {
        try {
            String str = jq.f.f13048c.v(lVar) + "[" + lVar.getClass().getSimpleName() + "@" + Integer.toHexString(System.identityHashCode(lVar)) + "]";
            if (str != null) {
                return str;
            }
            v0(5);
            throw null;
        } catch (Throwable unused) {
            String str2 = lVar.getClass().getSimpleName() + " " + lVar.getName();
            if (str2 != null) {
                return str2;
            }
            v0(6);
            throw null;
        }
    }

    @Override // ip.l
    public final hq.e getName() {
        hq.e eVar = this.f14158i;
        if (eVar != null) {
            return eVar;
        }
        v0(2);
        throw null;
    }

    @Override // bq.b
    public String toString() {
        return z0(this);
    }

    public ip.l a() {
        return this;
    }
}

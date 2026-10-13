package kq;

/* loaded from: classes3.dex */
public final class m {

    /* renamed from: c, reason: collision with root package name */
    public static final m f13630c = new m(l.f13626d, "SUCCESS");
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final String f13631b;

    public m(l lVar, String str) {
        this.a = lVar;
        this.f13631b = str;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0038  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0049  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x003b  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0040  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0045  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String format;
        String str = (i5 == 1 || i5 == 2 || i5 == 3 || i5 == 4) ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 2 || i5 == 3 || i5 == 4) ? 3 : 2];
        if (i5 != 1 && i5 != 2) {
            if (i5 == 3) {
                objArr[0] = "success";
            } else if (i5 != 4) {
                objArr[0] = "kotlin/reflect/jvm/internal/impl/resolve/OverridingUtil$OverrideCompatibilityInfo";
            }
            switch (i5) {
                case 1:
                case 2:
                case 3:
                case 4:
                    objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/OverridingUtil$OverrideCompatibilityInfo";
                    break;
                case 5:
                    objArr[1] = "getResult";
                    break;
                case 6:
                    objArr[1] = "getDebugMessage";
                    break;
                default:
                    objArr[1] = "success";
                    break;
            }
            if (i5 != 1) {
                objArr[2] = "incompatible";
            } else if (i5 == 2) {
                objArr[2] = "conflict";
            } else if (i5 == 3 || i5 == 4) {
                objArr[2] = "<init>";
            }
            format = String.format(str, objArr);
            if (i5 == 1 && i5 != 2 && i5 != 3 && i5 != 4) {
                throw new IllegalStateException(format);
            }
            throw new IllegalArgumentException(format);
        }
        objArr[0] = "debugMessage";
        switch (i5) {
        }
        if (i5 != 1) {
        }
        format = String.format(str, objArr);
        if (i5 == 1) {
        }
        throw new IllegalArgumentException(format);
    }

    public static m c(String str) {
        return new m(l.f13627e, str);
    }

    public final l b() {
        l lVar = this.a;
        if (lVar != null) {
            return lVar;
        }
        a(5);
        throw null;
    }

    public final String toString() {
        return this.a + ": " + this.f13631b;
    }
}

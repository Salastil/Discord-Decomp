package hq;

import com.facebook.react.devsupport.StackTraceHelper;

/* loaded from: classes3.dex */
public final class e implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final String f10209d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f10210e;

    public e(String str, boolean z5) {
        if (str == null) {
            a(0);
            throw null;
        }
        this.f10209d = str;
        this.f10210e = z5;
    }

    public static /* synthetic */ void a(int i5) {
        String str = (i5 == 1 || i5 == 2 || i5 == 3 || i5 == 4) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 2 || i5 == 3 || i5 == 4) ? 2 : 3];
        if (i5 == 1 || i5 == 2 || i5 == 3 || i5 == 4) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/name/Name";
        } else {
            objArr[0] = StackTraceHelper.NAME_KEY;
        }
        if (i5 == 1) {
            objArr[1] = "asString";
        } else if (i5 == 2) {
            objArr[1] = "getIdentifier";
        } else if (i5 == 3 || i5 == 4) {
            objArr[1] = "asStringStripSpecialMarkers";
        } else {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/name/Name";
        }
        switch (i5) {
            case 1:
            case 2:
            case 3:
            case 4:
                break;
            case 5:
                objArr[2] = "identifier";
                break;
            case 6:
                objArr[2] = "isValidIdentifier";
                break;
            case 7:
                objArr[2] = "identifierIfValid";
                break;
            case 8:
                objArr[2] = "special";
                break;
            case 9:
                objArr[2] = "guessByFirstCharacter";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 1 && i5 != 2 && i5 != 3 && i5 != 4) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public static e d(String str) {
        if (str != null) {
            return str.startsWith("<") ? g(str) : e(str);
        }
        a(9);
        throw null;
    }

    public static e e(String str) {
        if (str != null) {
            return new e(str, false);
        }
        a(5);
        throw null;
    }

    public static boolean f(String str) {
        if (str == null) {
            a(6);
            throw null;
        }
        if (str.isEmpty() || str.startsWith("<")) {
            return false;
        }
        for (int i5 = 0; i5 < str.length(); i5++) {
            char charAt = str.charAt(i5);
            if (charAt == '.' || charAt == '/' || charAt == '\\') {
                return false;
            }
        }
        return true;
    }

    public static e g(String str) {
        if (str == null) {
            a(8);
            throw null;
        }
        if (str.startsWith("<")) {
            return new e(str, true);
        }
        throw new IllegalArgumentException("special name must start with '<': ".concat(str));
    }

    public final String b() {
        String str = this.f10209d;
        if (str != null) {
            return str;
        }
        a(1);
        throw null;
    }

    public final String c() {
        if (this.f10210e) {
            throw new IllegalStateException("not identifier: " + this);
        }
        String b10 = b();
        if (b10 != null) {
            return b10;
        }
        a(2);
        throw null;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f10209d.compareTo(((e) obj).f10209d);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return this.f10210e == eVar.f10210e && this.f10209d.equals(eVar.f10209d);
    }

    public final int hashCode() {
        return (this.f10209d.hashCode() * 31) + (this.f10210e ? 1 : 0);
    }

    public final String toString() {
        return this.f10209d;
    }
}

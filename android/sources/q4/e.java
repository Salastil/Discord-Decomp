package q4;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* loaded from: classes.dex */
public final class e {

    /* renamed from: c, reason: collision with root package name */
    public static final e f16680c = new e("COMPOSITION");
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public f f16681b;

    public e(String... strArr) {
        this.a = Arrays.asList(strArr);
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x007e A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(int i5, String str) {
        List list = this.a;
        if (i5 < list.size()) {
            boolean z5 = i5 == list.size() - 1;
            String str2 = (String) list.get(i5);
            if (!str2.equals("**")) {
                boolean z6 = str2.equals(str) || str2.equals("*");
                if ((z5 || (i5 == list.size() - 2 && ((String) k0.d.g(1, list)).equals("**"))) && z6) {
                    return true;
                }
            } else {
                if (z5 || !((String) list.get(i5 + 1)).equals(str)) {
                    if (!z5) {
                        int i6 = i5 + 1;
                        if (i6 >= list.size() - 1) {
                            return ((String) list.get(i6)).equals(str);
                        }
                    }
                    return true;
                }
                if (i5 == list.size() - 2 || (i5 == list.size() - 3 && ((String) k0.d.g(1, list)).equals("**"))) {
                }
            }
        }
        return false;
    }

    public final int b(int i5, String str) {
        if ("__container".equals(str)) {
            return 0;
        }
        List list = this.a;
        if (((String) list.get(i5)).equals("**")) {
            return (i5 != list.size() - 1 && ((String) list.get(i5 + 1)).equals(str)) ? 2 : 0;
        }
        return 1;
    }

    public final boolean c(int i5, String str) {
        if ("__container".equals(str)) {
            return true;
        }
        List list = this.a;
        if (i5 >= list.size()) {
            return false;
        }
        return ((String) list.get(i5)).equals(str) || ((String) list.get(i5)).equals("**") || ((String) list.get(i5)).equals("*");
    }

    public final boolean d(int i5, String str) {
        if ("__container".equals(str)) {
            return true;
        }
        List list = this.a;
        return i5 < list.size() - 1 || ((String) list.get(i5)).equals("**");
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && e.class == obj.getClass()) {
            e eVar = (e) obj;
            if (!this.a.equals(eVar.a)) {
                return false;
            }
            f fVar = this.f16681b;
            f fVar2 = eVar.f16681b;
            if (fVar != null) {
                return fVar.equals(fVar2);
            }
            if (fVar2 == null) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() * 31;
        f fVar = this.f16681b;
        return hashCode + (fVar != null ? fVar.hashCode() : 0);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("KeyPath{keys=");
        sb2.append(this.a);
        sb2.append(",resolved=");
        sb2.append(this.f16681b != null);
        sb2.append('}');
        return sb2.toString();
    }

    public e(e eVar) {
        this.a = new ArrayList(eVar.a);
        this.f16681b = eVar.f16681b;
    }
}

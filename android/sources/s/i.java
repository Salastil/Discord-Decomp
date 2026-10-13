package s;

import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes.dex */
public abstract class i {
    public long[] a;

    /* renamed from: b, reason: collision with root package name */
    public int f17681b;

    public final boolean equals(Object obj) {
        if (obj instanceof i) {
            i iVar = (i) obj;
            int i5 = iVar.f17681b;
            int i6 = this.f17681b;
            if (i5 == i6) {
                long[] jArr = this.a;
                long[] jArr2 = iVar.a;
                IntRange i10 = yo.j.i(0, i6);
                int i11 = i10.f13545d;
                int i12 = i10.f13546e;
                if (i11 > i12) {
                    return true;
                }
                while (jArr[i11] == jArr2[i11]) {
                    if (i11 == i12) {
                        return true;
                    }
                    i11++;
                }
                return false;
            }
        }
        return false;
    }

    public final int hashCode() {
        long[] jArr = this.a;
        int i5 = this.f17681b;
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            i6 += Long.hashCode(jArr[i10]) * 31;
        }
        return i6;
    }

    public final String toString() {
        Intrinsics.checkNotNullParameter(", ", "separator");
        Intrinsics.checkNotNullParameter("[", "prefix");
        Intrinsics.checkNotNullParameter("]", "postfix");
        Intrinsics.checkNotNullParameter("...", "truncated");
        StringBuilder sb2 = new StringBuilder();
        sb2.append((CharSequence) "[");
        long[] jArr = this.a;
        int i5 = this.f17681b;
        int i6 = 0;
        while (true) {
            if (i6 >= i5) {
                sb2.append((CharSequence) "]");
                break;
            }
            long j = jArr[i6];
            if (i6 == -1) {
                sb2.append((CharSequence) "...");
                break;
            }
            if (i6 != 0) {
                sb2.append((CharSequence) ", ");
            }
            sb2.append(j);
            i6++;
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }
}

package yj;

import gh.s;
import k2.r;

/* loaded from: classes3.dex */
public abstract class d extends s {
    public final void q(StringBuilder sb2, int i5) {
        sb2.append("(01)");
        int length = sb2.length();
        sb2.append('9');
        r(i5, length, sb2);
    }

    public final void r(int i5, int i6, StringBuilder sb2) {
        for (int i10 = 0; i10 < 4; i10++) {
            int t5 = r.t((i10 * 10) + i5, 10, (nj.a) ((r) this.f9324b).f13142e);
            if (t5 / 100 == 0) {
                sb2.append('0');
            }
            if (t5 / 10 == 0) {
                sb2.append('0');
            }
            sb2.append(t5);
        }
        int i11 = 0;
        for (int i12 = 0; i12 < 13; i12++) {
            int charAt = sb2.charAt(i12 + i6) - '0';
            if ((i12 & 1) == 0) {
                charAt *= 3;
            }
            i11 += charAt;
        }
        int i13 = 10 - (i11 % 10);
        sb2.append(i13 != 10 ? i13 : 0);
    }
}

package yj;

import k2.r;

/* loaded from: classes3.dex */
public abstract class e extends d {
    public abstract void s(StringBuilder sb2, int i5);

    public abstract int t(int i5);

    public final void u(int i5, int i6, StringBuilder sb2) {
        int t5 = r.t(i5, i6, (nj.a) ((r) this.f9324b).f13142e);
        s(sb2, t5);
        int t10 = t(t5);
        int i10 = 100000;
        for (int i11 = 0; i11 < 5; i11++) {
            if (t10 / i10 == 0) {
                sb2.append('0');
            }
            i10 /= 10;
        }
        sb2.append(t10);
    }
}

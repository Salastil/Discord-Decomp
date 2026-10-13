package yj;

import k2.r;

/* loaded from: classes3.dex */
public final class c extends e {

    /* renamed from: c, reason: collision with root package name */
    public final String f20941c;

    /* renamed from: d, reason: collision with root package name */
    public final String f20942d;

    public c(nj.a aVar, String str, String str2) {
        super(aVar);
        this.f20941c = str2;
        this.f20942d = str;
    }

    @Override // gh.s
    public final String k() {
        if (((nj.a) this.a).f15509e != 84) {
            throw jj.g.f12795i;
        }
        StringBuilder sb2 = new StringBuilder();
        q(sb2, 8);
        u(48, 20, sb2);
        int t5 = r.t(68, 16, (nj.a) ((r) this.f9324b).f13142e);
        if (t5 != 38400) {
            sb2.append('(');
            sb2.append(this.f20941c);
            sb2.append(')');
            int i5 = t5 % 32;
            int i6 = t5 / 32;
            int i10 = (i6 % 12) + 1;
            int i11 = i6 / 12;
            if (i11 / 10 == 0) {
                sb2.append('0');
            }
            sb2.append(i11);
            if (i10 / 10 == 0) {
                sb2.append('0');
            }
            sb2.append(i10);
            if (i5 / 10 == 0) {
                sb2.append('0');
            }
            sb2.append(i5);
        }
        return sb2.toString();
    }

    @Override // yj.e
    public final void s(StringBuilder sb2, int i5) {
        sb2.append('(');
        sb2.append(this.f20942d);
        sb2.append(i5 / 100000);
        sb2.append(')');
    }

    @Override // yj.e
    public final int t(int i5) {
        return i5 % 100000;
    }
}

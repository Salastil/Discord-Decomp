package yj;

/* loaded from: classes3.dex */
public final class a extends e {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f20939c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(nj.a aVar, int i5) {
        super(aVar);
        this.f20939c = i5;
    }

    @Override // gh.s
    public final String k() {
        if (((nj.a) this.a).f15509e != 60) {
            throw jj.g.f12795i;
        }
        StringBuilder sb2 = new StringBuilder();
        q(sb2, 5);
        u(45, 15, sb2);
        return sb2.toString();
    }

    @Override // yj.e
    public final void s(StringBuilder sb2, int i5) {
        switch (this.f20939c) {
            case 0:
                sb2.append("(3103)");
                break;
            default:
                if (i5 >= 10000) {
                    sb2.append("(3203)");
                    break;
                } else {
                    sb2.append("(3202)");
                    break;
                }
        }
    }

    @Override // yj.e
    public final int t(int i5) {
        switch (this.f20939c) {
            case 0:
                return i5;
            default:
                return i5 < 10000 ? i5 : i5 - 10000;
        }
    }
}

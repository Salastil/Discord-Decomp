package yj;

import k2.r;

/* loaded from: classes3.dex */
public final class b extends d {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f20940c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b(nj.a aVar, int i5) {
        super(aVar);
        this.f20940c = i5;
    }

    @Override // gh.s
    public final String k() {
        switch (this.f20940c) {
            case 0:
                r rVar = (r) this.f9324b;
                if (((nj.a) this.a).f15509e < 48) {
                    throw jj.g.f12795i;
                }
                StringBuilder sb2 = new StringBuilder();
                q(sb2, 8);
                int t5 = r.t(48, 2, (nj.a) rVar.f13142e);
                sb2.append("(392");
                sb2.append(t5);
                sb2.append(')');
                sb2.append(rVar.p(50, null).f20944i);
                return sb2.toString();
            case 1:
                r rVar2 = (r) this.f9324b;
                if (((nj.a) this.a).f15509e < 48) {
                    throw jj.g.f12795i;
                }
                StringBuilder sb3 = new StringBuilder();
                q(sb3, 8);
                int t10 = r.t(48, 2, (nj.a) rVar2.f13142e);
                sb3.append("(393");
                sb3.append(t10);
                sb3.append(')');
                int t11 = r.t(50, 10, (nj.a) rVar2.f13142e);
                if (t11 / 100 == 0) {
                    sb3.append('0');
                }
                if (t11 / 10 == 0) {
                    sb3.append('0');
                }
                sb3.append(t11);
                sb3.append(rVar2.p(60, null).f20944i);
                return sb3.toString();
            default:
                StringBuilder o6 = k0.d.o("(01)");
                int length = o6.length();
                r rVar3 = (r) this.f9324b;
                o6.append(r.t(4, 4, (nj.a) rVar3.f13142e));
                r(8, length, o6);
                return rVar3.o(o6, 48);
        }
    }
}

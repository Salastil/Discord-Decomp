package kotlin.collections;

/* loaded from: classes3.dex */
public final class a1 extends b {

    /* renamed from: i, reason: collision with root package name */
    public int f13484i;

    /* renamed from: v, reason: collision with root package name */
    public int f13485v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ b1 f13486w;

    public a1(b1 b1Var) {
        this.f13486w = b1Var;
        this.f13484i = b1Var.f13492w;
        this.f13485v = b1Var.f13491v;
    }

    @Override // kotlin.collections.b
    public final void a() {
        int i5 = this.f13484i;
        if (i5 == 0) {
            this.f13487d = 2;
            return;
        }
        b1 b1Var = this.f13486w;
        Object[] objArr = b1Var.f13489e;
        int i6 = this.f13485v;
        this.f13488e = objArr[i6];
        this.f13487d = 1;
        this.f13485v = (i6 + 1) % b1Var.f13490i;
        this.f13484i = i5 - 1;
    }
}

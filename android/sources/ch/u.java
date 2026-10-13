package ch;

/* loaded from: classes3.dex */
public final class u {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public int f3566b;

    /* renamed from: c, reason: collision with root package name */
    public int f3567c;

    /* renamed from: d, reason: collision with root package name */
    public int f3568d;

    /* renamed from: e, reason: collision with root package name */
    public int f3569e;

    public /* synthetic */ u() {
    }

    public boolean a(int i5) {
        if (i5 == 1) {
            if (this.f3566b - this.f3567c <= 1) {
                return false;
            }
        } else if (this.f3568d - this.f3569e <= 1) {
            return false;
        }
        return true;
    }

    public String toString() {
        switch (this.a) {
            case 2:
                return this.f3566b + "." + this.f3567c + "." + this.f3568d + "." + this.f3569e;
            default:
                return super.toString();
        }
    }

    public u(int i5, int i6, int i10, int i11) {
        this.f3566b = i5;
        this.f3567c = i6;
        this.f3568d = i10;
        this.f3569e = i11;
    }

    public u(String str) {
        String[] split = str.split("\\.");
        this.f3566b = Integer.parseInt(split[0]);
        this.f3567c = Integer.parseInt(split[1]);
        this.f3568d = Integer.parseInt(split[2]);
        this.f3569e = Integer.parseInt(split[3]);
    }
}

package c5;

/* loaded from: classes.dex */
public final class e implements r {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public int f3328b;

    /* renamed from: c, reason: collision with root package name */
    public int f3329c;

    public /* synthetic */ e(int i5) {
        this.a = i5;
    }

    public void a(int i5) {
        int i6;
        int i10 = this.f3329c;
        if (i10 < i5 || (i6 = this.f3328b) <= 0) {
            p8.a.z("com.facebook.imagepipeline.memory.BasePool.Counter", "Unexpected decrement of %d. Current numBytes = %d, count = %d", Integer.valueOf(i5), Integer.valueOf(this.f3329c), Integer.valueOf(this.f3328b));
        } else {
            this.f3328b = i6 - 1;
            this.f3329c = i10 - i5;
        }
    }

    public int b() {
        int i5 = this.f3329c;
        if (i5 == 2) {
            return 10;
        }
        if (i5 == 5) {
            return 11;
        }
        if (i5 == 29) {
            return 12;
        }
        if (i5 == 42) {
            return 16;
        }
        if (i5 != 22) {
            return i5 != 23 ? 0 : 15;
        }
        return 1073741824;
    }

    public jj.l c() {
        return new jj.l(this.f3328b, this.f3329c);
    }

    public String toString() {
        switch (this.a) {
            case 5:
                StringBuilder sb2 = new StringBuilder("<");
                sb2.append(this.f3328b);
                sb2.append(' ');
                return com.discord.chat.bridge.botuikit.a.i(sb2, this.f3329c, '>');
            default:
                return super.toString();
        }
    }

    public /* synthetic */ e(int i5, int i6, int i10) {
        this.a = i10;
        this.f3328b = i5;
        this.f3329c = i6;
    }
}

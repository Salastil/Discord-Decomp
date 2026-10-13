package mc;

/* loaded from: classes3.dex */
public abstract class a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f14425d;

    /* renamed from: e, reason: collision with root package name */
    public int f14426e;

    public static String b(int i5) {
        return "" + ((char) ((i5 >> 24) & 255)) + ((char) ((i5 >> 16) & 255)) + ((char) ((i5 >> 8) & 255)) + ((char) (i5 & 255));
    }

    public static int e(int i5) {
        return (i5 >> 24) & 255;
    }

    public void a(int i5) {
        this.f14426e = i5 | this.f14426e;
    }

    public boolean c(int i5) {
        return (this.f14426e & i5) == i5;
    }

    public String toString() {
        switch (this.f14425d) {
            case 1:
                return b(this.f14426e);
            default:
                return super.toString();
        }
    }

    public /* synthetic */ a(int i5, int i6) {
        this.f14425d = i6;
        this.f14426e = i5;
    }
}

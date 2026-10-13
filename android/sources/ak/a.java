package ak;

import android.text.TextUtils;
import com.facebook.react.uimanager.ViewProps;

/* loaded from: classes3.dex */
public final class a {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public int f649b;

    /* renamed from: c, reason: collision with root package name */
    public int f650c;

    /* renamed from: d, reason: collision with root package name */
    public int f651d;

    /* renamed from: e, reason: collision with root package name */
    public int f652e;

    /* renamed from: f, reason: collision with root package name */
    public int f653f;

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static a b(String str) {
        char c6;
        ke.b.g(str.startsWith("Format:"));
        String[] split = TextUtils.split(str.substring(7), ",");
        int i5 = -1;
        int i6 = -1;
        int i10 = -1;
        int i11 = -1;
        for (int i12 = 0; i12 < split.length; i12++) {
            String x5 = tn.g.x(split[i12].trim());
            x5.getClass();
            switch (x5.hashCode()) {
                case 100571:
                    if (x5.equals(ViewProps.END)) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3556653:
                    if (x5.equals("text")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 109757538:
                    if (x5.equals(ViewProps.START)) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 109780401:
                    if (x5.equals("style")) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                default:
                    c6 = 65535;
                    break;
            }
            switch (c6) {
                case 0:
                    i6 = i12;
                    break;
                case 1:
                    i11 = i12;
                    break;
                case 2:
                    i5 = i12;
                    break;
                case 3:
                    i10 = i12;
                    break;
            }
        }
        if (i5 == -1 || i6 == -1 || i11 == -1) {
            return null;
        }
        return new a(i5, i6, i10, i11, split.length);
    }

    public boolean a() {
        int i5 = this.f649b;
        int i6 = 2;
        if ((i5 & 7) != 0) {
            int i10 = this.f652e;
            int i11 = this.f650c;
            if (((i10 > i11 ? 1 : i10 == i11 ? 2 : 4) & i5) == 0) {
                return false;
            }
        }
        if ((i5 & 112) != 0) {
            int i12 = this.f652e;
            int i13 = this.f651d;
            if ((((i12 > i13 ? 1 : i12 == i13 ? 2 : 4) << 4) & i5) == 0) {
                return false;
            }
        }
        if ((i5 & 1792) != 0) {
            int i14 = this.f653f;
            int i15 = this.f650c;
            if ((((i14 > i15 ? 1 : i14 == i15 ? 2 : 4) << 8) & i5) == 0) {
                return false;
            }
        }
        if ((i5 & 28672) != 0) {
            int i16 = this.f653f;
            int i17 = this.f651d;
            if (i16 > i17) {
                i6 = 1;
            } else if (i16 != i17) {
                i6 = 4;
            }
            if ((i5 & (i6 << 12)) == 0) {
                return false;
            }
        }
        return true;
    }

    public boolean c(int i5) {
        return i5 != -1 && this.f651d == (i5 % 3) * 3;
    }

    public void d() {
        this.f653f = (this.f651d / 3) + ((this.f652e / 30) * 3);
    }

    public String toString() {
        switch (this.a) {
            case 1:
                return this.f653f + "|" + this.f652e;
            default:
                return super.toString();
        }
    }

    public a(int i5, int i6, int i10, int i11, int i12, byte b10) {
        this.a = i12;
        switch (i12) {
            case 1:
                this.f653f = -1;
                this.f649b = i5;
                this.f650c = i6;
                this.f651d = i10;
                this.f652e = i11;
                break;
            default:
                this.f649b = i5;
                this.f650c = i11;
                this.f651d = i6;
                this.f652e = i10;
                this.f653f = i6 + i10;
                break;
        }
    }

    public a(int i5, int i6, int i10, int i11, int i12) {
        this.a = 3;
        this.f649b = i5;
        this.f650c = i6;
        this.f651d = i10;
        this.f652e = i11;
        this.f653f = i12;
    }
}

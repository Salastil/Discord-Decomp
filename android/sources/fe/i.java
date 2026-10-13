package fe;

import android.text.Layout;

/* loaded from: classes3.dex */
public final class i {

    /* renamed from: c, reason: collision with root package name */
    public CharSequence f8530c;
    public long a = 0;

    /* renamed from: b, reason: collision with root package name */
    public long f8529b = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f8531d = 2;

    /* renamed from: e, reason: collision with root package name */
    public float f8532e = -3.4028235E38f;

    /* renamed from: f, reason: collision with root package name */
    public int f8533f = 1;

    /* renamed from: g, reason: collision with root package name */
    public int f8534g = 0;

    /* renamed from: h, reason: collision with root package name */
    public float f8535h = -3.4028235E38f;

    /* renamed from: i, reason: collision with root package name */
    public int f8536i = Integer.MIN_VALUE;
    public float j = 1.0f;
    public int k = Integer.MIN_VALUE;

    /* JADX WARN: Code restructure failed: missing block: B:52:0x0071, code lost:
    
        if (r7 == 0) goto L39;
     */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0084  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00af  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x006f  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0071  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final wd.a a() {
        Layout.Alignment alignment;
        float f2;
        CharSequence charSequence;
        float f10 = this.f8535h;
        float f11 = -3.4028235E38f;
        if (f10 == -3.4028235E38f) {
            int i5 = this.f8531d;
            f10 = i5 != 4 ? i5 != 5 ? 0.5f : 1.0f : 0.0f;
        }
        int i6 = this.f8536i;
        if (i6 == Integer.MIN_VALUE) {
            int i10 = this.f8531d;
            if (i10 != 1) {
                if (i10 != 3) {
                    if (i10 != 4) {
                        if (i10 != 5) {
                            i6 = 1;
                        }
                    }
                }
                i6 = 2;
            }
            i6 = 0;
        }
        wd.a aVar = new wd.a();
        int i11 = this.f8531d;
        if (i11 != 1) {
            if (i11 != 2) {
                if (i11 != 3) {
                    if (i11 != 4) {
                        if (i11 != 5) {
                            com.discord.chat.bridge.botuikit.a.q(i11, "Unknown textAlignment: ", "WebvttCueParser");
                            alignment = null;
                        }
                    }
                }
                alignment = Layout.Alignment.ALIGN_OPPOSITE;
            } else {
                alignment = Layout.Alignment.ALIGN_CENTER;
            }
            aVar.f19783c = alignment;
            f2 = this.f8532e;
            int i12 = this.f8533f;
            if (f2 != -3.4028235E38f || i12 != 0 || (f2 >= 0.0f && f2 <= 1.0f)) {
                if (f2 == -3.4028235E38f) {
                    f11 = f2;
                }
                aVar.f19785e = f11;
                aVar.f19786f = i12;
                aVar.f19787g = this.f8534g;
                aVar.f19788h = f10;
                aVar.f19789i = i6;
                float f12 = this.j;
                if (i6 == 0) {
                    f10 = 1.0f - f10;
                } else if (i6 == 1) {
                    f10 = f10 <= 0.5f ? f10 * 2.0f : (1.0f - f10) * 2.0f;
                } else if (i6 != 2) {
                    throw new IllegalStateException(String.valueOf(i6));
                }
                aVar.f19790l = Math.min(f12, f10);
                aVar.f19794p = this.k;
                charSequence = this.f8530c;
                if (charSequence != null) {
                    aVar.a = charSequence;
                }
                return aVar;
            }
            f11 = 1.0f;
            aVar.f19785e = f11;
            aVar.f19786f = i12;
            aVar.f19787g = this.f8534g;
            aVar.f19788h = f10;
            aVar.f19789i = i6;
            float f122 = this.j;
            if (i6 == 0) {
            }
            aVar.f19790l = Math.min(f122, f10);
            aVar.f19794p = this.k;
            charSequence = this.f8530c;
            if (charSequence != null) {
            }
            return aVar;
        }
        alignment = Layout.Alignment.ALIGN_NORMAL;
        aVar.f19783c = alignment;
        f2 = this.f8532e;
        int i122 = this.f8533f;
        if (f2 != -3.4028235E38f) {
        }
        if (f2 == -3.4028235E38f) {
        }
        aVar.f19785e = f11;
        aVar.f19786f = i122;
        aVar.f19787g = this.f8534g;
        aVar.f19788h = f10;
        aVar.f19789i = i6;
        float f1222 = this.j;
        if (i6 == 0) {
        }
        aVar.f19790l = Math.min(f1222, f10);
        aVar.f19794p = this.k;
        charSequence = this.f8530c;
        if (charSequence != null) {
        }
        return aVar;
    }
}

package sk;

import android.net.Uri;

/* loaded from: classes3.dex */
public final class c extends d {

    /* renamed from: e, reason: collision with root package name */
    public final int f18040e;

    /* renamed from: i, reason: collision with root package name */
    public final String f18041i;

    /* renamed from: v, reason: collision with root package name */
    public final String f18042v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(int i5, Uri uri, int i6, Throwable th2) {
        super(th2);
        String uri2 = uri.toString();
        String valueOf = String.valueOf(i6);
        this.f18040e = i5;
        this.f18041i = uri2;
        this.f18042v = valueOf;
    }

    @Override // sk.d, java.lang.Throwable
    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append('\n');
        int i5 = this.f18040e;
        if (i5 == 1) {
            str = "Invalid parameters";
        } else if (i5 == 2) {
            str = "Failed to open the media target for write.";
        } else if (i5 == 3) {
            str = "URI type not supported at API level below 26";
        } else {
            if (i5 != 4) {
                throw null;
            }
            str = "No output tracks";
        }
        sb2.append(str);
        sb2.append("\nOutput file path or Uri encoded string: ");
        sb2.append(this.f18041i);
        sb2.append("\nMediaMuxer output format: ");
        sb2.append(this.f18042v);
        return sb2.toString();
    }
}

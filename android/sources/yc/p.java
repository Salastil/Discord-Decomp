package yc;

import qc.u;

/* loaded from: classes3.dex */
public final class p {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final String f20845b;

    /* renamed from: c, reason: collision with root package name */
    public final u f20846c;

    /* renamed from: d, reason: collision with root package name */
    public final int f20847d;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f20848e;

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x0052, code lost:
    
        if (r6.equals("cbc1") == false) goto L14;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public p(boolean z5, String str, int i5, byte[] bArr, int i6, int i10, byte[] bArr2) {
        char c6 = 0;
        int i11 = 1;
        ke.b.g((i5 == 0) ^ (bArr2 == null));
        this.a = z5;
        this.f20845b = str;
        this.f20847d = i5;
        this.f20848e = bArr2;
        if (str != null) {
            switch (str.hashCode()) {
                case 3046605:
                    break;
                case 3046671:
                    if (str.equals("cbcs")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3049879:
                    if (str.equals("cenc")) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3049895:
                    if (str.equals("cens")) {
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
                case 1:
                    i11 = 2;
                    break;
                case 2:
                case 3:
                    break;
                default:
                    ke.b.N("TrackEncryptionBox", "Unsupported protection scheme type '" + str + "'. Assuming AES-CTR crypto mode.");
                    break;
            }
        }
        this.f20846c = new u(i11, i6, i10, bArr);
    }
}

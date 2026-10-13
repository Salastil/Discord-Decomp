package ye;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class o extends n {

    /* renamed from: h, reason: collision with root package name */
    public final byte[] f20932h;

    public o(byte[] bArr) {
        super(Arrays.copyOfRange(bArr, 0, 25));
        this.f20932h = bArr;
    }

    @Override // ye.n
    public final byte[] z() {
        return this.f20932h;
    }
}

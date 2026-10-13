package sd;

import java.util.Arrays;
import zo.c0;

/* loaded from: classes3.dex */
public final class f extends pd.e {
    public byte[] G;
    public volatile boolean H;
    public byte[] I;

    @Override // ie.h0
    public final void n() {
        try {
            this.F.o(this.f16361e);
            int i5 = 0;
            int i6 = 0;
            while (i5 != -1 && !this.H) {
                byte[] bArr = this.G;
                if (bArr.length < i6 + 16384) {
                    this.G = Arrays.copyOf(bArr, bArr.length + 16384);
                }
                i5 = this.F.read(this.G, i6, 16384);
                if (i5 != -1) {
                    i6 += i5;
                }
            }
            if (!this.H) {
                this.I = Arrays.copyOf(this.G, i6);
            }
            c0.i(this.F);
        } catch (Throwable th2) {
            c0.i(this.F);
            throw th2;
        }
    }

    @Override // ie.h0
    public final void z() {
        this.H = true;
    }
}

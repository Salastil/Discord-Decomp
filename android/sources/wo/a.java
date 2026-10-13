package wo;

import java.util.Random;

/* loaded from: classes3.dex */
public abstract class a extends d {
    @Override // wo.d
    public final int a(int i5) {
        return ((-i5) >> 31) & (d().nextInt() >>> (32 - i5));
    }

    @Override // wo.d
    public final int b() {
        return d().nextInt();
    }

    public abstract Random d();
}

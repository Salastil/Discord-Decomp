package ws;

import java.io.IOException;

/* loaded from: classes3.dex */
public abstract class r {
    public static int a(int i5, int i6, int i10) {
        if ((i6 & 8) != 0) {
            i5--;
        }
        if (i10 <= i5) {
            return i5 - i10;
        }
        throw new IOException(a3.e.f(i10, i5, "PROTOCOL_ERROR padding ", " > remaining length "));
    }
}

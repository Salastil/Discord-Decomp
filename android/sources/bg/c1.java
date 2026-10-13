package bg;

import java.io.IOException;

/* loaded from: classes3.dex */
public final class c1 extends IOException {
    public c1(Exception exc) {
        super("Error in decoding CborValue from bytes", exc);
    }
}
